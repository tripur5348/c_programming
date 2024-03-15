//Take side of tringle and print its area
#include<stdio.h>
int main()
{

float marathi=0;
float hindi=0;
float sunskrit=0;
float geographi=0;
float history=0;
float total=0;
float per=0;

printf("Enter marathi mark\n");
scanf("%f",&marathi);
printf("Enter hindi mark\n");
scanf("%f",&hindi);
printf("Enter sunskrit mark\n");
scanf("%f",&sunskrit);
printf("Enter geographi mark\n");
scanf("%f",&geographi);
printf("Enter history mark \n");
scanf("%f",&history);

total=marathi+hindi+sunskrit+geographi+history;
printf("Total mark is%f\n",total);

per=total/500*100;

printf("percentage is%f\n",per);

return 0;
}
