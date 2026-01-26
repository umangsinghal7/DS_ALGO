#include <iostream>
#include<cstring>
using namespace std;

void rotatestring(char a[100] , int n , int len){
    int i = len -1 ;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }

    i = 0 ;
    int j=len;
    while(i<n){
        a[i]=a[j];
        i++ ;
        j++;
    }
    a[len]= '\0';
    cout<<a<<endl;
}

int main() {
    int n ;
    cin>>n;
    char a[100] = "helloworld";
    int len = strlen(a);
    rotatestring(a,n,len);
    return 0;


}
