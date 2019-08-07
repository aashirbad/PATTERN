#include<stdio.h>
int main()
{
    int i;
    char b;
     for(b = 'E' ; b >= 'A'; b --)
     {
        for(i = 1; i <= 5; i ++)
            printf("%c " , b);
        printf("\n");
    }
}