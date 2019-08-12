/*In this assignment, you will be given an NxN matrix. You have to
determine whether the matrix is a triangular matrix.
First, you will be given N, which is the size of the matrix.

Then you will be given N rows of integers, where each row consists of
N integers separated by spaces.
If the input matrix is triangular, then print yes. Otherwise, print
no. */





#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[10][10],n,i,j,flag=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
   {scanf("%d",&a[i][j]);
   }
   }
   for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
   {
   if(!(i==j) &&(i>j || j>i) ) flag=1;
   }
   }
    if(!(flag))printf("no\n");
    else printf("yes");
    return 0;
}
