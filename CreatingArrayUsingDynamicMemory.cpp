// Always try to declare Size of array at Compile time(Heap(Dynamic Memory)) not at Run time(Stactic Memory(Stack))...

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int getSum(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout<<"Sum of elements is :"<<getSum(arr, n)<<'\n';

}