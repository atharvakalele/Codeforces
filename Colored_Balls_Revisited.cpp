#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t-->0)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int r = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff = abs(arr[i]-arr[j]);
                if(arr[i]<arr[j]){
                    arr[j] = diff;
                    arr[i] = 0;
                }
                else{
                    arr[i] = diff;
                    arr[j] = 0;
                }
                
            }
            if(arr[i]!=0)r=i+1;
        }
        cout<<r<<endl;
    }
    
}