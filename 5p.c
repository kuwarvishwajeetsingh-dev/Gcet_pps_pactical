#include<stdio.h>
int main (){
    int a,b,C;
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&C);
    if (a>b && a>C)
    {
        printf("%d is the greatest number",a);
    }
    else if (b>a && b>C)
    {
        printf("%d is the greatest number",b);
    }
    else
    {
        printf("%d is the greatest number ",C);
    }

   return 0;
}