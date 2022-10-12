// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n,k;
vector<ll>a;

bool good(double x)
{
    ll s = 0;
    for(ll i=0; i<n; i++){
        s += floor(a[i] / x);
    }
    return s >= k;
}

int main()
{
    cin>>n>>k;
    a.resize(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    double l = 0; // l is good
    double r = 1e8; // r is bad

    for(ll i=0; i<100; i++){
        double m = (l + r) / 2;
        if(good(m)){
            l = m;
        }
        else{
            r = m;
        }
    }
    cout<<setprecision(20)<<l<<endl;
}