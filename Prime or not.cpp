#include<bits/stdc++.h> 
using namespace std;
int main() 
{
	int n;
	cin>>n;
	bool isPrime = 1;
	for (int i = 2; i < n; ++i)
	{
		if(n % i == 0){
			isPrime = 0;
			break;
		}
	}
	if(isPrime) cout<<"PRIME\n";
	else cout<<"NOT PRIME\n";
    
    return 0; 
} 
