#include<iostream>
void two_five_nine(int array[], int n){
    int twos = 0;
    int fives = 0;
    int nines = 0;
    for (int i = 0; i < n; i++) {
        switch (array[i])
        {
        case 2:
            twos++;
            break;
        case 5:
            fives++;
            break;
        case 9:
            nines++;
            break;
        }
        printf("2:%d;5:%d;9:%d\n", twos, fives, nines);
    }
}