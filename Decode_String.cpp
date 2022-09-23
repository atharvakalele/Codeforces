#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int q;
    cin>>q;
    vector<char>alpha = {'N','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    while(q-->0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string x;
        int r;
        for(int i=n-1;i>=0;i--)
        {
            if((s[i]-'0') == 0){
                r = (s[i-2]-'0')*10 + (s[i-1]-'0');
                i-=2;
            }
            else r = s[i]-'0';
            x+=alpha[(r)];
        }
        reverse(x.begin(),x.end());
        cout<<x<<endl;        
    }
}