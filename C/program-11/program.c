#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b;
printf("enter 2 no\n");
scanf("%d%d",&a,&b);
    printf("*** A.O ***\n");
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
     printf("%d * %d = %d\n",a,b,a*b);
      printf("%d / %d = %.2f\n",a,b,(float)a/b);
       printf("%d %%  %d = %d\n",a,b,a%b);
    return 0;
}
