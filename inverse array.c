#include <stdio.h>
void main() {
//int arr[]={1,2,3,4,5};
//int length=sizeof(arr)/sizeof(arr[0]);
int l;
printf("Enter the number of elements: ");
scanf("%d",&l);
int arr[l], i;
printf("input the elements: \n");
 for (i=0; i<l; i++){
   scanf("%d",&arr[i]);
}
printf("original array\n");
for (int i=0; i<l; i++){
    printf("%d",arr[i]);
}
printf("\n");
printf("inverse array\n");
for (int i=l-1; i>=0; i--){
    printf("%d",arr[i]);
}
}
