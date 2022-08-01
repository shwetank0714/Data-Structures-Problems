#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

    ll t;

    cin >> t;

    while(t--){
        ll n,k;

        cin >> n >> k;

        vector<ll>a;
        vector<ll>b;
        ll sum = 0;
        for(ll i=0;i<n;i++){
            ll e;
            cin >> e;

            if(e>=0){
                a.push_back(e);
                sum += e;
            } 
            else{
                b.push_back(abs(e));
            }
        }

        sort(b.begin(),b.end());

        //ll t = b.size();
        while(k>0 && b.size()){
            sum+=b.back();
            b.pop_back();
            k--;
        }

        cout << sum << "\n";

    }

}
