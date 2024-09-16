#include <iostream>
using namespace std;
int main(){
    int n = 0;
    while(cin >> n){
        int y=0,z=0;
        int ans = 0;
        int calc = n/2;
        for(int i = 0;i<=calc;i++){
            for(int j=0;j<=calc;j++){
                if(2*(i+j)<=n){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}