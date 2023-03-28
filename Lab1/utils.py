from subprocess import Popen, PIPE
import matplotlib.pyplot as plt
import os

def runAndSave(exec, iterations, argv, res, save):

    process = Popen(f'{exec} {iterations} {argv}', stdin=PIPE, stdout=PIPE, universal_newlines=True, shell=True)

    if not os.path.exists(save):
        os.makedirs(save)

    if res == None:
        res = argv.split()
    for r in res:
        print(f'starting for args = {r}')

        result = str(process.stdout.readline().strip())
        splited = result.split(', ')
        results = dict()
        for s in splited:
            key, val = s.split(';')
            results[int(key)] = float(val)

        f = open(f'{save}{r}.txt', "w")
        f.write(result)
        f.close()

        plt.title(r)
        plt.bar(results.keys(), results.values(), color='k')
        plt.savefig(f'{save}{r}.png')
        plt.clf()

        print('    ...finished')
