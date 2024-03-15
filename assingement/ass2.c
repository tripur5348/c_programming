//Take side of tringle and print its area
#include<stdio.h>
int main()
{

float a=0;
float b=0;
float multi=0;
float add=0;
float sub=0; 

printf("Enter First value\n");
scanf("%f",&a);
printf("Enter second value\n");
scanf("%f",&b);

multi=a*b;
printf("multi is %f\n",multi);

add=a+b;
printf("add is %f\n",add);

sub=a-b;
printf("sub is %f\n",sub);

return 0;
}
