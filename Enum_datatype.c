// Enum dataype
#include<stdio.h>
int main(){

enum Day{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum   Day   today = Wednesday;
printf("The value of today is %d\n", today);

    return 0;
}