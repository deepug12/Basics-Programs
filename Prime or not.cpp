/* If Code goes infinite then type   taskkill -im sample.exe -f
  */
#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    for (int i = 2; i < n; ++i)
    {
        if( n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n ;
    if(IsPrime(n)) cout << n <<" is Prime\n";
    else cout << n <<" is not Prime\n";
    return 0;
}
