##include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Division by zero is not allowed\n");
                return 1;
            }
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}