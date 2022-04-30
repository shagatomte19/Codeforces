#include <iostream>
#include <string>

using namespace std;

int main()
{
 int n;
 cin>>n;

 while(n--){
    int count=0,t;
    string square;
    cin>>square;


    t = square.length();

    string s1=square.substr(0,t/2);
    string s2=square.substr(t/2,t);
    if(s1==s2){
        cout<<"YES"<<endl;
        }

    else{
     cout<<"NO"<<endl;
    }

    }


 return 0;

}
