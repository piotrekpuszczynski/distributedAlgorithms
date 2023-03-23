#include <iostream>
#include <Election.hpp>

int main(int argc, char **argv) {
    if (argc == 1 || argc > 3)
        throw(std::runtime_error("invalid arguments count"));

    int result;
    if (argc == 2) {
        int n = atoi(argv[1]);
        result = election::election(n);
    } else {
        int n = atoi(argv[1]);
        int u = atoi(argv[2]);
        result = election::election(n, u);
    }

    std::cout << result << std::endl;

    return 0;
}
