#include <stdio.h>

int main(void) {

    char x[10] = "abcdefg";
    float *ptx;

    for (ptx = &x[0]; ptx <= &x[9]; ptx++)
    {
        printf("\n %c", *ptx);
    }
    

    return 0;
}