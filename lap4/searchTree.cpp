//
// Created by Marvin on 15.11.2018.
//

#include "SearchTree.h"
#include "vertex.h"

searchTree::searchTree() : root(root) {
   root = 0;
}
searchTree::searchTree(int key): root(root) {
    root = vertex(key);
}

void searchTree::insert(vertex v, vertex x) {
    if (isEmpty(root))
        root = v;
    if (v.key == x.key)
        ; // Yes, what ever
    else if (v.key < x.key)
        if(v.right == 0)
            *v.right = x;
        else
            insert(*v.right,x);
    else
        if(v.left == 0)
            *v.left = x;
        else
            insert(*v.right, x);
}

vertex searchTree::findMax(vertex v) {
    if(isEmpty(v))
        return 0;
    if(v.right == 0)
        return v;
    return findMax(v);
}

vertex searchTree::findMin(vertex v) {
    if(isEmpty(v))
        return 0;
    if(v.right == 0)
        return v;
    return findMin(v);
}

bool searchTree::isEmpty(vertex v) {
    return &v == 0;
}