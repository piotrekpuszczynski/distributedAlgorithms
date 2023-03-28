#include <iostream>
#include <Utils.hpp>
#include <Election.hpp>

int main(int argc, char **argv) {
    if (argc < 2)
        throw(std::runtime_error("invalid arguments count"));

    int iterations = atoi(argv[1]);
    for (int arg = 2; arg < argc; arg++) {
        int u = atoi(argv[arg]);
        int round = std::ceil(std::log2(u)) + 1;
        std::map<int, double> results;
        for (int n = 2; n <= u; n++) {
            double sum = 0;
            for (int i = 0; i < iterations; i++) {
                int result = election::election(n, u);
                if (result <= round) sum++;
            }
            sum /= iterations;
            results[n] = sum;
        }
        utils::printMap(results);
    }

    return 0;
}
