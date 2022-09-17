#include <stdio.h>


int chkPair(int A[], int size, int x)
{

    for (int i = 0; i < (size - 1); i++)
    {

        for (int j = (i + 1); j < size; j++)
        {

            if (A[i] + A[j] == x)
            {

                printf("Pair with a given sum %d is (%d, %d)\n", x, A[i], A[j]);

                return 1;
            }
        }
    }

    return 0;
}

int main(void)
{

    int A[] = {1,4,6,7,3,2,9};
    int x = 13;

    int size = sizeof(A) / sizeof(A[0]);

    if (chkPair(A, size, x))
        printf("Valid pair exists\n");
    else 
        printf("valid pair does not exist.");
    return 0;
}