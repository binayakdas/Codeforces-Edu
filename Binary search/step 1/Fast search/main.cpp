// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int bs1(vector<ll>&a, ll x)
{
    ll l = 0, r = a.size() - 1, ans = -1;
    while(l <= r){
        ll m = l + (r - l) / 2;
        if(a[m] >= x){
            ans = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return ans;
}

int bs2(vector<ll>&a, ll x)
{
    ll l = 0, r = a.size() - 1, ans = -1;
    while(l <= r){
        ll m = l + (r - l) / 2;
        if(a[m] <= x){
            ans = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return ans;
}

int main()
{
    // ll t;
    // cin>>t;
    // while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll k;
        cin>>k;
        while(k--){
            ll l,r;
            cin>>l>>r;
            ll x = bs1(a, l);
            ll y = bs2(a, r);
            ll ans = y - x + 1;
            if(x == -1 || y == -1){
                cout<<0<<" ";
            }
            else
            cout<<ans<<" ";
        }
    //}
}
