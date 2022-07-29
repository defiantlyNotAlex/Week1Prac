#include<iostream>
int num_count(int array[], int n, int number) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }
    return count;
}
/*int main(void) {
    int arr [5] = {1, 2, 3, 4, 5};
    printf("%d", num_count(arr, 5, 3));
    return 0;
}*/