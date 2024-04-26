//merge sort buoi 3
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right){
  int n1 = mid - left + 1;
  int n2 = right - mid;
  int L[n1], R[n2];
  for(int i = 0; i < n1; i++) L[i] = arr[left+i];
  for(int j = 0; j < n2; j++) R[j] = arr[mid+1+j];
  int i = 0, j = 0; int k = left;
  while(i<n1&&j<n2){
    if(L[i] >= R[j]){
      arr[k] = R[j];
      j++;
    }else{
      arr[k] = L[i];
      i++;
    }
    k++;
  }
  while(i<n1){
    arr[k] = L[i];
    i++;
    k++;
  }
  while(j<n2){
    arr[k] = R[j];
    j++;
    k++;
  }
}
void mergesort(int arr[], int left, int right){
  if(left < right){
    int mid = left + (right-left)/2;
    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);
    merge(arr, left, mid, right);
  }
}
int main(){
  int n;
  cin >> n; 
  int arr[n];
  for(int  i = 0; i < n; i++){
    cin >> arr[i];
  }
  int brr[n];
  int cnt = 0;
  for(int  i = 0; i < n; i++){
    if(arr[i]!=-1) brr[cnt++] = arr[i];
  }
  mergesort(brr,0,cnt-1);
  int c[n];
  int cnt1 = 0;
  for(int i = 0; i < n; i++){
    if(arr[i]==-1) cout << "-1 ";
    else cout << brr[cnt1++] << " ";
  }
}
