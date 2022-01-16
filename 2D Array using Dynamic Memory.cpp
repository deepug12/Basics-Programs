// Always try to declare Size of array at Compile time(Heap(Dynamic Memory)) not at Run time(Stactic Memory(Stack))...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row;
    cin >> col;

    int** arr = new int* [row];
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    for (int i = 0; i < row; ++i)
    {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;

}