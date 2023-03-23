from subprocess import Popen, PIPE
import matplotlib.pyplot as plt
import os

def runAndSave(exec, iterations, argv, save):

    args = argv.split()

    process = Popen(f'{exec} {iterations} {argv}', stdin=PIPE, stdout=PIPE, universal_newlines=True, shell=True)

    if not os.path.exists(save):
        os.makedirs(save)

    for arg in args:
        print(f'starting for args = {arg}')

        result = str(process.stdout.readline().strip())
        splited = result.split(', ')
        results = dict()
        for s in splited:
            key, val = s.split(';')
            results[int(key)] = float(val)

        f = open(f'{save}{arg}.txt', "w")
        f.write(result)
        f.close()

        plt.title(arg)
        plt.bar(results.keys(), results.values(), color='k')
        plt.savefig(f'{save}{arg}.png')
        plt.clf()

        print(f'    ...finished')
