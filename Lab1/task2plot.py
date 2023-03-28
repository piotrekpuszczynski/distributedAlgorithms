from utils import runAndSave

iterations = 100000
argv = '1000 2,1000 500,1000 1000,1000'

runAndSave('./build/src/task2', iterations, argv, None, 'results/task2/')
