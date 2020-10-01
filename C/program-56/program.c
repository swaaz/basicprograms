#include <stdio.h>

int main() {
    char ch[100];
    int i,count;
    printf("Enter the string \n");
    fgets(ch,100,stdin);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        count++;
    }
    printf("Number of vowels are %d \n",count);
    printf("Number of consonants are %d",(i-count));
}
