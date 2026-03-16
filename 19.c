// 19.c takes an array of integers as input and calculates the sum of all the elements in the array. 
#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n,sum=0;  
    scanf("%d",&n);
   int  arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}