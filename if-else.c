#include  <stdio.h>

int main(){
    // Exercise 1
    /*int num1;
    int num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2){
        printf("%d is equal to %d \n", num1, num2);
    } else {
        printf("%d is NOT equal to %d \n", num1, num2);
    }*/

    
    int a, b, result;
    char op; // to store the operator
    
    printf("Enter two numbers: ");
    scanf(" %d %d", &a, &b);
    printf("Enter an arithmetic operator: ");
    scanf(" %c", &op);

    if(op == '+')
    {
        result = a + b; 
    }
    
    printf("Result = %d\n", result);
    
}