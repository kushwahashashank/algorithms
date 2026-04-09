// KMP Algorithm : Used in finding the number of occurrences of a pattern in a given string
// Time Complexity: O(n + m) where n is the length of the string and m is the length of the pattern
// Space Complexity: O(m) where m is the length of the pattern
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ent '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, p;
    cin >> s >> p;
    int n = s.size(), m = p.size();
    vector<int> LPS(m, 0);
    int l = 0, i = 1;
    while (i < m)
    {
        if (p[i] == p[l])
        {
            l++;
            LPS[i] = l;
            i++;
        }
        else
        {
            if (l == 0)
            {
                LPS[i] = 0;
                i++;
            }
            else
            {
                l = LPS[l - 1];
            }
        }
    }
    int count = 0;
    l = 0, i = 0;
    while (i < n)
    {
        if (s[i] == p[l])
        {
            l++;
            i++;
        }
        if (l == m)
        {
            count++;
            l = LPS[l - 1];
        }
        else if (i < n && s[i] != p[l])
        {
            if (l == 0)
            {
                i++;
            }
            else
            {
                l = LPS[l - 1];
            }
        }
    }
    cout << count << ent;
    return 0;
}