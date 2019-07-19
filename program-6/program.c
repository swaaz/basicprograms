#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
(a>b)?(a>c)?printf("a is larger"):printf("c is larger"):(b>c)?printf("b is larger"):printf("c is larger");
}
