#include <Utils.hpp>

namespace utils {
    std::tuple<int, int> split(const std::string &s) {
        std::tuple<int, int> result;
        std::stringstream ss(s);
        std::string item;
        char delimiter = ',';

        getline(ss, item, delimiter);
        std::get<0>(result) = stoi(item);
        if (getline(ss, item, delimiter)) {
            std::get<1>(result) = stoi(item);
        } else {
            throw(std::runtime_error("invalid argument format"));
        }

        return result;
    }

    void printMap(const std::map<int, double> &results) {
        std::string s;
        std::for_each(results.cbegin(), results.cend(),
            [&s](const auto &result) {
                s += std::to_string(result.first);
                s += ';';
                s += std::to_string(result.second);
                s += ", ";
            });
        s.erase(s.cend() - 2);
        std::cout << s << std::endl;
    }
}
