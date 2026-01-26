#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n ; // no of strings//
    cin>>n;
    cin.ignore();
    char s [1000];
    int maxlength=0;
    char maxlen[1000];
    for(int i = 0 ; i < n ; i++){
        cin.getline(s,1000);
        
        if (strlen(s)>maxlength) {
            maxlength=strlen(s);
             strcpy(maxlen, s);
        }
    }
        cout<<maxlen<<endl;
        cout<<maxlength<<endl;
  
        
}
