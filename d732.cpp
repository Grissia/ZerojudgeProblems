#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int arr[1000005];
    int n,k;
    cin >> n >> k;
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i<k ;i++){
        int target;
        cin >> target;
        int left = 0, right = n-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(arr[mid] == target){
                cout << mid+1 << endl;
                break;
            }
            else if(arr[mid]>target){
                right = mid-1;
            }
            else if(arr[mid]<target){
                left = mid+1;
            }
        }
        if(left > right){
            cout << 0 << endl;
        }
    }
}