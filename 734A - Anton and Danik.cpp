#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
   int n,acount=0,dcount=0;
   string result;

   cin>>n>>result;

   for(int i=0;i<n;i++){
    if(result[i]=='A')
        acount++;
    else
        dcount++;

   }

   if(acount>dcount)
    cout<<"Anton";
   else if(acount==dcount)
    cout<<"Friendship";
   else
    cout<<"Danik";


}
