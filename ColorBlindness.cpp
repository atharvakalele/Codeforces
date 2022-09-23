#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        string first,second;
        cin>>first;
        cin>>second;
        bool flag = 0;
        for(int i=0;i<n;i++){
            
            if((first[i]!=second[i]) && (first[i]=='R' || second[i] == 'R')){flag = 1;
                break;
            }
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}