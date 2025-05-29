#include <stdio.h>



int main()
{
    int arr[100];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0]

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);

        // Move pointer to next array element
        ptr++;
    }

    // Make sure that pointer again points back to first array element
    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // Print value pointed by the pointer
        printf("%d ", *ptr);

        // Move pointer to next array element
        ptr++;
    }
    ptr = &arr[N-1];
printf("\nReverse Array elements: ");
    for (i = N-1; i >=0; i--)
    {
        // Print value pointed by the pointer
        printf("%d ", *ptr);

        // Move pointer to next array element
        ptr--;
    }
    return 0;
}
