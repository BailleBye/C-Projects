#include <stdio.h>

float sum(float a, float b){
    return a + b; 
}

float sub(float a, float b){
    return a - b;
}

float mult(float a, float b){
    return a * b;
}

float div(float a, float b){
    if(b == 0){
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return a / b;
}

int main(void){
    float a, b;
    char choice;

    printf("Enter the first number:\nEnter an opetator: \nEnter the second number: \n");
    scanf("%f %c %f", &a , &choice, &b);

    switch(choice){
        case '+': printf("%f + %f = %f\n", a, b, sum(a, b)); break;
        case '-': printf("%f - %f = %f\n", a, b, sub(a, b)); break;
        case '*': printf("%f * %f = %f\n", a, b, mult(a, b)); break;
        case '/': printf("%f / %f = %f\n", a, b, div(a, b)); break;
        default: printf("Invalid operator\n"); break;
    }

    return 0;
}
