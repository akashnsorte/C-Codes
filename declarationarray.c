#include <stdio.h>
void main()
{
    int marks[100],i;
        for ( i = 0; i < 5; i++)
        {
            printf("Enter the elements=");
            scanf("%d",&marks[i]);
        }
        // for printing marks //
        for ( i = 0; i < 5; i++)
        {
            printf("%d",marks[i]);
        }
}