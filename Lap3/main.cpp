#include <iostream>
#include "Stack.h"


int main() {
    char parentheses[] = {'(',')'};
    int n = 2;
    Stack myStack(n);

    bool result = true;
    char tmp;
    for(int i=0;i<n;i++){
        if(parentheses[i]=='(')
            result = result && myStack.push('A');
        else {
            tmp = myStack.pop();
            result = result && tmp != 'X';
        }
    }
    result = result && myStack.isEmpty();

    std::cout<<result<<std::endl;
    return 0;
}

