#include<iostream>
#include <algorithm>
using namespace std;
int main (){
    int arr[] = {1,1,1,0,0,0,1,1,1,1,0,0};
    int k = 2 ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxlength = 0 ;
    int length;
    int l = 0 , r = 0 , zeros = 0 ;
    while(r<n){
        if(arr[r]==0) zeros++;
        while(zeros>k){
            if(arr[l]==0) zeros--;
            l++;
            if(zeros<=k){
                length = r-l+1;
                maxlength = max(length , maxlength);
                r++;
            }
        }
    }
    cout<<maxlength;
}