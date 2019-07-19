#include <stdio.h>

int main()
{ int a,b;
printf("enter 2 no\n");
scanf("%d%d",&a,&b);
    printf("*** bitwise operator ***\n");
    printf("%d >> %d = %d\n",a,b,a>>b);
    printf("%d << %d = %d\n",a,b,a<<b);
     printf("%d ^ %d = %d\n",a,b,a^b);
      printf("%d & %d = %d\n",a,b,a&b);
      printf("%d  | %d = %d\n",a,b,a|b);
       printf(" ~ %d = %d\n",a,~a);
    return 0;
}
