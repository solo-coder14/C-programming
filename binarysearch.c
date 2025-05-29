#include <stdio.h>

void main() {
  int data[30];
  printf("How many elements: ");
  int n;
  scanf("%d",&n);
  printf("An Array: ");

  for (int i=0; i<n; i++){
    scanf("%d",&data[i]);
  }
   printf("Enter the element: ");
   int item;
   scanf("%d",&item);
   int beg=0;
   int end=n-1;
   int loc=0;
   int mid = (beg + end)/2;
   while (beg<=end){
    if ( data[mid] < item ){  
        beg = mid + 1;     
      }else if ( data[mid] == item ){
       printf("Element is found at index: %d",mid);
       loc++; 
       break; 
      }else{ 
         end = mid - 1;  
      }  
      mid = (beg + end)/2; 
   }  
   if ( loc==0 ){
      printf("Element is not found!");
   }
}
