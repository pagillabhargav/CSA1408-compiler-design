#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int z = x + y;  

    if (x > 0) {
        printf("x is positive.\n");
    } else {
        printf("x is non-positive.\n");  
    }

    
    if (y < 0) {
        printf("y is negative.\n");
    } else {
        printf("y is non-negative.\n");
    }

    printf("The sum of x and y is %d.\n", z);

    return 0;
}