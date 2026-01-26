#include <iostream>
using namespace std;
int main() {
    char a[]= "abcabcz";
    int freq[26]={0};

    for(int i =0; a[i]!='\0';i++){
        char  ch = a[i];
        int indx = ch - 'a';
        freq[indx]++;
    }

    for(int i =0 ; i<26;i++){
        char x = i+'a';
        cout<<x<<"  charsacter is-->"<<freq[i]<<endl;
    }
    return 0 ;
}
