#include<stdio.h>
int main ()
{
int math,phy,chem,eng,comp;
float per;
printf("Enter the marks of 5 subjects\n");
scanf("%d%d%d%d%d",&math,&phy,&chem,&eng,&comp);
 int sum=math+phy+chem+eng+comp;
 printf("The total marks is %d\n",sum);

per=(float)(sum/500.0)*100;
printf("The percentage is %.1f",per);
    return 0;
}