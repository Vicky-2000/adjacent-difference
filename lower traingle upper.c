#include<stdio.h>
int main()
{int a[1000][1000],i,j,n;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=0;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
   printf("lower traingle");
for(i=1;i<n;i++)
{
    for(j=0;j<n-1;j++)
    {
        printf("%d ",a[i][j]);
    }
}
printf("\n");
printf("upper traingle");
for(i=0;i<n-1;i++)
{
    for(j=1;j<n;j++)
    {
        printf("%d ",a[i][j]);
    }
}
return 0;
}
