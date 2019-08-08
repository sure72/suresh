#include<stdio.h>
#include<math.h>
int main()
{
int X,P;
scanf("%d %d",&X,&P);
for(i=0;i<X;i++);
{
sum=sum+(X-((P/100)*X));
X=X-((P/100)*X);
}
printf("%d",sum);
}
