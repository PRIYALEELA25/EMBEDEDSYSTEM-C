#include <stdio.h>

int secondLargest(int arr[], int size)
{
    int largest = arr[0];
    int second_largest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main()
{
    int array[] = {2, 8, 10, 15, 1};
    int size = sizeof(array) / sizeof(array[0]);

    int result = secondLargest(array, size);

    printf("Second largest element = %d\n", result);
    return 0;
}