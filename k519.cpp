#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl "\n"

int n;
long long arr[15][15] = {};
int alfa, bravo;

void Floyd(){
    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
                /*
                cout << "====================" << endl;
                for(int x = 1; x<=n; x++){
                    for(int y = 1; y<=n; y++){
                        cout << arr[x][y] << " \n"[y==n];
                    }
                }
                */
            }
        }
    }

}
int main(){
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            int tmp;
            cin >> tmp;
            if(tmp == -1) arr[i][j] = 1e9;
            else arr[i][j] = tmp;
        }
    }

    cin >> alfa >> bravo;
    Floyd();
    cout << arr[alfa][bravo] << endl;
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