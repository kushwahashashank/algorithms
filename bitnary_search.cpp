// Binary Search : Used to find known element exists or not in a sorted list
// Time complexity : O(log n)
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1, target;
    cin >> target;
    string ans = "Not Found";
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target)
        {
            ans = "Found";
            break;
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << ent;
    return 0;
}