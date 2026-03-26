// Two Pointer Technique : Use two pointers to iterate the array and calculate value based on condition
// Time complexity : O(n)
// Space Comlexity : O(n)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ent '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = n - 1, target;
    cin >> target;
    string ans = "Not Found";
    while (l < r)
    {
        int sum = v[l] + v[r];
        if (sum == target)
        {
            ans = "Found";
            break;
        }
        else if (sum < target)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << ans << ent;

    return 0;
}