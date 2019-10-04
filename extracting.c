#include<stdio.h>
int main()
{int i,j,c,b;
char a[90],temp[90];
 printf("enter any word");
gets(a);
 printf("extracting origin");
 scanf("%d",&c);
 printf("extracting end");
 scanf("%d",&b);
for(i=c;i<=b;i++)
{temp[j]=a[i];
j++;
}
 printf("the extracted word");
temp[j]='\0';
puts(temp);
}
