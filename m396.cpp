#include <iostream>
using namespace std;
int main(){
    int t,g,w,e,b;
    cin >> t >> g >> w >> e >> b;
    int usage = g+w+e+b;
    if (t>=usage){
        cout << usage;
    }
    else{
        cout << -1;
    }
}