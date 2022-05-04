#include <iostream>

using namespace std;

int main()
{
 int k,n,w,cost=0,loan;
 cin>>k>>n>>w;

 for(int i=1;i<=w;i++){
    cost += i*k;
 }
  loan = cost-n;

  if(loan>0)
    cout<<loan;
  else
    cout<<"0";
}
