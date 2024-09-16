#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int back,front;
    cin >> front;
    int ans = 0;
    int tmp = 0;
    while(n-1){
        back = front;
        cin >> front;

        if(back>front){
            tmp++;
        }
        else if(tmp>ans){
            ans = tmp;
            tmp = 0;
        }
        else{
            tmp = 0;
        }
        n--;

    }
    cout << ans ;
}