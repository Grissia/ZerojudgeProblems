#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n ; i++){
        int a;
        long long int b,c;
        cin >> a;
        cin >> b >> c;
        switch (a){
        case 1:
            cout << b+c;
            break;
        case 2:
            cout << b-c;
            break;
        case 3:
            cout << b*c;
            break;
        case 4:
            cout << b/c;
            break;
        default:
            break;
        }
    }
}