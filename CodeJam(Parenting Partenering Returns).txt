#include <bits/stdc++.h>
#define ll long long 
#define IO \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define MOD 1000000007
using namespace std;

// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020bdf9

void solve(){
    int n; cin>>n;
    string ans;
    vector<pair<pair<int,int>,int>> activities(n);
    for(int i=0; i<n; i++){
        ans += "#";
        int start, end; cin>>start>>end;
        activities[i] = {{start,end}, i};
    }
    sort(activities.begin(), activities.end());
    int cameron_free=0, jamie_free=0;
    for(int i=0; i<n; i++){
        if(activities[i].first.first >= cameron_free){
            ans[activities[i].second] = 'C';
            cameron_free = activities[i].first.second;
        }
        else if(activities[i].first.first >= jamie_free){
            ans[activities[i].second] = 'J';
            jamie_free = activities[i].first.second;
        }
        else{
            ans = "IMPOSSIBLE";
            break;
        }
    }
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
3
360 480
420 540
600 660
3
0 1440
1 3
2 4
5
99 150
1 100
100 301
2 5
150 250
2
0 720
720 1440

SAMPLE OUTPUT:
Case #1: CJC
Case #2: IMPOSSIBLE
Case #3: JCCJJ
Case #4: CC
*/
