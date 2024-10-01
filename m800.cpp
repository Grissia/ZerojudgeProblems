#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl "\n"
const int MAXN = 1005;
int arr[MAXN][MAXN] = {};
int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
int ans = 0;
int main(){
    int h,w,k;
    cin >> h >> w >> k;
    int total = 0;
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            cin >> arr[i][j];
            total += arr[i][j];
        }
    }
    for(int zulu = 0; zulu<k; zulu++){
        vector< vector<int> > pre;
        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                int higher = 0;
                int lower = 0;
                int all = 0;
                // cout << i << ' ' << j << endl;
                for(int x = 0; x<4; x++){
                    if(i+dir[x][0] >= h || i+dir[x][0] < 0 || j+dir[x][1] >= w || j+dir[x][1] < 0) continue;
                    // cout << "checking " << i+dir[x][0] << ' ' << i+dir[x][1] << endl;
                    if(arr[i+dir[x][0]][j+dir[x][1]] > arr[i][j]){
                        higher++;
                    }
                    else if(arr[i+dir[x][0]][j+dir[x][1]] < arr[i][j]){
                        lower++;
                    }
                    all++;
                }
                vector<int> tmp;
                tmp.push_back(i);
                tmp.push_back(j);
                if(higher > all/2.0){
                    tmp.push_back(1);
                    pre.push_back(tmp);
                    // cout << "pre_push_back:" << endl;
                    // for(int charlie = 0; charlie<3;charlie++) cout << tmp[charlie] << " \n"[charlie==2];
                }
                else if(lower > all/2.0){
                    tmp.push_back(-1);
                    pre.push_back(tmp);
                    // cout << "pre_push_back:" << endl;
                    // for(int charlie = 0; charlie<3;charlie++) cout << tmp[charlie] << " \n"[charlie==2];
                }
            }
        }
        for(int j = 0; j<pre.size(); j++){
            arr[pre[j][0]][pre[j][1]] += pre[j][2];
            ans += pre[j][2];
            // cout << "arr" << pre[j][0] << ' ' << pre[j][1] << " += " << pre[j][2] << endl;
        }
        // cout << "OOOOOHOOOOO\n";
    }
    cout << ans;
    return 0;
}