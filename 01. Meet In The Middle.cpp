#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define sesh '\n'
#define gap ' '
#define display(x) for(auto val:x) cout << val << ' ' ;

int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0) ;

    ll n ; cin >> n ; ll sum ; cin >> sum ;

    if(n == 1){
        ll x ; cin >> x ;
        cout << (x==sum) << sesh ;
    }else{
        vector<ll> vec1(n/2,0) , vec2(n-(n/2),0) ;

        for(int i = 0 ; i < n/2 ; i++){
            cin >> vec1[i] ;
        }

        for(int i = n/2 ; i < n ; i++){
            cin >> vec2[i-n/2] ;
        }

        unordered_map<ll,ll> mp ;

// This is the most important line in the whole solution , the map uses an internal hash function.
// Before declaring the reservation i was getting TLE again and again for internal Hash-Collusions.
        mp.reserve(1<<20) ;

        ll numberOfWays = 0 ;

        ll sz = vec1.size() ;
        for(int i = 1 ; i < (1<<sz) ; i++){
            ll curSum = 0 ;
            for(int j = 0 ; j < sz ; j++){
                if((1<<j)&i){
                    curSum += vec1[j] ;
                }
            }
            mp[curSum]++ ; if(curSum==sum) numberOfWays++ ;
        }

        sz = vec2.size() ;
        for(int i = 1 ; i < (1<<sz) ; i++){
            ll curSum = 0 ;
            for(int j = 0 ; j < sz ; j++){
                if((1<<j)&i){
                    curSum += vec2[j] ;
                }
            }
            if(curSum==sum) numberOfWays++ ;
            else{
                if(curSum < sum and mp.count(sum-curSum))
                     numberOfWays += mp[sum-curSum] ;
            }
        }

        cout << numberOfWays << sesh ;
    }


    return 0 ;
}
