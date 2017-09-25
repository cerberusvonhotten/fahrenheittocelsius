#include <stdio.h>
/*
Fahrenheit to Celsius Temperature converter.
by Cerberus Von Hotten
2017
*/

int main()
{

float cel,fahr;

printf("Fahrenheit to Celsius converter.\n");
printf("Input the Fahrenheit value:");
scanf("%f", &fahr);

cel = (fahr-32.0) * 5.0/9.0;
printf("%f Fahrenheit = %f Celsius \n",fahr,cel);




return 0;
}
