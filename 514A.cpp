#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string s;
    cin >> s;
    int n= s.size();
    for (int i = 0;i<n;i++) 
    {
        int digit = s[i]-'0',rem =9-digit;
        if (i == 0 && rem == 0)
            continue;
        if (rem< digit) 
            s[i] = (rem + '0');
    }
    cout << s;
    return 0;
}