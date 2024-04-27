//bt3(V) buoi 3
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Bubble sort

//   {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//   }


  //Selection sort

//   {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n-1; i++){
//         int minIndex = i;
//         for(int j = i+1; j < n; j++){
//             if(arr[minIndex] > arr[j]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
//         for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//   }

    //Insertion Sort

  {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0&&arr[j] > key){
          arr[j+1] = arr[j];
          j -= 1;
        }
        arr[j+1] = key;
    }
        for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

  }

  

  

}
