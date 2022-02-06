#include <stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("how many entries: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("enter element: ");
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of array = %d",sum);
}