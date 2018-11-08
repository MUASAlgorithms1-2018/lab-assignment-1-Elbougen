#include <iostream>
#include <bits/stdc++.h>
#include "Stack.h"


int main(int argc, char* argv[]) {
    std::string word = std::string(argv[1]);
    int n = word.length();
    char arr[n+1] ;
    strcpy(arr,word.c_str());

    Stack myStack(n);

    bool result = true;
    char tmp;
    for(int i=0;i<n;i++){
        if(arr[i]=='(')
            result = result && myStack.push('A');
        else {
            tmp = myStack.pop();
            result = result && tmp == 'A';
        }
    }
    result = result && myStack.isEmpty();

    std::cout << std::boolalpha;
    std::cout<<result<<std::endl;
    return 0;
}

