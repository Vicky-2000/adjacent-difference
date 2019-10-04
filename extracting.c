#include<stdio.h>
int main()
{int i,j,c,b;
char a[90],temp[90];
gets(a);
scanf("%d%d",&c,&b);
for(i=c;i<=b;i++)
{temp[j]=a[i];
j++;
}
temp[j]='\0';
puts(temp);
}
