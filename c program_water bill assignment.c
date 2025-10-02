#include<stdio.h>

int main()
{
   
    float bill,units;
    
    //user to input the water units
    
    printf(" Enter your water units:");
    scanf("%f",&units);
    
    if(units<=30)
    {
     bill=units*20;
    }
    else if (units<=60)
    {
    bill=units*25;
    }
    else {
    bill=units*30;
    }
    //Display result
     printf("Total_bill:%.2fKes\n",bill);
    return 0;
}