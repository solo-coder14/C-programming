#include <stdio.h>
void main () {
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);
    int i,arr[n];
    printf("Enter the element:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for (i=0; i<n; i++){
         if (largest<arr[i])
             largest=arr[i];
    }
    printf("\nlargest element present in the given array is :%d",largest);

}

