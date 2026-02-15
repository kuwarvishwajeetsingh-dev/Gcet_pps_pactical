#include<stdio.h>
 int factorial(int n)
{
    int Sum;
    if (n==0)
    {
        return 1;
    }
    else
    {
    Sum=n*factorial(n-1);
    return Sum;
    }
}
int main (){
int n;
printf("Enter a number: \n");
scanf("%d",&n);
  int fact=factorial(n);
 printf("The factorial is %d",fact);
    
    return 0;
}