//
// Created by Marvin on 07.11.2018.
//

#ifndef LAP3_STACK_H
#define LAP3_STACK_H

#include <rpcndr.h>

class Stack{
public:
    Stack(int n);
    int size();
    bool push(char c);
    char pop();
    bool isEmpty();
private:
    int t;
    int n;
    int *s;
};


#endif //LAP3_STACK_H
