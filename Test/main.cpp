#include <iostream>



using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << sizeof(arr) / sizeof(int) << endl;

    int maxSum = 0;
    int n = (sizeof(arr) / sizeof(int));
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int thisSum = 0;
            for (int k = i; k < n; k++)
                thisSum += arr[k];
            if (thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    cout << maxSum << endl;
    return 0;
}