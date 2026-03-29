//linear search
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Element found at index %d.",i);
            break;
        }
    }
    
    return 0;
}