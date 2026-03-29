// Function calling itself.When do we use it : If there exists similar sub problems.
// Time complexity : Depends upon the number of sub problems and time taken to solve each sub problem
// Space complexity : Depends upon the maximum depth of the recursion stack
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ent '\n' 

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<factorial(n)<<ent;
    return 0;
}