#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a;
    cin>>a;
    ll arr[a];
    ll minus=0;
    ll zero=0;
    for(ll i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            minus++;
        }
        if(arr[i]==0) zero++;
    }
    ll cnt=0;
    sort(arr,arr+a);
    if(minus%2==0)
    {
        for(ll i=0;i<a;i++)
        {
            if(arr[i]<0) cnt+=abs(arr[i]+1);
            else cnt+=abs(arr[i]-1);
        }
        cout<<cnt<<endl;
    }
    else
    {
        cnt+=abs(arr[0]-1);
        for(ll i=1;i<a;i++)
        {
            if(arr[i]<0) cnt+=abs(arr[i]+1);
            else cnt+=abs(arr[i]-1);
        }
        if(zero>0)
            cout<<cnt-2;
        else
        cout<<cnt<<endl;

    }

}
