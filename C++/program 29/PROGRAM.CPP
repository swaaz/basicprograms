// Program to demonstrate BINARY SEARCH
#include <iostream>
#define SIZE 8
using namespace std;
int binarySearch(int list[], int size, int item)
{
int low = 0, mid = 0;
int high = size - 1;
for (low = 0; low <= high; )
{
mid = (low + high)/2;
if (item > list[mid])
{
low = mid + 1; //Search in Right half
}
else if (item < list[mid])
{
high = mid - 1; ////Search in left half
}
else
return mid;
}
return -1;
}
int main()
{
int item;
int flag = -1; //We assume that if function returns an invalid index (say -1) means item NOT found...
int list[] = {1,2,3,4,5,6,11,18};
cout<<"Enter item to be searched : ";
cin>>item;
flag = binarySearch(list,SIZE,item);
if (flag == -1)
{
cout<<endl<<"Item Not Found !! :( ";
}
else
{
	cout<<"item found...";
}
return 0;
}

