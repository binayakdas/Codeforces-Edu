// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

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
            ll l = 0, r = n - 1;
            bool f = false;
            while(l <= r){
                ll mid = l + (r - l) / 2;
                if(a[mid] == x){
                    f = true;
                    break;
                }
                else if(a[mid] < x){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            if(f){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    //}
}
