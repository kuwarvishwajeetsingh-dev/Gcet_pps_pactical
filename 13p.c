#include<stdio.h>
void fib(int n)
{
    if(n<=0)
    {
        printf("Please enter a positive integer.");
        return;
    }
    else if(n>=0)
    {
       long long a=0,b=1,c;
       for (int i=1;i<=n;i++) 
        {
            printf("%lld ",a);
             c=a+b;
             a=b;
             b=c;
        }
  
     }
}
int main(){
    int  n;
    printf("Enter the num:");
    scanf("%d",&n);
    fib(n);
    return 0;
}