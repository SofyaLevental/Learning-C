#include<stdio.h>
int main()
{
int first=0,second=1;
int third,i;
for(i=1;i<=4;i++) // because we already printed first two digits of a fibonacci series
{
   third=first+second;
   printf("%d ",third);
   first=second;
   second=third;
}
return 0;
}
