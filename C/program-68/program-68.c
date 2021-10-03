#include <stdio.h>
#include <stdlib.h>

int main ()
{
        char s[50];
        int i, c = 0;
        int flag = 0;

        printf ("Input a string\n");
        scanf ("%s", s);
        while (s[c] != '\0')
                c++;


        for (i = 0; i < c; i++)
        {
                if(s[i] !='0' && s[i]!='1')
                {
                        printf("error\n");
                        exit(0);
                }

                if (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0')
                {
                        flag = 1;
                }
        }
        if (flag == 1)
                printf ("accepted\n");
        else
                printf ("not accepted\n");
        return 0;
}
