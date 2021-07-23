#include <stdio.h>
void swap(int *,int *);
int main()
{
 int num1,num2;
 printf("Enter value of num1: ");
 scanf("%d",&num1);
 printf("Enter value of num2: ");
 scanf("%d",&num2);
 printf("The numbers before swapping are %d and %d\n",num1,num2);
 swap(&num1,&num2);
 printf("The numbers before swapping are %d and %d\n",num1,num2);
 return 0;
}
void swap(int *x, int *y)
{
 int t;
 t = *x;
 *x = *y;
 *y = t;
}
