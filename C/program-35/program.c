/* You are given a sequence of non-negative integers terminated by -1.
   You have to output 1 if there are atleast 2 distinct elements in the sequence and 0 if the sequence consists of only 1 integer.
   Note that -1 is not part of the sequence. The sequence is not necessarily sorted. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,n=0,count=0;
   while(n!=-1)
   {
   scanf("%d",&n);
   if(a!=n)
   {
   a=n;
   count++;
   }

   }
if(count>=2) printf("%d",1);
else printf("%d",0);
    return 0;
}
