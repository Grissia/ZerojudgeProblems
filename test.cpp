#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int INF = INT_MAX; // 用來表示無窮大

// 弗洛伊德演算法函數
int floyd_warshall(int n, vector<vector<int>>& costs, int start, int end) {
    // 初始化距離矩陣和轉機次數矩陣
    vector<vector<int>> dist(n, vector<int>(n, INF));
    vector<vector<int>> transfers(n, vector<int>(n, 0));  // 用來記錄轉機次數

    // 設置初始距離和轉機次數
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                dist[i][j] = 0;  // 城市到自己的距離是 0
            } else if (costs[i][j] != -1) {
                dist[i][j] = costs[i][j];  // 初始距離為票價
                transfers[i][j] = 0;       // 直接航班無轉機
            }
        }
    }

    // 弗洛伊德演算法來更新最短距離和轉機次數
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];  // 更新最短距離
                    transfers[i][j] = transfers[i][k] + transfers[k][j] + 1;  // 更新轉機次數
                }
            }
        }
    }

    // 計算最終票價（包含轉機優惠）
    int min_cost = dist[start - 1][end - 1];  // 起點和終點調整為1基數索引
    if (min_cost == INF) {
        return -1;  // 如果沒有可行路徑，返回 -1
    } else {
        int total_transfers = transfers[start - 1][end - 1];
        int final_cost = min_cost - 50 * total_transfers;  // 每次轉機便宜 50 塊
        return final_cost;
    }
}

int main() {
    int n = 3;  // 城市數量
    vector<vector<int>> costs = {
        {-1, 500, 100},
        {200, -1, 300},
        {400, 400, -1}
    };
    int start = 1, end = 3;  // 起點和終點城市

    // 輸出最少票價
    int result = floyd_warshall(n, costs, start, end);
    cout << result << endl;  // 預期輸出：100

    return 0;
}
