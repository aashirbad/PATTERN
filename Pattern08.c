#include<stdio.h>
int main()
{
    int i;
    char b;
    for(i = 1; i <= 5; i ++)
    {
        for(b = 'E' ; b >= 'A'; b --)
            printf("%c " , b);
        printf("\n");
    }
}