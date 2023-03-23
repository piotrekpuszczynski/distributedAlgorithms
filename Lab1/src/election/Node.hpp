#ifndef NODE_HPP
#define NODE_HPP

#include <vector>
#include <random>

class Node {
    bool connected;
public:
    void beep(double p);
    bool isConnected();
};

#endif /* NODE_HPP */
