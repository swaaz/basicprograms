#include<stdio.h>
int power(int x,int y)
{ int i,t=x;
    for(i=1;i<y;i++) x*=t;
    return x;
}
int main()
{
    int t,n,s,i,count=0,r,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    t=s=n;
    while(s!=0)
    {
        s=n/10;
        count++;
        
    }
    printf("%d\n",count);
        while(n!=0)
    {
        r=n%10;
        sum+=power(r,count);
        n/=10;
    }
     if(sum==t) printf("Amstrong number = %d\n",sum);
    
    return 0;
}