#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;

    while(n--){
        int m,n;
        cin>>m>>n;

        if(n-m>1)
            count++;

    }

    cout<<count;

}
