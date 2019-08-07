#include<stdio.h>
void main()
{
    char a,b;
    for(a = 'A'; a <= 'E'; a++  )
    {
        for(b = 'E'; b >= 'A'; b-- )
            printf("%c ", b);
        printf("\n");
    }
}