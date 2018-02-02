#include<stdio.h>
int main()
{
int a,b,i,o;
printf("\n Upper limit ");
scanf("%d",&a);
printf("\n Lower limit ");
scanf("%d",&b);
printf("\nEven numbers bw ul and ll are");
for(i>=a;i<=b;++i)
{
o=i%2;
if(o==0)
printf("\n  %d",i);
}
return 0;
}
