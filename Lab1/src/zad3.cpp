#include <iostream>
#include <cmath>
#include <Election.hpp>

int main(int argc, char **argv) {
    if (argc < 2)
        throw(std::runtime_error("invalid arguments count"));

    int iterations = atoi(argv[1]);
    for (int arg = 2; arg < argc; arg++) {
        int n = atoi(argv[arg]);
        std::cout << "Starting for args = " << n << std::endl;

        double ex = 0;
        for (int i = 0; i < iterations; i++) {
            ex += election::election(n);
        }
        ex /= iterations;
        std::cout << "E[L] = " << ex << std::endl;
        double varx = 0;
        for (int i = 0; i < iterations; i++) {
            varx += std::pow(ex - election::election(n), 2);
        }
        varx /= iterations;
        std::cout << "V[L] = " << varx << std::endl;
    }

    return 0;
}
