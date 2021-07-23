#include <stdio.h>
int main()
{
    int NUM,i,j,SUM=0;
    printf("\nENTER THE NUMBER TILL WHICH YOU WANT THE SUM OF SQUARES OF ODD NUMBERS : ");
    scanf("%d",&NUM);
    for(i=1;i<NUM+1;i++)
    {
        if(i%2!=0)
        {
            SUM=SUM+(i*i);
        }
    }
    printf("\nTHE SUM OF SQUARE OF ODD NOS. TILL %d NO. IS : %d",NUM,SUM);
}
