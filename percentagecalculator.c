#include <stdio.h>

void main()
{
char N;
float R,M,avg;
float M1, M2, M3,M4;


printf("enter the name=\n");
scanf("%c", &N);

printf("enter the roll no.=");
scanf("%f",&R);

printf("enter the marks obtained in subject 1=");
scanf("%f",&M1);

printf("enter the marks obtained in subject 2=");
scanf("%f",&M2);

printf("enter the marks obtained in subject 3=");
scanf("%f",&M3);

printf("enter the marks obtained in subject 4=");
scanf("%f",&M4);
printf("\n");
printf("\n");
printf("Student Details:-\n");
M=((M1+M2+M3+M4)/400)*100;

avg=(M1+M2+M3+M4)/4;

printf("Name of the student=%c\n",N);

printf("Rool no.=%f\n",R);

printf("percentage obtained is=%f\n",M);
printf("avg marks=%f\n",avg);

}