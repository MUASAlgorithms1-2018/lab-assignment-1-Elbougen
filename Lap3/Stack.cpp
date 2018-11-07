//
// Created by Marvin on 07.11.2018.
//

#include "Stack.h"

    Stack::Stack(int n) {
        t=-1;
        this->n=n;
        s = new int[n]();
    }

    int Stack::size(){
        return t+1;
    }

    bool Stack::push(char c){
        bool added;
        if(size() == n)
            added = false;
        else {
            t++;
            *(s+t) = c;
            added = true;
        }
        return added;
    }

    char Stack::pop(){
        char tmp;
        if (isEmpty())
            tmp = 'X';
        else {
            tmp = *(s + t);
            t--;
        }
        return tmp;
    }

    bool Stack::isEmpty(){
        return t<0;
    }



