#include<stdio.h>
int main (){
int x,y,a,b,temp;
printf("Enter two numbers\n");
scanf("%d%d",&x,&y);
a=x;
b=y;
temp=a;
a=b;
b=temp;
printf("After swapping a=%d and b=%d\n",a,b);
printf("without using third var ");
a=x;
b=y;
a=a+b;
b=a-b;
a=a-b;
printf("After swapping without third variable a=%d and b=%d",a,b);  



return 0;
}
