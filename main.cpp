#include <iostream>
#include "bird.h"

int main() {
    Bird* birds[] = {
        new Duck(),
        new Penguin(),
        new Eagle()
    };
    std::cout << "----------------------\n";

    const int numBirds = sizeof(birds) / sizeof(birds[0]);

    for (int i = 0; i < numBirds; ++i) {
        std::cout << "Bird #" << i + 1 << ":\n";
        birds[i]->display();
        birds[i]->fly();
        birds[i]->swim();
        std::cout << "----------------------\n";
    }

    // Clean up
    for (int i = 0; i < numBirds; ++i) {
        delete birds[i];
    }

    return 0;
}

