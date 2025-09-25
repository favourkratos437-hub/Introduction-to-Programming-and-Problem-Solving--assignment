/*
Name :WAMBUA ASENATH FAVOUR 
Reg no::PA106/G/28733/25
Description:Program showing the  volume and surface area
*/
#include<stdio.h> //Preprocessor directive 

int main ()
{
//declaring variables
 const float pi=3.142;
 float radius,height,volume,surface_area;
 
 //Prompting user to input 
 printf("Enter radius:");
 scanf("%f",&radius);
  
  printf("Enter height:");
  scanf("%f",&height);
  
  // Calculation of volume and surface_area 
   volume =pi*radius*radius*height;
   surface_area =2*pi*radius*radius+2*pi*radius*height;
    
    printf("volume is %.4f\n",volume);//displaying volume 
    printf("surface_area is %.4f\n",surface_area);//displaying surface_area 

  return 0;// execution successful
  }

    