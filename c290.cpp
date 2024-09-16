#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    cin >> num;
    int ans = 0;
    bool flag = true;
    for(char dig : num){
        int val = dig - '0';
        if(flag){
            ans += val;
            flag = false;
        }
        else{
            ans -= val;
            flag = true;
        }
    }
    cout << abs(ans);
}