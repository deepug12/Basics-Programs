/* If Code goes infinite then type   taskkill -im sample.exe -f
  */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i += 2)
    {
        if(i+1 < n){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        };
    }

    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    return 0;
}
