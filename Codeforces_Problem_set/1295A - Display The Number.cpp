#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    vector<int> a;
    cin>>t;
 
    for(int i=1;i<=t;i++)
    {
        a.clear();
        
        cin>>n;
 
        if(n%2 == 0)
            a.push_back(1);
        if(n%2!=0)
            a.push_back(7);
        
        for(int j = 1;j<n/2;j++)
        {
            a.push_back(1);
        }
 
        for(int X:a)
            cout<<X;
        
        cout<<endl;
    }
 
}
