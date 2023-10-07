#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string qu;
    int a, b;
    while (q--)
    {
        cin >> qu;
        if (qu == "pop_back")
        {
            s.pop_back();
        }
        else if (qu == "front")
        {
            cout << s.front() << endl;
        }
        else if (qu == "back")
        {
            cout << s.back() << endl;
        }
        else if (qu == "sort")
        {
            cin >> a >> b;                
            sort(s.begin() + min(a, b) - 1 , s.begin() + max(a, b)); 
        }
        else if (qu == "reverse")
        {
            cin >> a >> b;
            reverse(s.begin() + min(a, b) - 1, s.begin() + max(a, b));
        }
        else if (qu == "print")
        {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if (qu == "substr")
        {
            cin >> a >> b; 
            for (int i = min(a, b) - 1; i <= max(a, b) - 1; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
    }
}
