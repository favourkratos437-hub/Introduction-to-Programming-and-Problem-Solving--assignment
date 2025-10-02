/*
Name:WAMBUA ASENATH FAVOUR
Reg:PA106/G/28733/25
program:C Program to identify students eligibility for the final exam
*/
#include<stdio.h>
int main()
{
    float attendance,average_marks;
    //Inputting of student attendance and marks
    printf("Enter your attendance percentage: ");
    scanf("%f",&attendance);
    
    printf("Enter your average_marks: ");
    scanf("%f",&average_marks);
    //identifying eligibility
    
    if(attendance >= 75.0&&average_marks >= 40.0)
    {
    printf("you are eligible for the final exam.");
    }
    else
    {
    printf("Not eligible");
    }
    
    return 0;
}