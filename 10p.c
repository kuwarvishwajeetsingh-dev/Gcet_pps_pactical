#include<stdio.h>
int main (){
    int a , sum=0;
    printf("Enter a number");
    scanf("%d",&a);
    for( int i =1;i<=a;i++)
    {
        sum+=i;
    }
    printf("The sum is %d",sum);
    
    
    return 0;
}