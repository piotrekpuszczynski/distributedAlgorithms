#ifndef UTILS_HPP
#define UTILS_HPP

#include <tuple>
#include <map>
#include <sstream>
#include <iostream>

namespace utils {
    std::tuple<int, int> split(const std::string &s);
    void printMap(const std::map<int, double> &results);
}

#endif /* UTILS_HPP */
