#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
      int n;
      cin>>n;

      while(n--){
        string s;
        cin>>s;
        ll a[26];
        ll i,size=s.size(),sum=0;

        for(i=0;i<size;i++){
            a[s[i]-'a']=i;
        }

        string input;
        cin>>input;
        for(i=1;i<input.size();i++){
            sum = sum+abs(a[input[i]-'a']-a[input[i-1]-'a']);
        }
        cout<<sum<<endl;
      }


}
