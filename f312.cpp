#include <iostream>
using namespace std;
int main(){
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    int n = 0;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> n;
    int ans = -111111111;
    int tmp = n;
    while(tmp >= 0){
        int wtf = n-tmp;
        int y1 = (a1*wtf*wtf+b1*wtf+c1);
        int y2 = (a2*tmp*tmp+b2*tmp+c2);
        if((y1+y2)>=ans){
            ans = y1+y2;
        }
        tmp--;
    }
    cout << ans;

}