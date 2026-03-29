#include<stdio.h>
#include<string.h>
int main(){
  char s1[]="Hello";
    char s2[]="World!";
   printf("lenth of s1: %d\n",strlen(s1));
   printf("lenth of s2: %d\n",strlen(s2));
    printf("Concatenated string: %s\n",strcat(s1,s2));
    printf("String comparison: %d\n",strcmp(s1,s2));
    printf("Copying s2 to s1: %s\n",strcpy(s1,s2));
    printf("After copying, s1: %s\n",s1);

    return 0;
    }