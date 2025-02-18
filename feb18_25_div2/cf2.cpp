#include <bits/stdc++.h>
using namespace std;

int dfsHelper(vector<vector<int>> &g, vector<vector<int>> &v, int r, int c, int R, int C, int t) {
    if(r < 0 || c < 0 || r >= R || c >= C || v[r][c] || g[r][c] != t) return 0;
    v[r][c] = 1;
    return 1 + dfsHelper(g, v, r+1, c, R, C, t) + dfsHelper(g, v, r-1, c, R, C, t)
             + dfsHelper(g, v, r, c+1, R, C, t) + dfsHelper(g, v, r, c-1, R, C, t);
}

void solveCase(){
    int R, C; cin >> R >> C;
    vector<vector<int>> g(R, vector<int>(C)), v(R, vector<int>(C, 0));
    for(int i=0; i<R; i++) for(int j=0; j<C; j++) cin >> g[i][j];
    unordered_map<int,int> reg;
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(!v[i][j]){
                int size = dfsHelper(g, v, i, j, R, C, g[i][j]);
                reg[g[i][j]] = max(reg[g[i][j]], size);
            }
        }
    }
    int tot=0; bool hasLarge=false;
    for(auto &p : reg){
        if(p.second > 1){ tot += 2; hasLarge = true; }
        else tot++;
    }
    cout << (hasLarge ? tot - 2 : tot - 1) << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while(T--) solveCase();
    return 0;
}
