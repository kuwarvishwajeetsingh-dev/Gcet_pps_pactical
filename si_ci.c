#include<stdio.h>
#include<math.h>
int main(){
 float amount,years,rate,si,ci,a;
 printf("Enter the amount,years,rate:");
 scanf("%f%f%f",&amount,&years,&rate);
 si=(amount*years*rate)/100;
 a=amount*pow((1+rate/100),years);
 ci=a-amount;
 printf("Simple Interest = %f\n",si);
 printf("Compound Interest = %f\n",ci);

    return 0;
}