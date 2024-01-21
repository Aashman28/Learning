#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    string str,substr1,substr2;
    cin>>str;
    substr1="1111111",substr2="0000000";
    bool a = false;
    if(str.length()<7){cout<<"NO";}
    else{
        for(int i =0;i<=str.length()-7;++i){
        if(str.substr(i,7)==substr1){
            a = true;

        }
        if(str.substr(i,7)==substr2){
            a = true;

        }
    }
    if(a){cout<<"YES";}
    else{cout<<"NO";}

    }
    
 return 0;
}