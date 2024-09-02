#include<stdio.h>
void main(){
int a;
// int sum;
printf("enter=");
scanf("%d",&a);
                                                        //    int i=0;
                                                        //    while (i<=a)
                                                        //    {
                                                        //    printf("%d\n",i);
                                                        //    i++;
                                                        //    }
                                                           

     // for(int i=1;i<=a;i++){
    //     sum=sum +i;

       
    // }
    //  printf("%d\n",sum);
int fact=1;
for (int i=1; i <=a ;  i++)
{
    fact=fact * i;
}
printf("%d",fact);

}