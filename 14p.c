#include<stdio.h>
int main(){
int a;
printf("Enter a number: "); 
scanf("%d",&a);
if(a==2){
    printf("%d is a prime number",a);
    else if(a=1){
                  printf("%d is not a prime number",a);
                }
else{
for(int i=2;i<=a;i++){
    if((a%i==0)&&(i<=a/2)){
        printf("%d is not a prime number",a);
        break;
    }
    else 
   {
    printf("%d is a prime number",a);
        break;
    }

}
}
    return 0;
}