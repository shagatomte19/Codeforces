#include<iostream>
#include<string>
using namespace std;

int main()
{
 string word;
 int uppercount=0,lowercount=0;

 cin>>word;

 for(int i=0;i<word.size();i++){
    if(isupper(word[i]))
        uppercount++;
    if(islower(word[i]))
        lowercount++;
 }
 if(lowercount>=uppercount)
 {
    for(int i=0;i<word.size();i++){
        word[i] = towlower(word[i]);
     }
     cout<<word;

 }

 if(uppercount>lowercount){
    for(int j=0;j<word.size();j++){
        word[j] = towupper(word[j]);
     }
     cout<<word;
 }



}
