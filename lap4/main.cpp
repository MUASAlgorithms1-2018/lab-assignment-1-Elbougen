#include <iostream>
#include "SearchTree.h"
#include "vertex.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    searchTree *tree = new searchTree(5);
    tree->insert(vertex(0),vertex(0));
    return 0;
}