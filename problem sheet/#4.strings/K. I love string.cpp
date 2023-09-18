#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;
        int n=max(s.size(),x.size());
        for(int i=0; i<n; i++)
        {
            if(i<s.size())
                cout<<s[i];
            if(i<x.size())
                cout<<x[i];
        }
        cout<<endl;

    }
}
