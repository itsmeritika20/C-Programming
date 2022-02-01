#include <stdio.h>

int main()
{
    int returnMin(int arr[], int n)
    {
        int min = arr[0];
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        return min;
    }
    int main()
    {
        int arr[] = {1, 12, 3, 5455, 5, 67, 674};
        int min = returnMin(arr, 7);
        printf("The minimum element in this array is %d", min);
    }
    return 0;
}