#include<stdio.h>
#include<string.h>
int main()
{char a[10],b[80];
char temp;
int n,i;
gets(a);
n=strlen(a);
for(i=0;i<=n/2-1;i++)
{temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}
puts(a);
return 0;
}
