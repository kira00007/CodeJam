#include <bits/stdc++.h>
#define ll long long 
#define IO \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define MOD 1000000007
using namespace std;

void solve(){
    string s, ans; cin>>s;
    int nesting_depth = 0;
    for(int i=0; i<s.length(); i++){
        int curr_value = s[i] - '0';
        if(curr_value > nesting_depth)
            for(int j=0; j<(curr_value - nesting_depth); j++) ans += '(';
        else if(nesting_depth > curr_value)
            for(int j=0; j<(nesting_depth - curr_value); j++) ans += ')';
        nesting_depth = curr_value;
        ans += s[i];
    }
    for(int i=0; i<nesting_depth; i++) ans += ')';
    cout<<ans<<"\n";
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
4
0000
101
111000
1

SAMPLE OUTPUT:
Case #1: 0000
Case #2: (1)0(1)
Case #3: (111)000
Case #4: (1)
*/

