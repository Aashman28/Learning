#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    float n,m,t;
    int counter=0 ;
    cin>>n>>m;
    
    t = m/n;
    //cout<<"t is "<<t<<endl;
    bool two = true;
    bool three = true;
    //cout<<t-int(t);
    while(two){
        
        if((t-int(t))==0){
            t/=2;
            counter++;
        }
        else{two = false;}

    }
    while(three){
        
        if((t-int(t))==0){
            t/=3;
            counter++;
        }
        else{three = false;}

        
    }
    if(m==n){cout<<0<<endl;}
    else if(counter==0){cout<<-1<<endl;}
    else{cout<<counter<<endl;}
    



 return 0;
}