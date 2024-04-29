#include <bits/stdc++.h>
using namespace std;
int diff(int arr[], int left, int right){
  if(left == right) return 0;
  int mid = (right+left)/2;
  int leftd = diff(arr,left,mid);
  int rightd = diff(arr,mid+1,right);
  int minl = arr[mid]; int maxr = arr[mid+1];
  for(int i = left; i <=mid; i++){
    minl = min(arr[i],minl);
  }
  for(int i = mid + 1; i <= right; i++){
    maxr = max(arr[i],maxr);
  }
  return max(leftd,max(rightd,maxr-minl));
}


int main(){
  int n; cin >> n; int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];   
  cout << diff(arr,0,n-1);
  
}
