/* Name:Asenath Favour Wambua
   Admission no.:PA106/G/28733/25
   Assignment:c program to calculate Fare
   */
#include<stdio.h>
int calculateFare(float distance)
 {
float fare;
totalfare=distance*50;
return fare;
}
int main (){
float distance,totalfare;
printf("Enter the distance:");
scanf("%f",&distance);
totalfare=calculateFare(distance);
printf("Your total fare is :KES %.2f",totalfare);
return 0;
}