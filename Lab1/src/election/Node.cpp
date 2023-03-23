#include <Node.hpp>

std::random_device rd; 
std::mt19937 gen(rd());
std::uniform_real_distribution<double> dis(0, 1.0);
    
void Node::beep(double p) {
    double random = dis(gen);
    connected = (random < p);
}

bool Node::isConnected() {
    return connected;
}

