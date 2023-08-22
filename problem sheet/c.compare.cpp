#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x, y;
    cin >> x >> y;
    int c = 0;
    int n = min(x.size(), y.size());
    for (int i = 0; i < n; i++)
    {
        if (x[i] > y[i])
        {
            cout << y;
            c++;
            break;
        }
        else if (x[i] < y[i])
        {
            cout << x;
            c++;
            break;
        }
    }
    if (c == 0)
    {
        if (x.size() > y.size())
        {
            cout << y << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}
