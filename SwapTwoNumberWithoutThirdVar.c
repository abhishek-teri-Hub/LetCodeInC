/*
 Program to swap two numbers without using third variable

*/
#include<stdio.h>

int main(){

    // Declare two variables to hold the numbers

    int firstNumber,secondNumber;

    // Ask user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    
    printf("Before swapping:\n");

    printf("The value of firstNumber is: %d\n", firstNumber);
    printf("The value of secondNumber is: %d\n", secondNumber);

    // Swapping without using a third variable
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    printf("After swapping:\n");
    printf("The value of firstNumber is: %d\n", firstNumber);
    printf("The value of secondNumber is: %d\n", secondNumber);

    return 0;


}