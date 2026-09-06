#include <stdio.h>

void increaseByOne(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i]++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    increaseByOne(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}