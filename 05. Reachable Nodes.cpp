#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
typedef vector<ll> vll ;
typedef pair<ll,ll> pii ;
 
const int max_nodes = 50033 ;
bitset<max_nodes> reachable_nodes[max_nodes] ;
 
void solve(){
 
    int nodes , edges ; cin >> nodes >> edges ;
 
    vector<vector<int>> reverse_graph(nodes+3,vector<int>()) ;
    vector<int> out_degree(nodes+3,0) ;
 
    for(int edge = 1 ; edge <= edges ; edge++){
        int source , destination ; 
        cin >> source >> destination ;
        reverse_graph[destination].push_back(source) ;
        out_degree[source]++ ; 
    }
 
    queue<int> kahn_algo ;
 
    for(int node = 1 ; node <= nodes ; node++){
        reachable_nodes[node].set(node) ;
 
        if(out_degree[node] == 0){
            kahn_algo.push(node) ;
        }
    }
 
    while(!kahn_algo.empty()){
 
        int current = kahn_algo.front() ;
        kahn_algo.pop() ;
 
        for(auto adjacent:reverse_graph[current]){
            reachable_nodes[adjacent] |= reachable_nodes[current] ;
            out_degree[adjacent]-- ;
 
            if(out_degree[adjacent] == 0){
                kahn_algo.push(adjacent) ;
            }
        }
 
    }
 
    for(int node = 1 ; node <= nodes ; node++){
        cout << reachable_nodes[node].count() << ' ' ;
    }
 
    cout << endl ;
}
 
 
int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0) ;
 
    int testcase = 1 ;
 
    //cin >> testcase ;
 
    for(int test = 1 ; test <= testcase ; test++){
        solve() ;
    }    
 
    return 0 ;
}