#include <Utils.hpp>
#include <Election.hpp>

int main(int argc, char **argv) {
    if (argc < 2)
        throw(std::runtime_error("invalid arguments count"));

    int iterations = atoi(argv[1]);
    for (int arg = 2; arg < argc; arg++) {
        std::map<int, double> results;
        int n;
        int u = 0;

        try {
            auto tuple = utils::split(argv[arg]);
            n = std::get<0>(tuple);
            u = std::get<1>(tuple);
        } catch (...) {
            n = atoi(argv[arg]);
        }

        for (int i = 0; i < iterations; i++) {
            int result;

            if (u) {
                result = election::election(n, u);
            } else {
                result = election::election(n);
            }
            
            results[result]++;    
        }
        for (auto &node: results) node.second /= iterations;
        utils::printMap(results);
    }

    return 0;
}
