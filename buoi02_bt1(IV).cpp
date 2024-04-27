//bt1(IV)_buoi02
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int x){
    int l = 0, r = n - 1;
   
    while(l<=r){
        int mid = (l+r)/2;
        if(x==arr[mid]) return mid;
        else if(x>mid) l = mid+1;
        else r = mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int b;
    cin >> b;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << binarysearch(arr,n,b);
}
