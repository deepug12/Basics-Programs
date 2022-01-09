#include<bits/stdc++.h> 
using namespace std;
int getLength(char name[]){
	int ct = 0;
	for (int i = 0; name[i] != '\0' ; ++i)
	{
		ct++;
	}
	return ct;
}
int main() 
{
	char name[20];
	cin>> name;
	cout<<"Your Name is of length :"<<getLength(name)<<'\n';

    
    return 0; 
} 
