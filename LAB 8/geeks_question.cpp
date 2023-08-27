#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char *string1="HELLO WORLD";
    int n=strlen(string1);
    for(int i=0; i<n; i++){
        cout.write(string1,i);
        cout<<endl;
    }


    for(int i=n; i>0; i--){
        cout.write(string1,i);
        cout<<endl;
    }
    return 0;
}