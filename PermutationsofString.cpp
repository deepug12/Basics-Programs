#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string str = "BAC";
    sort(str.begin(), str.end());
    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));


    return 0;
}