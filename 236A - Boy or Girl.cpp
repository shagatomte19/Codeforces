#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string username;
    int count=0;
    cin>>username;
    sort(username.begin(),username.end());

    for(int i=0;i<username.length();i++){

        if(username[i]!=username[i+1])
            count++;

    }
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}
