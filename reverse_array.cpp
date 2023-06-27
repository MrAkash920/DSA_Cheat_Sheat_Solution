//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    int s = 0;
    int e = n-1;
    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    //reverse(arr, arr+n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}