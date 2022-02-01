#include <stdio.h>
void bubbleSort(int A[], int );
int main()
{
    int A[] = {34, 15, 29, 8};
    int i;
    bubbleSort(A, 4);
    for (i = 0; i <= 3; i++)
    {
        printf("%d", A[i]);
    }
}
void bubbleSort(int A, int N)
{
    int i,round, temp;
    for (round = 1; round <= N - 1; round++)
        for (i = 0; i <= N - 1 - round; i++)
            if (A[i] > A([i + 1]))
            {
                temp = A[i];
                A[i] = A([i + 1]);
                A([i + 1]) = temp;
            }
}