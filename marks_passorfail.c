#include <stdio.h>
void main()
{
      int num;
    printf("enter=");
    scanf("%d",&num);
    if(num<30) {printf("Fail\n");
printf("grade=C");}
    
   else if(num>=30 && num<70)
   {
    printf("pass\n");
    printf("grade=B");
   }

else if(num>=70 && num<90)
   {
    printf("pass\n");
    printf("grade=A");
   } 
   else if(num>=90 && num<=100)
   {
    printf("pass\n");
    printf("grade=A+");
   } 


    else{
    printf("undefined\n");
    }
// num>30 && num<=100 ? printf("pass"): printf("fail");

}