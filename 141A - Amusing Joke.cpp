#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int count=0;
string guest,host,word,new1;
cin>>guest>>host>>word;

new1=guest+host;
sort(new1.begin(),new1.end());
sort(word.begin(),word.end());


if(new1==word)
    cout<<"YES";
else
    cout<<"NO";


}
