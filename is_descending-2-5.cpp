#include<iostream>
bool is_descending(int array[], int n){
    if (n < 0) {
        return false;
    }
    int last = array[0];
    bool descending = true;
    for (int i = 1; i < n; i++) {
        if ( array[i] > last) {
            descending = false;
        }
    }
    return descending;
}