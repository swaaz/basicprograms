#include <stdio.h>
#include <stdlib.h>

int main()
{ int a=7,b=2;
   // printf("enter two number !\n");
    //scanf("%d%d",&a,&b);
    printf("%d",a/b);

    printf("%d\n",(float)a/b);
    printf("%d\n",(float)a/(float)b);
    printf("%d\n",a/(float)b);

    printf("%f\n",a/b);
    printf("%f\n",(float)(a/b));
    printf("%f\n",(float) a/b);
    printf("%f\n",(float)a/(float)b);
    printf("%f\n",a/(float)b);
    return 0;
}
