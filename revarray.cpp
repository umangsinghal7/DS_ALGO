#include<iostream>
using namespace std;

void revarray(int a[] , int n ){
	for(int i = 0 ; i < n/2 ; i++){
		
			swap(a[i],a[n-i-1]);
		
	}
	for(int i = 0 ; i < n ; i++){
		cout<< a[i]<<endl;
	}
}


int main() {
	int n ;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin>> a[i];
	}
	revarray(a,n);

	return 0;
}