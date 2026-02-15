#include<stdio.h>
int main (){
    int a,b;
    char op;
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
    {
        case '+':
            printf("The sum is %d",a+b);
            break;
        case '-':
            printf("The difference is %d",a-b);
            break;
        case '*':
            printf("The product is %d",a*b);
            break;
        case '/':
            if(b!=0)
                printf("The quotient is %.2f",(float)a/b);
            else
                printf("Error: Division by zero");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}