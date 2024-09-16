#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int road[25] = {};
    int s,e;
    for(int i = 0; i<m ; i++){
        cin >> s >> e;
        for(int j = s; j<e ; j++){
            road[j] = 1;
        }
    }
    int ans[25] = {};
    int tmp = 0;
    for(int i = 0; i<n ; i++){
        if(!road[i]){
            ans[tmp] = i;
            tmp++;
        }
    }
    for(int i = 0; i<n ; i++){
        cout << road[i] << " ";
    }
    cout << endl;

}