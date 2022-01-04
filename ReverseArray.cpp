/* If Code goes infinite then type   taskkill -im sample.exe -f
  */
#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void PrintArray(int arr[], int n){
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    Reverse(arr, n);
    PrintArray(arr, n);

    return 0;
}
