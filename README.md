# Distributed Algorithms

## Lab 1 - Leader election

to build cpp executables
```
mkdir build
cd build
cmake ..
make
```
this will create 4 executable files:
- elect - calculates number of slots to get first in which only one node respond, for 1 - argument defines number of nodes, for 2 - first is number of nodes and second upper bound to calculate round length,
- task2 - generates maps describing probability of election in each round, first argument is number of iterations to repeat experiment, rest are number of nodes or pair of number of nodes and upper bound,
- task3 - calculates expected value and variance of election for range of number of nodes, first argument is number of iterations, second and third is range of number of nodes to calculate expected value and variance,
- task4 - generates maps describing probability of success in one round for upper bound between 2 and number of nodes, first argument is number of iteration, rest are pairs of number of nodes and upper bound.

examples of execution
```
./src/elect 100
./src/elect 100 1000
```
```
./src/task2 10000 100 1000 2,1000 500,1000
```
```
./src/task3 10000 10 100 1000 10000
```
```
./src/task4 10000 10 100 1000 10000
```

to run scripts generating plots
```
python3 task2plot.py
python3 task4plot.py
```