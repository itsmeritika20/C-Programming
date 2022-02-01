#include <stdio.h>
int main()
{
    int arr[10] = {0, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the values for index %d\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value for index %d is %d\n",i,arr[i]);
    }
    

   // printf("%d", arr[7]);//
    return 0;
}