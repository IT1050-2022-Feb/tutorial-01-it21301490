/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Mark: ");
    for(i=0; i<2; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/2;
    printf("\nAverage Mark = %0.2f", avg);
    getch();
    return 0;
}


