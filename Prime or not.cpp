// Aggresive cows 
/* Eko problem from Spoj */
#include<bits/stdc++.h> 
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        int ct = 0;
        for(int i = 0; i < nums.size(); i++){
        	if(nums[i] == nums[i+1]) ct++;
        }
        if(ct >= 2) return true;
        else return false;
        
    }
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
