#include<algorithm>
int median_array(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    std::sort(array[0], array[n]);
    return array[n/2];
}