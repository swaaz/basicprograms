#include<stdio.h>
int main()
{
    char a[100],b[100]; 
    int f[26]={0};
    int s[26]={0};
    int k;
    int len1,len2;
    printf("Enter the two strings\n");
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    for(int i=0;a[i]!='\0';++i)
        f[a[i]-'a']+=1;
    for(int i=0;b[i]!='\0';++i)
        s[b[i]-'a']+=1;
    len1 = sizeof(a)/sizeof(a[0]);
    len2 = sizeof(b)/sizeof(b[0]);
    if(len1 == len2)
    {
        for(k=0;k<26;++k)
            if(f[k]!=s[k])
                break;
        if(k==26)
            printf("The strings are anagrams.\n");
        else
            printf("The strings aren't anagrams.");
    }
    else
        printf("The strings aren't anagrams.");
    return 0;
}
