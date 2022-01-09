#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	// for (int i = 0; i <s.size() ; ++i)
	// {
	// 	// Lower to Upper
	// 	if(s[i] >= 'a' and s[i]<= 'z'){
	// 		s[i] = s[i]-'a'+'A';
	// 	}
	// 	// Upper to Lower
	// 	else{
	// 		s[i] = s[i]-'A'+'a';
	// 	}
	// }


	// OR using STL

	// Upper TO Lower
	// transform(s.begin(), s.end(), s.begin(), ::tolower);


	// Lower to Upper
	transform(s.begin(), s.end(), s.begin(), ::toupper);

	cout<<s<<'\n';
	return 0;
}