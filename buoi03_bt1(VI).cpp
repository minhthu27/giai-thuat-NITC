//bt1(VI) buoi 3
#include<bits/stdc++.h>
using namespace std;
int tong(int a){
  int sum = 0;
  while(a){
    sum += a%10;
    a /= 10;
  }
  return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if((tong(arr[j]) > tong(arr[j+1])) || (tong(arr[j]) == tong(arr[j+1]) && arr[j] > arr[j+1])){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
  

}
