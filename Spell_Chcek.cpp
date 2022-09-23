#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool f(char* check,char* s,int c,int n)//if the current string is the permutation of the string s.
{
    if(n!=c)return 0;
    map<char,int>freq;
    for(int i=0;i<n;i++){
        freq[s[i]]++;
    }
    for(int i=0;i<c;i++){
        freq[check[i]]--;
    }
    for(auto i:freq){
        if(i.second!=0)return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        char s[5] = {'T','i','m','u','r'};
        int c;
        cin>>c;
        char check[c];
        for(int i=0;i<c;i++){
            cin>>check[i];
        }
        if(f(check,s,c,5))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}