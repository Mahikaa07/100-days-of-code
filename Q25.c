#include<Stdio.h>
int main() {
    int num1,num2;
    char operator;
    printf("enter first no:\n");
    scanf("%d", &num1);
    printf("enter an operator:\n");
    scanf(" %c", &operator);
    printf("enter second no:\n");
    scanf("%d", &num2);

    switch(operator) {
        case '+':
        printf("Result: %d\n", num1+num2 );
        break;
         case '-':
        printf("Result: %d\n", num1-num2 );
        break;
         case '*':
        printf("Result: %d\n", num1*num2 );
        break;
         case '/':
         if(num2!=0)
         printf("Result: %d\n", num1/num2 );
         else
         printf("Error: division by zero is not possible.\n");
        break;
        case '%':
        if(num2!=0)
        printf("Result: %d\n", num1%num2);
        else
        printf("Error: modulus by zero is not possible.\n");
        break;
        default:
        printf("invalid operator.\n");
    }
    return 0;
}
