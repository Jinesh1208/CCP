#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character \n");
  scanf("%c",&ch);
  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'u':
	printf("Entered character is a vowel");
	break;
    default:
	printf("Entered character is a consonant");
	break;
   }

}
