#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int MaxFreq(int *arr, int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i) cin>>arr[i];

        cout<<MaxFreq(arr, n)<<'\n';
    }
}