#ifndef NETWORK_HPP
#define NETWORK_HPP

#include <vector>
#include <Node.hpp>

enum Slot {
    _NULL,
    _SINGLE,
    _COLLISION
};

class Network {
    std::vector<Node> nodes;
    Slot slot;

public:
    Network(int n);
    void beepEachNode(double p);
    Slot getSlot();
};

#endif /* NETWORK_HPP */
