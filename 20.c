// 20.c takes two arrays of integers as input and calculates the sum of corresponding elements from both arrays, 
// storing the results in a third array.
//  Finally, it prints the elements of the third array.
#include<stdio.h>
int main()
{
    printf("Enter the size of the array 1 and array 2 same!! \n");
    printf("Enter the size of the array 1: ");
    int n,m,sum=0;
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements of the array 1: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the array 2: ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements of the array 2: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[n+m];
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    printf("The sum of the two arrays in array_3 is: ");
    for(int i=0;i<n;i++)    {
        printf("%d ",arr3[i]);
    }
    return 0;
}