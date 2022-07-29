#include<iostream>
int sum_two_arrays(int array[], int secondarray[], int n) {
    int sum;
    for (int i = 0; i < n; i++) {
        sum += array[i] + secondarray[i];
    }
    return sum;
}
/*int main(void) {
    int arr [5] = {1, 2, 3, 4, 5};
    printf("%d", sum_two_arrays(arr, arr, 3));
    return 0;
}*/