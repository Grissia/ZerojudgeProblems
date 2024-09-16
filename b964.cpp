#include <iostream>
using namespace std;

int main(){
    int arr[25] = {-1};
    int n = 0;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    int luck = 0;
    int worse = 0;
    bool flag = true,a=false;
    for(int i=0;i<n;i++){
        if(flag){
            if(arr[i]>=60){
                worse = arr[i];
                flag = false;
            }
        }
        if(arr[i]<60){
            luck = arr[i];
            a = true;
        }
        cout << arr[i] << ' ';
    }

    cout << endl;
    if(a){
        cout << luck << endl;
    }
    else{
        cout << "best case\n";
    }
    if(!flag){
        cout << worse << endl;
    }
    else{
        cout << "worst case\n";
    }
}