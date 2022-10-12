#include <bits/stdc++.h>
#define ll long long int 
#define ld long double
using namespace std;

ld c;

bool good(ld x)
{
    return ((x * x) + sqrt(x) >= c);
}

int main()
{
    cin>>c;
    ld l = 0; 
    ld r = c;
    for(ll i=0; i<100; i++){
        ld mid = (l + r) / 2;
        if(good(mid)){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    cout<<setprecision(20)<<r<<endl;
}