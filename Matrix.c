#include<stdio.h>

void main() {
int a[10][10],i,j;
printf("Enter the matrix: \n");
for (i=0; i<2; i++){
    for (j=0; j<2; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("matrix: \n");
for (i=0; i<2; i++){
    for (j=0; j<2; j++){

        printf("%d ",a[i][j]);
}
        printf("\n");


}
}
