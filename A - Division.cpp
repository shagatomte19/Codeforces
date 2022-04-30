#include<iostream>
#include<string>

using namespace std;

int main(){
     int n;
     cin>>n;

     while(n--){
        int x,y;
        cin>>x;
     if(x<1400)
        cout<<"Division 4"<<endl;
     else if(x<1600)
        cout<<"Division 3"<<endl;
     else if(x<1900)
        cout<<"Division 2"<<endl;
     else
        cout<<"Division 1"<<endl;
     }

}
