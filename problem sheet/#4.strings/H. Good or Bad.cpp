#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        for(int i=0; i<s.size()-2; i++)
        {
            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') ||
			(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'))
            {
                c++;
                break;
            }
        }
        if(c==1)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
    }
}

