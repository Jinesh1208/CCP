#include<stdio.h>
int main()
{
int a,b,c;
clrscr();
printf("Enter a,b,c in the equation ax^2 + bx + c=0 \n");
scanf("%d %d %d", &a, &b, &c);
find_roots(a,b,c);
getch();
return 0;
}


int find_roots(int a,int b ,int c)
{
double root1,root2,real,img;
int d=b*b-4*a*c;
if(d<0)
{
real = -b/(2.0*a);
img = sqrt(-d)/(2.0*a);
printf("Both roots are complex\n");
printf("First Root = %.2lf + i%.2lf\n", real, img);
printf("Second Root = %.2lf - i%.2lf\n", real, img);
}
else if(d>0)
{
root1 = (-b + sqrt(d))/(2.0*a);
root2 = (-b - sqrt(d))/(2.0*a);
printf("Both Roots are real and different\n");
printf("First Root = %.2lf\n",root1);
printf("Second Root = %.2lf\n",root2);
}
else
{
root1 = -b/(2.0*a);
root2 = root1;
printf("Both Roots are real and same\n");
printf("First Root = %.2lf\n",root1);
printf("Second Root = %.2lf\n",root2);
}
return 0;
}
