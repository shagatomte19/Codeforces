#include <iostream>
#include <string>

using namespace std;

int main()
{
 int n;
 cin>>n;


 while(n--){
    int t;
    cin>>t;
    string brackets;
    cin>>brackets;

    int flips=0,total=0;

    for(int i=0;i<t;i++){
        if(brackets[i]=='(')
            flips++;
        else
            flips--;
        if(flips<0){
        total++;
        flips=0;
        }

    }
  cout<<total<<endl;
 }

 return 0;

}
