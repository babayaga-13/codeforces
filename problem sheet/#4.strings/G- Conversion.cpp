#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ',')
        {
            cout<<" ";
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            int x = s[i] - 32;
            char y = x;
            cout<<y;
        }
        else
        {
            int x= s[i] + 32;
            char y = x;
            cout<<y;
        }
    }
}

