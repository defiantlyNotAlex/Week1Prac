#include<iostream>
int array_sum(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum;
}
/*int main(void) {
    int arr [5] = {1, 2, 3, 4, 5};
    printf("%d", array_sum(arr, 5));
    return 0;
} */