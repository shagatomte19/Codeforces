#include<iostream>

using namespace std;

int main(){
int n,count=0;
cin>>n;
string color;
cin>>color;

for(int i=0;i<n;i++){
    if(color[i]==color[i+1])
        count++;
}
cout<<count;
}
