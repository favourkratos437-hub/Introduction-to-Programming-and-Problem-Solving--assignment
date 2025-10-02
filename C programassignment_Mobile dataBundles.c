#include<stdio.h>

int main()
{
    int choice;
    
     //Displaying of the data choices
     printf("1.100MB @ 50kes\n");
     printf("2.500MB @200kes\n");
     printf("3.1GB @350kes\n");
     printf("4.2GB @600kes\n");
     printf("Enter your choice:\n");
     scanf("d%",&choice);
     
     switch(choice)
     {
     case 1:
     printf("you chose 100MB.cost=50kes\n");
     break;
     
     case 2:
     printf("Your chose 500MB.cost=200kes\n");
     break;
     
     case 3:
     printf("you chose 1GB.cost=350kes\n");
     break;
     
     case 4:
     printf("you chose 2GB.cost =600kes\n");
     
     default:
     printf("invalid choice\n");
     
     }
    return 0;
}