double sum_even(double array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i+=2) {
        sum += array[i];
    }
    return sum;
}