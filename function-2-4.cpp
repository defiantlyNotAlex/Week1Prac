#include<iostream>
bool is_ascending(int array[], int n){
    if (n < 0) {
        return false;
    }
    int last = array[0];
    bool ascending = true;
    for (int i = 1; i < n; i++) {
        if ( array[i] < last) {
            ascending = false;
        }
    }
    return ascending;
}