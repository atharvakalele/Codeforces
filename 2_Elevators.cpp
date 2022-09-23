#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int r1 = abs(a-1);
        int r2 = abs(b-c)+abs(c-1);
        if(r1==r2)cout<<3<<endl;
        else if(r1>r2)cout<<2<<endl;
        else cout<<1<<endl;
    }
}