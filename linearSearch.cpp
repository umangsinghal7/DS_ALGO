#include<iostream>
using namespace std;


void linearsrch(int a[] , int n , int key ){
	bool found = false;
	for(int i = 0 ; i < n ; i++){
		if ( a[i] == key ){
			cout<<i<<endl;
			found = true;
			break;
		}
	}
	if(!found){
		cout<<-1<<endl;
	}
}


int main() {
	int n ; 
	cin>>n;
	int a[n];
	for ( int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	int key ;
	cin>>key;
	linearsrch(a,n,key);
	return 0;
}