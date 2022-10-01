#include <stdio.h>
int main()
{
    int a[20], x, n, flag = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    printf("\nEnter the element to be searched: ");
    scanf("%d", &x);

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == x)
        {
            flag = 1;
            printf("\nElement found at index: %d", i);
        }
    }

    if (flag == 0)
    {
        printf("\nElement not found.");
    }

    return 0;
}