#include <Election.hpp>

namespace election {
    int election(int n) {
        Network network(n);
        double p = (double) 1 / n;
        int i = 0;
        while (network.getSlot() != Slot::_SINGLE) {
            network.beepEachNode(p);
            i++;
        }
        return i;
    }

    int election(int n, int u) {
        Network network(n);
        int rounds = std::ceil(std::log2(u)) + 1;
        int r = 0;
        int i = 0;
        while (network.getSlot() != Slot::_SINGLE) {
            double p = (double) 1 / std::pow(2, r + 1);
            network.beepEachNode(p);
            i++;
            r = (r + 1) % rounds;
        }
        return i;
    }
}
