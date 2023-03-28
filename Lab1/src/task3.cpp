#include <iostream>
#include <cmath>
#include <map>
#include <Utils.hpp>
#include <Election.hpp>

int main(int argc, char **argv) {
    if (argc != 4)
        throw(std::runtime_error("invalid arguments count"));

    int iterations = atoi(argv[1]);
    int from = atoi(argv[2]);
    int to = atoi(argv[3]);

    std::map<int, double> expected;
    std::map<int, double> variance;
    for (int n = from; n < to; n++) {
        double ex = 0;
        for (int i = 0; i < iterations; i++) {
            ex += election::election(n);
        }
        ex /= iterations;
        expected[n] = ex;

        double varx = 0;
        for (int i = 0; i < iterations; i++) {
            varx += std::pow(ex - election::election(n), 2);
        }
        varx /= iterations;
        variance[n] = varx;
    }
    utils::printMap(expected);
    utils::printMap(variance);

    return 0;
}
