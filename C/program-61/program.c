//C Program For Bubble Sort In Ascending And Descending Order//

#include<stdio.h>

int main()
{
 
  int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);

  printf("\nSorted list in descending order:\n");

  for ( c = n-1 ; c >= 0; c-- )
     printf("%d\n", array[c]);
  return 0;
  
  
/*
  This Program calulates all the prime between the range of numbers
  includes the numbers which is provided.
  
  For e.g:   2  7
  Prime Numbers are : 2 3 5 7
*/

#include <stdio.h>
#include <stdlib.h>

char primecheck(int);

int main()
{
    int i,num1,num2,cases;
    char ans;
    printf("Enter Number of Test Cases: ");
    scanf("%d",&cases);
    while (cases--)
    {
        printf("Enter First Number: ");
        scanf("%d",&num1);
        printf("Enter Second Number: ");
        scanf("%d",&num2);

        printf("Answer: ");
        for(i=num1;i<=num2;i++)
        {
            ans = primecheck(i);
            if (ans == 'y')
                printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

char primecheck(int num)
{
    int i;
    if (num == 0 || num == 1)
        return 'n';
    else
    {
        for(i=(num-1);i>1;i--)
        {
            if(num%i == 0)
            {
                return 'n';
            }
            else
                continue;
        }
        return 'y';
    }

}