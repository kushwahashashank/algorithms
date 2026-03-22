// Kadane's Algorithm: Used in finding the maximum subarray sum in a given array
// Time complexity : O(n)
// Space Comlexity : O(n)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ent '\n' 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_so_far = 0, curr_sum = 0;
    for (int i = 0; i < n; i++) {
        // curr_sum += arr[i];
        // if(curr_sum < 0) curr_sum = 0;
        curr_sum = max(0, curr_sum + arr[i]);
        max_so_far = max(max_so_far, curr_sum);
    }
    cout << max_so_far << ent;
    return 0;
}