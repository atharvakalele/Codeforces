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
        vector<long long>a(n);
        map<long long,int>f;
        long long maxi1=INT_MIN,maxi2=INT_MIN,mini1=INT_MAX,mini2=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            f[a[i]]+=1;
            if(a[i]>maxi1){
                maxi2 = maxi1;
                maxi1 = a[i];
            }
            else if(a[i]>maxi2)maxi2 = a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<mini1){
                mini2 = mini1;
                mini1 = a[i];
            }
            else if(a[i]<mini2){
                mini2 = a[i];
            }
        }
        if(f[maxi1]>1 && f[mini1]>1)cout<<(maxi1-mini1)*2<<endl;
        else if(f[maxi1]>1 && f[mini1]==1)cout<<((maxi1-mini1)+(maxi1-mini2))<<endl;
        else cout<<(maxi1-mini1)+(maxi2-mini2)<<endl;
        //cout<<maxi1<<" "<<maxi2<<" "<<mini1<<" "<<mini2<<endl;
    }

}