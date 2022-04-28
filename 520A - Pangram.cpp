#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
 int n,count=0;
 string word;
 cin>>n>>word;



 for(int i=0;i<n;i++){
    word[i] = towlower(word[i]);
    }
 sort(word.begin(),word.end());

 for(int i=0;i<n;i++){
    if(word[i]!=word[i+1])
        count++;

 }

if(count==26)
    cout<<"YES";
else
    cout<<"NO";

}
