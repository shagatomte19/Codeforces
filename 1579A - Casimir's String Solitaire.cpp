#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string word;
        cin>>word;
        int a=0,b=0,c=0;

        for(int i=0;i<word.size();i++){
                if(word[i]=='A')
                    a++;
                else if(word[i]=='B')
                    b++;
                else
                    c++;

        }
        if(a+c==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}
