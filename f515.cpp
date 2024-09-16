#include <iostream>
#include <vector>
using namespace std;
string upper(string s){
    string ans;
    for(auto &i: s){
        if(i>='a'){
            ans.push_back(i - 'a' + 'A');
        }
    }
    return ans;
}
string lower(string s){
    string ans;
    for(auto &i: s){
        if(i<='Z'){
            ans.push_back(i - 'A' + 'a');
        }
    }
    return ans;
}
int main(){
    vector<char> ans;
    string s;
    while(cin >> s){
        if(upper(s) == "FOR"){
            ans.push_back('4');
            continue;
        }
        if(upper(s) == "AND"){
            ans.push_back('n');
            continue;
        }
        if(upper(s) == "YOU"){
            ans.push_back('u');
            continue;
        }
        if(upper(s) == "TO"){
            ans.push_back('2');
            continue;
        }
        if(s[0] >= 'a'){
            ans.push_back(s[0] - 'a' + 'A');
        }
        else{
            ans.push_back(s[0]);
        }
    }
    for(auto &i:ans){
        cout << i;
    }

}