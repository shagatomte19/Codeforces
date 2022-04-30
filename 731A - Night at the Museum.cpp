#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin>>word;

    int n = word.length();
    char start='a';
    int ans=0;

    for(int i=0;i<n;i++){
    int xx = start-word[i];
    int yy = word[i]-start;

    if(xx<0)
        xx+=26;
    if(yy<0)
        yy+=26;

    if(xx<yy)
        ans+=xx;
    else if(yy<=xx)
        ans+=yy;

    start=word[i];


    }

    cout<<ans;
}
