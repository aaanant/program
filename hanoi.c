#include<stdio.h>
void towers(int ,char  ,char  ,char );
int main(void)
{
int n;
printf("GIven n:");
scanf("%d",&n);
towers(n,'A','B','C');

return 0;
}

void towers(int m,char from,char to,char via)
{
if(m==1)
{
printf("move from %c to %c \n",from,to);
return;
}
else
{
towers(m-1,from,via,to);
printf("move from %c to %c \n",from,to);
towers(m-1,via,to,from);
}
}
