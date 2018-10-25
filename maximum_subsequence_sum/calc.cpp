//
// Created by Marvin on 12.10.2018.
//
#include <iostream>

using namespace std;

int cubic_mss(int *arr, int n) {
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int thisSum = 0;
            for (int k = i; k <= j; k++)
                thisSum += arr[k];
            if (thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}

int quadratic_mss(int *arr, int n) {
    int maxSum = 0;
    for (int i = 0; i < n; i++) {
        int thisSum = 0;
        for (int j = i; j < n; j++) {
            thisSum += arr[j];
            if (thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}

int linear_mss(int *arr, int n) {
    int maxSum = 0;
    int thisSum = 0;
    for (int i = 0; i < n; i++) {
        thisSum += arr[i];
        if (thisSum > maxSum)
            maxSum = thisSum;
        else if (thisSum < 0)
            thisSum = 0;
    }
    return maxSum;
}