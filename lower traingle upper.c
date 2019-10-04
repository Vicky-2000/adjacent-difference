#include<stdio.h>
int main()
{int a[1000][1000],i,j,n;
 printf("enter the row and column of equal size);
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=0;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
   printf("lower traingle of matrix is");
for(i=1;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        printf("%d ",a[i][j]);
    }
}
printf("\n");
printf("upper traingle of matrix is");
for(i=0;i<n-1;i++)
{
    for(j=1;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
}
return 0;
}
