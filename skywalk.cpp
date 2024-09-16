#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t ; i++){
        int n,m,k;
        cin >> n >> m >> k;
        int lb = 1, ub = m+1;
        while(lb < ub){
            int mid = lb + (ub-lb)/2;
            long long total;
            for(int i = mid; i>0 ; i++){
                total += i;
            }
            for(int i = mid-1; i<)
            
        }
    }
}