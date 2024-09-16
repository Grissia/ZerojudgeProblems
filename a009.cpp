#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    
    string s;
    getline(cin,s);
    for(int i = 0;i<s.size();i++){
        cout << char(s[i]-7);
    }
    
    return 0;
}