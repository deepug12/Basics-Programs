#include <bits/stdc++.h>
using namespace std;

void RowSum(int arr[][3], int i, int j){
    for (int i = 0; i < 3; ++i)
    {
        int sum = 0;
        for (int j = 0; j < 3; ++j)
        {
            sum += arr[i][j];
        }
        cout<<"Row sum of Matrix  "<<i<<" is: "<<sum<<'\n';

    }
    // cout<<'\n';
}
void Colsum(int arr[][3], int i, int j){
    for (int j = 0; j < 3; ++j)
    {
        int sum_ = 0;
        for (int i = 0; i < 3; ++i)
        {
            sum_ += arr[i][j];
        }
        cout<<"Column sum of Matrix is: "<<sum_<<" ";
        cout<<'\n';
    }
    

}
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin>>arr[i][j];
        }
    }
    RowSum(arr, 3, 3);
    Colsum(arr, 3, 3);


}