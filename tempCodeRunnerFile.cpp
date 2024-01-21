#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n = str.length();
    bool a = true;
   // cout<<"n is "<<n<<endl;
    for(int i = 0;i<n;i++){
        //cout<<"i is "<<i<<endl;
        if(str[i]== '1'){
            if(str[i+1]=='4' && str[i+2]=='4'){
                i+=2;
            }
            if(str[i+1]=='4' && str[i+2]!='4'){
                i+=1;
            }
            
        }
        else{a = false;}
    }
    
    if(a==false){cout<<"NO";}
    if(a==true){cout<<"YES";}


 return 0;
}