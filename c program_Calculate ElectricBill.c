/*
Name:Asenath Favour Wambua
Admission no.:PA106/G/28733/25
program:CalculateElectricBill
*/
#include<stdio.h>
float convertToCelsius(float Fahrenheit){
float celsius;
celsius=(Fahrenheit-32)*5.0/9.0;
return celsius;
}

int main()
{
    float Fahrenheit,celsius;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&Fahrenheit);
    celsius=convertToCelsius(Fahrenheit);
    printf("Temperature in celsius=%.2f",celsius);
    return 0;
}