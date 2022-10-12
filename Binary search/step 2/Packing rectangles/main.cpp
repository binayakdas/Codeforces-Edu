// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll w, h, n;

bool good(ll x)
{
    return (x / w) * (x / h) >= n;
}

int main()
{
    cin>>w>>h>>n;
    ll l = 0; // l is bad
    ll r = 1; // r is good
    while(!good(r)){ // to avoid overflow 
        r *= 2;
    }
    while(r > l + 1){
        ll m = (l + r) / 2;
        if(good(m)){
            r = m;
        }
        else{
            l = m;
        }
    }
    cout<<r<<endl;
}