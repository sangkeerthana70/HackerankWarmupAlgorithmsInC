#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(int a0, int a1, int a2, int b0, int b1, int b2, int* result_count);

int main(void)
{
    int result_count = 0;
     solve(7, 4, 3, 7, 6, 9, &result_count);
    return 0;
}

void solve(int a0, int a1, int a2, int b0, int b1, int b2, int* result_count) {
    /*
     * Write your code here.
     */
    int a[3];

    int i = 0;
    int arraySize = 0;

    if (a0 != b0)
    {
        a[i] = 1;
        arraySize ++;
    }


    if (a1 != b1)
    {
        a[i + 1] = 1;
        arraySize ++;
    }


    if (a2 != b2)
    {
        a[i + 2] = 1;
        arraySize ++;
    }
    *result_count = arraySize;
    printf("result_count: %i\n", arraySize);

    for (int j = 0; j < *result_count; j ++)
    {
       printf("element in array: %d\n", a[j]);
    }
}

