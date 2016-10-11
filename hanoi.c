// in a tower of hanoi problem disks can be placed in decreasing manner from bottom to top
//there are three towers A,B,C.
//initially 'n' disks are mounted on permissible manner on tower A.
//objective is to transfer it to tower C.
//thus problem statement is transfer disks from A to C via B
#include<stdio.h>
void towers(int ,char  ,char  ,char );
int steps(int m)
{int x;
 if(m==2)
   x=3;
 else
x=(2*steps(m-1)+1);

return x;}
int main(void)
{
int n;
printf("Enter the number of disks n:");
scanf("%d",&n);
printf("Total number of steps required are :%d\nOptimal procedure is:\n",steps(n));  
towers(n,'A','C','B');

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
//updates by aaanant
//1300 hrs ist
