#include<stdio.h>
int main()
int a,b,c;
scanf("%d%d%d',&a,&b,&c);
if((a>b)&&(a>c))
printf("a greater");
else if((b>a)&&(b<c))
printf("b greater");
else
printf("c greater");
return;
