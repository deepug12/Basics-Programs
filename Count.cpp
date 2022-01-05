#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    // Traverse through map and print frequencies
    for (auto x : mp){
        cout <<x.first<<" is Occuring "<< x.second <<" times\n";
        // if(x.second > 1) cout<<x.first<<'\n';
    }
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
        // vector<ll> A(n);
        int arr[n];
        for (int i = 0; i < n; ++i) cin>>arr[i];

        countFreq(arr, n);
    }
}