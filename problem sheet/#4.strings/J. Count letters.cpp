#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=1;
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])
            c++;
        else
        {
            cout<<s[i]<<":"<<c<<endl;
            c=1;
        }
    }
}
