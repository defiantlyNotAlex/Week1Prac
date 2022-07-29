int min_element(int array[], int n) {
    if (n < 0) {
        return 0;
    }
    int biggest = array[0];
    for (int i = 0; i < n; i++) {
        if (biggest < array[i]) {
            biggest = array[i];
        }
    }
    return biggest;
}