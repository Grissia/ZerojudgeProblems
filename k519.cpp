#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl "\n"

int n;
int arr[15][15];
int alfa, bravo;
int ans = INT_MAX;

void dfs(int a, int b, int vis[], int tmp){
    
    cout << "dfs:" << a << ',' << b << endl;
    cout << "tmp:" << tmp << endl;
    cout << "ans:" << ans << endl;
    
    if(a == b) return;
    tmp += arr[a][b];
    if(b == bravo){
        if(tmp < ans) ans = tmp;
        return;
    }
    for(int i = 1; i<=n; i++){
        if(vis[i]) continue;
        vis[i]++;
        dfs(b,i,vis,tmp);
    }
}

int main(){
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++) cin >> arr[i][j];
    }
    cin >> alfa >> bravo;
    for(int i = 1; i<=n; i++){
        int vis[15];
        vis[alfa] = 1;
        int tmp = 0;
        dfs(alfa,i,vis,tmp);
    }
    cout << ans << endl;
    return 0;
}

/*
3
-1 500 100
200 -1 300
400 400 -1
1 3

4
-1 200 100 300
200 -1 700 300
400 400 -1 100
500 100 200 -1
2 3

5
-1 150 100 300 450
350 -1 700 300 200
150 300 -1 100 400
550 100 800 -1 50
400 100 200 100 -1
4 1
*/