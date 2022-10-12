// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // ll t;
    // cin>>t;
    // while(t--){
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
                if(a[m] <= x){
                    l = m;
                }
                else{
                    r = m;
                }
            }
            cout<<l + 1<<endl;
        }
    //}
}
