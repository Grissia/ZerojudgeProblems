#include <iostream>
using namespace std;

int main(){
    int a,s;
    cin >> a >> s;
    int t = s/a;
    if (t*a==s){
        cout << t << endl;
    }
    else {
        cout << t+1 << endl;
    }

}