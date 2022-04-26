#include<iostream>
#include<string>

using namespace std;

int main(){
      int X=0,n;
      string a;
      cin>>n;
      for(int i=0;i<n;i++){
        cin>>a;
        if(a[1]=='+'){
            X++;
        }else{
            X--;
        }
      };
      cout<<X<<endl;

      return 0;

}
