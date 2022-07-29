double weighted_average(int array[], int n) {
    double weighted_sum = 0;
    for (int i = 0; i < n; i++) {
        weighted_sum += array[i]*num_count(array, n, array[i]);
    }
    return weighted_sum/n;
}
int num_count(int array[], int n, int number) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }
    return count;
}