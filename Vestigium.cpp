#include <bits/stdc++.h>
#define ll long long 
#define IO \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define MOD 1000000007
using namespace std;

void solve(){
    int n; cin>>n;
    vector<vector<int>> m(n, vector<int>(n));
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>m[i][j];
    int trace=0, rows=0, columns=0;
    for(int i=0; i<n; i++){
        set<int> s1, s2;
        for(int j=0; j<n; j++){
            if(i==j) trace += m[i][j];
            s1.insert(m[i][j]);
            s2.insert(m[j][i]);
        }
        rows += s1.size()!=n;
        columns += s2.size()!=n;
    }
    cout<<trace<<" "<<rows<<" "<<columns<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // IO;
    int t = 1;
    cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}

/*
SAMPLE INPUT: 
3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3

SAMPLE OUTPUT:
Case #1: 4 0 0
Case #2: 9 4 4
Case #3: 8 0 2
*/
