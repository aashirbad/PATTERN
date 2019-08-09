// A
// B B
// C C C
// D D D D
// E E E E E

#include<stdio.h>
void main()
{
    char i;
    char j;
    for(i='A'; i < 'F' ; i ++)
    {
        for(j='A'; j<= i; j ++ )
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}