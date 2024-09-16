#include <iostream>
using namespace std;
int rev(int x);

int main(){
    int f;
    cin >> f;
    cout << rev(f);
}

int rev(int x){
    if(x==1){
        return 1;
    }
    else if(x%2 == 0){
        return rev(x/2);
    }
    else{
        return rev(x-1) + rev(x+1);
    }
}