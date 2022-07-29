#include<iostream>
double array_mean(int array[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum/n;
}
/*int main(void) {
    int arr [5] = {1, 2, 3, 4, 5};
    printf("%f", array_mean(arr, 5));
    return 0;
}*/