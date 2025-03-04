#include <stdio.h>

int sum(int a, int b){
    return a + b; 
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}

int main(void){
    int a, b;
    char choice;

    printf("Enter the first number:\nEnter an opetator: \nEnter the second number: \n");
    scanf("%d %c %d", &a , &choice, &b);

    switch(choice){
        case '+': printf("%d + %d = %d\n", a, b, sum(a, b)); break;
        case '-': printf("%d - %d = %d\n", a, b, sub(a, b)); break;
        case '*': printf("%d * %d = %d\n", a, b, mult(a, b)); break;
        case '/': 
        switch(b){
            case 0: printf("Error: Cannot divide by zero\n"); break;
            default: printf("%d / %d = %d\n", a, b, div(a, b)); break;
        }
        
        default: printf("Invalid operator\n"); break;
    }

    return 0;
}