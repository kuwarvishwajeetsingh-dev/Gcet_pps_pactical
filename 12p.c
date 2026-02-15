#include<stdio.h>
int main (){
    int n,evn=0,odd=0;
    printf("Enter a natural number: \n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
{
    if (i%2==0)
    {
        evn+=i;   ;
    }
    else
    {
        odd+=i;
    }
}
    printf("The sum of even numbers is %d\n",evn);
    printf("The sum of odd numbers is %d\n", odd);
    return 0;
}   