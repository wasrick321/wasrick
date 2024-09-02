#include <stdio.h>
void main()
{
    int num;
    printf("enter=");
    scanf("%d",&num);
    if(num>=0)
   {
    printf("no. is positive\n");
if (num%2==0)
{
printf("is even\n");
}
else{printf("is odd\n");}


   } else{
    printf("no. is negitive\n");
    if (num%2==0)
{
printf("is even\n");
}
else{printf("is odd\n");}
   }
}