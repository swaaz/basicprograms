#include<stdio.h>
int main(){
char str[100];
int i=0;
printf("Enter any string:");
gets(str);
//converting to uppercase
while(str[i]!= '\0'){
if(str[i]>=97&&str[i]<=122){
 str[i]=str[i]-32;
}
i++;
}
printf("\nThe converted string is:%s", str);
return 0;
}
