#include <stdio.h>
void main()
{
    // input of elements in first matrix //
    int arr1[50][50],brr1[50][50],add[50][50],i,j,b,n;
    printf("input the size of matrix");
    scanf("%d",&n);
    printf("input elements of matrix:\n");
        for (i=0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                printf("element -[%d],[%d]:",i,j);
                scanf("%d",&arr1[i][j]);
                
            }
            
        }
        // input of elements in second matrix //
        printf("input the elements in the second matrix:\n");
        for ( i = 0; j < n; i++)
        {
            for ( j= 0; j < n; j++)
            {
                printf("element -[%d][%d]:",i,j);
                scanf("%d",&brr1[i][j]);
            }
            
        }
        // to calculate the sum //
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                add[i][j]=arr1[i][j]+brr1[i][j];
            }
            printf("\nThe addition of two matrix is :\n");
            
        }
        for ( i = 0; i < n; i++)
        {
            printf("\n");

            for ( j = 0; j < n; j++)
            {
                printf("%d\t",add[i][j]);   
            }
            printf("\n\n");
        }
        
        
}