// Sliding Window Technique : Use a window of fixed size or variable size to iterate the array and calculate value based on condition
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
    vector<int> arr(n);
    int l, k;
    cin >> l >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        sum += arr[i];
    }
    vector<int> ans;
    if (sum == k)
    {
        for (int j = 0; j < l; j++)
        {
            ans.push_back(arr[j]);
        }
    }
    
    for (int i = l; i < n && ans.size()==0; i++)
    {
        sum = sum - arr[i - l] + arr[i];
        if (sum == k)
        {
            for (int j = i - l; j < i; j++)
            {
                ans.push_back(arr[j]);
            }
            break;
        }
    }
    if(ans.size()==0){
        cout<<"Not Found"<<ent;
        return 0;
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}