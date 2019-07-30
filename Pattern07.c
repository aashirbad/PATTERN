#include<stdio.h>
void main()
{
    int i;
    int j;
    for(i = 0; i < 5; i ++)
    {
        for (j = 5; j>0; j --)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
}