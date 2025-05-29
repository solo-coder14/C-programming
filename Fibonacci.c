#include<stdio.h>
int Fibonacci(int); // function Create
int main()
{
 int num,i;
 printf("Enter Series of Fibonacci : ");
 scanf("%d",&num);
 printf("Fibonacci series\n");
 for ( i = 0; i<num; i++)
 {
 printf("%d ", Fibonacci(i));
 }
 return 0;
}
int Fibonacci(int i)
{
 if ( i == 0 )
 return 0;
 else if ( i == 1 )
 return 1;
 else
 return ( Fibonacci(i-1) + Fibonacci(i-2) );
}

