#include<stdio.h>

void main()
{
    int age;

printf("enter age=");
scanf("%d",&age);
                       if (age>=18 && age<100)
                       {
                        printf("u are an adult;)");
                       }
                       else if (age>100)
                        {
                            /* code */printf("why u still living??");
                        }
                       else if (age<18) {
                        age>13 ? printf("at least teenager"):printf("bacha sala");
                        }
                        
                        
                       
}