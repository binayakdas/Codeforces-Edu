#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // ll t;
    // cin>>t;
    // while(t--){

        // MODIFIED SOLUTION

        ll n,k;
        cin>>n>>k;
        ll a[n+1];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<k; i++){
            ll x;
            cin>>x;
            ll l = -1, r = n;
            while(r > l + 1){
                ll m = (l + r) / 2;
                if(a[m] < x){
                    l = m;
                }
                else{
                    r = m;
                }
            }
            if(r < n && a[r] == x){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            //cout<<r + 1<<endl;
        }
    //}
}
