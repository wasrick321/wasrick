#include<stdio.h>
#include<math.h>
void main()
{
   char ch;
printf("enter a char=");
scanf("%c",&ch);

if (ch >= '0' && ch <= '9')
        printf("It is a digit...\n");

else if (ch>='a' && ch<='z')
{printf("is lowercase...\n");
 }
else if (ch>='A' && ch<='Z')
{
  printf("is upper case...\n");
}
else
        printf("It is a special char...\n");
}