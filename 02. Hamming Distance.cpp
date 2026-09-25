//The author of this beautiful code is Tamjid Ul Haque .
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std ;
using namespace __gnu_pbds;
 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(k) : no. of elements < k
// *find_by_order(i) : value at index i (0-based)
 
template<typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<typename Key, typename Value>
using ordered_map = tree<Key, Value, less<Key>, rb_tree_tag, tree_order_statistics_node_update>;
 
#define Bismillah() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define Alhamdulillah return 0 ; 
#define Input  freopen("input.txt", "r", stdin);
#define Output freopen("output.txt", "w", stdout);
 
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vll> vvll;
typedef vector<pair<int, int>> vpi;
typedef vector<vpi> vvpi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
 
#define pb push_back 
#define eb emplace_back
#define ppb pop_back
#define infinity LLONG_MAX
#define aura LLONG_MIN
#define F first
#define S second
#define sesh '\n'
#define gap ' '
 
#define lin(k) ll k ; cin >> k ;
#define sin(s) string s ; cin >> s ;
#define llvec(v,n) vector<long long > v(n) ;
#define llvecin(v,n) for(int i = 0 ; i < n ; i++) cin >> v[i] ;
 
#define testloop int test; cin >> test; while (test--)
#define tamjid(g) for(int i = 0 ; i < g ; ++i)
#define loop(i,start,end) for(int i = start ; i < end ; ++i)
 
#define len(x) int((x).size())
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define nsort(v) sort(v.begin(),v.end());
#define rsort(v) sort(v.rbegin(),v.rend());
#define flip(v) reverse(v.begin(),v.end());
 
 
#define show(z) cout << z << endl 
#define printtwo(a,b) cout << a << " " << b << endl 
#define display(vec) for(auto value:vec) cout << value << " " 
#define printpair(vec) for(auto value:vec) cout << value.first << " " << value.second << endl 
 
#define RemoveLeadingZeros(s) (s.erase(0, s.find_first_not_of('0')))
#define eraser(s) s.erase(remove(s.begin(), s.end(), 'TheCharIwannaRemove'), s.end())
#define countsetbits(x) __builtin_popcount(x)
#define countsetbitsll(x) __builtin_popcountll(x)
#define tamjid_shuffle(vec) shuffle(vec.begin(), vec.end(), mt19937(chrono::steady_clock::now().time_since_epoch().count())) ;
 
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())
 
#define isOdd(n) ((n) & 1) 
#define isEven(n) (((n) & 1) == 0)
bool powerof2(long long x) {
    return (x > 0) && ((x & (x - 1)) == 0);
}
 
 
 
/*
string decToBinary(ll n){
    string s = string(61,'0') ;
    for(ll i = 0 ; i < 61 ; i++){
        ll mask = (1LL << i) ;
        if(mask&n) s[i] = '1' ;
    }
    flip(s) ; RemoveLeadingZeros(s) ;
    return s ; 
}
 
bool isPerfectSquare(ll n){
    ll root = sqrt(n) ;
    if(root*1LL*root==n) return true ;
    return false ;
}
 
bool isPrimeNumber(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
 
ll binExpo(ll x , ll n , ll MOD){
    ll res = 1 ; x %= MOD ;
    while(n>0){
        if(n&1){
            res *= x ; res %= MOD ;
        }
        x *= x ; x %= MOD ; n >>= 1 ;
    }
    return res ;
}
 
ll ModularMultiplicativeInverse(ll x,ll MOD){
    return binExpo(x,MOD-2,MOD) ;
}
 
vector<ll> CalculateFactorial(ll limit , ll MOD){
    vector<ll> factorial ; factorial.push_back(1) ;
    for(ll i = 1 ; i <= limit ; i++){
        ll curr = (factorial.back() * i) % MOD ;
        factorial.push_back(curr) ; 
    }
    return factorial ;
}
 
ll nCr(ll n , ll r , ll MOD){
    ll num = factorial[n] ;
    ll denom = (factorial[n-r] * factorial[r]) % MOD ;
    ll ans = (num * ModularMultiplicativeInverse(denom)) % MOD ;
    return ans ;
}
 
ll nPr(ll n , ll r , ll MOD){
    ll num = factorial[n] % MOD ;
    ll denom = (factorial[n-r]) % MOD ;
    ll ans = (num * ModularMultiplicativeInverse(denom)) % MOD ;
    return ans ;
}
 
*/
 
#define yes cout << "YES" << endl  
#define no cout << "NO" << endl
 
const long double pi = 3.141592653589793238462643383279502884 ;
 
#define Sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define Boro(vec) *(max_element(vec.begin(),vec.end()))
#define Chuto(vec) *(min_element(vec.begin(),vec.end())) 
#define minidx(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxidx(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
 
void IcpcDhakaRegionalist2025(){
 
    int n , k ; cin >> n >> k ; 
 
    vector<ll> value ;
 
    for(int i = 0 ; i < n ; i++){
        string s ; cin >> s ;
        ll temp = 0 ; int pow = k ;
 
        for(auto &bit:s){
            if(bit == '1'){
                temp += (1LL << (pow-1)) ;
            }
            pow-- ;
        }
 
        value.push_back(temp) ;
    }
 
    int min_distance = k ;
 
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            ll cur_val = (value[i] ^ value[j]) ;
            int distance = __builtin_popcountll(cur_val) ;
            min_distance = min(min_distance,distance) ;
        }
    }
 
    cout << min_distance << endl ;
}
 
int main(){
    Bismillah() ;
 
    /*testloop*/ IcpcDhakaRegionalist2025() ;
 
    Alhamdulillah ;
}
