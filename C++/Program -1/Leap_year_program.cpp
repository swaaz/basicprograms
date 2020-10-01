#include<iostrem>
using namespace std;
main()
{
int year;
if(year%4==0)||(year%400==0)&&(year%100!=0)
{
cout<<year<<"is a leap year"<<endl;
}
else
{
cout<<year<<"is not a leap year"<<endl;
}
}
