#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
// 靠 我寫一題寫了快兩小時
using namespace std;

int rtoi(string x);
string itor(int x);

int main(){
    string a, b;
	while(cin >> a) {
		if(a == "#") break;
		cin >> b;
		int na = rtoi(a), nb = rtoi(b);
		if(na == nb) cout << "ZERO\n";
		else cout << itor(abs(na - nb)) << '\n';
	}
}

int rtoi(string x) {
    string keys[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int vals[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int ans = 0;
    int i = 0;

    while (i < x.size()) {
        bool found = false;
        for (int j = 0; j < 13; j++) {
            if (i + 1 < x.size() && x.substr(i, 2) == keys[j]) {
                ans += vals[j];
                i += 2;
                found = true;
                break;
            }
        }
        if (!found) {
            for (int j = 0; j < 13; j++) {
                if (x.substr(i, 1) == keys[j]) {
                    ans += vals[j];
                    i++;
                    break;
                }
            }
        }
    }

    return ans;
}

string itor(int x){
    int tmp = 0;
    string keys[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int vals[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ans = "";

    while(x>0){
        if(x>=vals[tmp]){
            x -= vals[tmp];
            ans += keys[tmp];
        }
        else{
            tmp++;
        }
    }
    return ans;
}