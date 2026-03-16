//write a program to print armstrong 1 to 1000
#include<stdio.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("Armstrong numbers between 1 and 1000 are: ");
    for(num=1;num<=1000;num++)
    {
        temp=num;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
        if(sum==num)
        {
            printf("%d ",num);
        }
    }
    return 0;
}
