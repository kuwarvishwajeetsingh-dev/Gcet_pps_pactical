#include<stdio.h>
int main()
{
    char str[100][100]={"Hello","World","Welcome","To","C Programming"};    
    int i;

    for(i=0;i<5;i++)
    {
        printf("%s ",str[i]);
    }
    return 0;
}