#include<stdio.h>
void main()
{
    int i;
    char j;
    for( i=0; i < 5; i++ )
    {
        for(j='A'; j <= 'E'; j++ )
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}