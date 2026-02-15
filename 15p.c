#include<stdio.h>
void sum(int a){
 int sum=0;
 while(a!=0){
     sum=sum+a%10;
     a=a/10;
 } printf("The sum of the digits is: %d",sum);
}
int main(){
int a;
printf("Enter a number: ");
scanf("%d",&a); 
sum(a);









    return 0;
}