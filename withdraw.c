// Name:WABUA ASEMATH FAVOUR
//Reg No:PA106/G/28733/25
//Description:A BANK PROGRAMM WITHDRAWAL SYSTEM

#include <stdio.h>
int main(){

int balance, withdraw;
 printf("enter your  initial balance:");
scanf("%d",&balance);

while (balance > 0){
    
    printf("enter amount to withdraw:");
    
    scanf("%d",&withdraw);
    balance-=withdraw;

    printf("remaining balance: %d \n",balance);

}
  
    
    printf("you dont have enough money for the widthrawal! \n");
    
    {
        /* code */
    }
    



    

    /* code */


   

    
     return 0;
}