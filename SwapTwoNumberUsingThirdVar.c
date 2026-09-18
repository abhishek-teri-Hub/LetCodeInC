/*
    The Program to swap two numbers using a third variable.
*/
#include<stdio.h>

int main() {
    
    // Declare two variables to hold the numbers and one temporary variable to hold the value during swapping

    int firstNumber,secondNumber,temp;

    // Ask user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    
    printf("Before swapping:\n");

    printf("The value of firstNumber is: %d\n", firstNumber);
    printf("The value of secondNumber is: %d\n", secondNumber);

    // Swapping using a third variable
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    printf("After swapping:\n");
    printf("The value of firstNumber is: %d\n", firstNumber);
    printf("The value of secondNumber is: %d\n", secondNumber);

    return 0;
}


