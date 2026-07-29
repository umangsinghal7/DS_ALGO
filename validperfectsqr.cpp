#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   long long int left=1;
   long long int right = n;
   while(left<=right){
       long long int mid = left + (right-left)/2;
       long long int square = mid*mid;
       if(square==n){
           cout<<1;
           return 1;
       }
       else if(square>n){
           right = mid-1;
       }
       else if(square<n){
           left = mid+1;
       }
   }
   cout<<0;
   return 0;
}
