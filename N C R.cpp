/* If Code goes infinite then type   taskkill -im sample.exe -f
  */
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r){
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);
    return num/den;
}

int main()
{
    int n , r;
    cin >> n >> r;
    cout<<ncr(n, r)<<'\n';
    return 0;
}
