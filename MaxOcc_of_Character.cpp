#include <bits/stdc++.h>
using namespace std;

char maxstring(string s){
    int freq[26] = {0};

    for (int i = 0; i < s.length(); ++i)
    {
        char ch = s[i];
    
        int number = 0;
        if(ch>='a' and ch<= 'z'){
            number = ch-'a';
        }
        else{
            number = ch-'A';
        }
        freq[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; ++i)
    {
        if(maxi < freq[i]){
            ans = i;
            maxi = freq[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
}

int main(){
    string s;
    cin>>s;
    cout<<"Maximum of a letter in string is : "<<maxstring(s)<<'\n';

}