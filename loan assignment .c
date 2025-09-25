//personal details of the student
/* 
Name: WAMBUA FAVOUR ASENATH 
Reg:PA106/G/28733/25
Description:C programme on students details
*/
#include<stdio.h>//Preprocessor directive 

//main function 
int main ()
{  int height;
  printf("Enter your height:");
  scanf("%d",&height);
  printf("Your height is %d\n",height);
  
  
  int bank_balance;
  printf("Insert your bank balance:");  
  scanf("%d",&bank_balance);
  printf("Your bank balance is %d\n",bank_balance);
  
  
  char ID[9];
  printf("Enter your ID number:");
  scanf("%s",&ID);
  printf("Your ID number is%s\n",ID);
  
  
  int age; 
  printf("Enter your age:");
  scanf("%d",&age);
  printf("Your age is%d\n",age);
  
  
  
  
    return 0;
  
  }