#include <stdio.h>

int main()
{
    int n, i, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], temp[size];

    printf("Enter the array elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);

    char direction;
    printf("Enter direction (L for Left, R for Right): ");
    scanf(" %c", &direction);

    n = n % size;   

    if(direction == 'L' || direction == 'l')
    {
        for(i = 0; i < size; i++)
        {
            temp[i] = arr[(i + n) % size];
        }
    }
    else if(direction == 'R' || direction == 'r')
    {
        for(i = 0; i < size; i++)
        {
            temp[(i + n) % size] = arr[i];
        }
    }
    else
    {
        printf("Invalid direction!\n");
        return 0;
    }

    printf("Rotated array:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}