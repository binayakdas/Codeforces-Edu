#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

ll n,x,y;

bool isPossible(ll time)
{
    if(time < min(x,y))
    return false;

    time -= min(x,y);
    ll already_copy = 1;
    return ((time / x) + (time / y) + already_copy >= n);

}

int main()
{
    cin>>n>>x>>y;
    ll l = 0, r = 2e9;
    while(r > l + 1){
        ll mid = l + (r - l) / 2;
        if(isPossible(mid)){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    cout<<r<<endl;
}