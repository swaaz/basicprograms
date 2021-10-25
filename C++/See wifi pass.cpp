#include <cstdlib>
#include <iostream>
using namespace std;
string x;
int y;
int main()
{
system("color e");
cout<< ("\nsamz>\t");
system("netsh wlan show profile");
cout << ("WHICH ONE?--");
string z = "netsh wlan show profile\t \"";
string n = "\"\tkey=clear";
cin >> x;
z = z + x + n;
system(z.c_str());
}
