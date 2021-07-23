#include<stdio.h>
int main()
{
int marks[4][3],i,j,maxmarks;
for(i=0;i<4;i++)
{
printf("Enter the marks obtanined by student %d",i+1);
for(j=0;j<3;j++)
{
printf("\nmarks[%d][%d]=",i,j);
scanf("%d",&marks[i][j]);
}
}
for(j=0;j<3;j++)
{
maxmarks=marks[0][j];
for(i=1;i<4;i++)
{
if(marks[i][j]>maxmarks)
maxmarks=marks[i][j];
}
printf("\nThe highest marks obtanined in the subject %d=%d\n",j+1,maxmarks);
}
}
