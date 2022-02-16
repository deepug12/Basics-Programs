#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define int long long
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
#define setBits(x) __builtin_popcount(x)
#define pb push_back
#define ppb pop_back
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define ini(a, i) memset(a, i, sizeof(a))
#define lb lower_bound
#define ub upper_bound


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int sum = 0, maxsum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += a[i];
            if(sum > maxsum){
                maxsum = sum;
            }
            else if(sum < 0){
                sum = 0;
            }
        }
        cout<< maxsum <<'\n';

    }    
    return 0;
}
