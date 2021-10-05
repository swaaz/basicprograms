#include <stdio.h>

int main()
{
    int i, n, a = 0, b = 1, c;
    printf("enter the no. of values = ");
    scanf("%d", &n);
    // Initiating the values as 0,1,...
    printf("%d,%d,", a, b);
    for (i = 1; i <= (n - 2); i++)
    {
        c = a + b; // creating the new value
        printf("%d,", c);
        a = b, b = c; // Updating the values
    }

    return 0;
}