#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s;
        cin>>s;
        string x=s;
        reverse (s.begin(),s.end());
        if(x==s)
            cout<<"YES";
        else
            cout<<"NO";
}

