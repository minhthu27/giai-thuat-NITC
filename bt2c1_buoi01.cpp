//bt 2 buoi 1 
//C1: 
#include<bits/stdc++.h>
using namespace std;
int dem(int n){
	int cnt = 0;
	for(int i = 2; i <= n; i++){
		if(i%5==0){
			int tmp = i;
			while(tmp%5==0){
			cnt++;
			tmp /= 5;
		}
		}
	}
	return cnt;
}
int giaithua(int n){
	if(n==1) return 1;
	return n*giaithua(n-1);
}
int main()
{
	int n;
	cin >> n;
	int a = dem(n);
	int b = giaithua(n);
	while(a--){
		b /= 10;
	}
	cout << b%10;
} 
