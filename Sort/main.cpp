#include <iostream>
void bubble_sort(int a[], int n)
{
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
void selection_sort(int a[], int n)
{
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void insertion_sort(int a[], int n)
{
    int temp;
    for(int i = 0; i < n; i++) {
        int j =i;
        while (j>0 and a[j-1] > a[j]) {
            temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}
void merge_sort(int a[], int start, int size)
{

    if ( size <= 1)
        return;
    else if ( size - start == 2 ) {
        if (a[size] < a[start]){
            int tmp = a[size];
            a[size] = a[start];
            a[start] = tmp;
        }
        return;
    } else {
        int middle = size/2;
        merge_sort(a, start, middle);
        merge_sort(a, middle, size);

        int mIndex = start;
        int lIndex = middle;
        int tmp[size];
        for(int i = start; i < size; i++) {
            if( (a[mIndex] < a[lIndex] and mIndex == middle ) or lIndex == size) {
                tmp[i] = a[mIndex];
                mIndex++;
            } else {
                tmp[i] = a[lIndex];
                lIndex++;
            }
        }
        for(int i = start; i < size; i++){
            a[i] = tmp[i];
        }
        return;
    }
}

// print an array with length n to standard output
void print_array(int a[], int n)
{
    for(int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
int main(int argc, char* argv[]) {
    std::string sort_type = std::string(argv[1]);
    int n = argc - 2; // do not count executable name or first argument
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = atoi(argv[i+2]);
    }
    std::cout << "Original list: ";
    print_array(arr, n);
    if (sort_type == "bubble") {
        bubble_sort(arr, n);
        std::cout << "Sorted list: ";
        print_array(arr, n);
    } else if (sort_type == "selection") {
        selection_sort(arr, n);
        std::cout << "Sorted list: ";
        print_array(arr, n);
    } else if (sort_type == "insertion") {
        insertion_sort(arr, n);
        std::cout << "Sorted list: ";
        print_array(arr, n);
    } else if (sort_type == "merge") {
        merge_sort(arr, 0, n);
        std::cout << "Sorted list: ";
        print_array(arr, n);
    } else {
        std::cout << "Sorry, " << sort_type << " sort is not implemented!" << std::endl;
    }
    delete [] arr;
}