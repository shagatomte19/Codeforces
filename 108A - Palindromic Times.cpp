#include<iostream>
#include<string>
using namespace std;

int main()
{
 int hh,mm;
 string g;
 cin>>hh>>g>>mm;

    do {
       ++mm;
       if (mm == 60){++hh; mm = 0;}
       if (hh == 24){hh = 0;}
    }
    while (hh % 10 * 10 + hh / 10 != mm);

 cout<<hh<<':'<<mm;
}
