// Write a C program to find the maximum and minimum element in an array.
#include<stdio.h>
int main()
{
   printf("Enter the size of the array: ");
    int n ;
    scanf("%d",&n);
    int arr[n]; 
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)    {
        scanf("%d",&arr[i]);
    }   
    int  max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
      
       if(arr[i]<min)       {
           min=arr[i];
       }  
       if(arr[i]>max)       {
           max=arr[i];
       }
    }
    printf("The maximum element in the array is: %d\n",max);
    printf("The minimum element in the array is: %d\n",min);
    return 0;
}