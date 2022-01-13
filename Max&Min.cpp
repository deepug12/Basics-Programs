#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    cout<<"Max Heap Implementation\n";
    priority_queue<ll ,vector<ll>> maxi;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    cout<<maxi.top()<<'\n';
    maxi.pop();
    cout<<maxi.top()<<'\n';

    cout<<"Min Heap Implementation\n";
    priority_queue<ll ,vector<ll>, greater<ll>> mini;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    cout<<mini.top()<<'\n';
    mini.pop();
    cout<<mini.top()<<'\n';

}