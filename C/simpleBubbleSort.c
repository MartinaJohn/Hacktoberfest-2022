#include <stdio.h>
#define SIZE 50
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int array[SIZE], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array before sorting: \n");
    print_array(array, n);
    printf("\nUsing bubble sort: \n");
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
    printf("The sorted array is: ");
    print_array(array, n);
}
