#include <Network.hpp>

Network::Network(int n): nodes(n, Node()), slot(Slot::_NULL) {}

void Network::beepEachNode(double p) {
    int connections = 0;
    for (auto &node: nodes) {
        node.beep(p);
        if (node.isConnected())
            connections++;
    }

    if (connections == 0) slot = Slot::_NULL;
    else if (connections == 1) slot = Slot::_SINGLE;
    else slot = Slot::_COLLISION;
}

Slot Network::getSlot() {
    return slot;
}
