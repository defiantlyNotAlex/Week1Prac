#include<iostream>
int array_sum(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
        sum += array[i];
    }

    return sum;
}