//
// Created by Marvin on 15.11.2018.
//
#include "vertex.h"

#ifndef LAP4_SEARCHTREE_H
#define LAP4_SEARCHTREE_H
class searchTree {
public:
    searchTree();
    searchTree(int);
    void insert(vertex, vertex);
    vertex findMin(vertex);
    vertex findMax(vertex);

    vertex root;

private:
    bool isEmpty(vertex);
};
#endif //LAP4_SEARCHTREE_H
