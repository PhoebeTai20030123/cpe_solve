#include<iostream>
using namespace std;
int main(){
    long long  s, d;
    while(cin>>s>>d){
            while(d>0){
                d=d-s;
                s=s+1;
            }
            cout<<s-1<<endl;
    }
}
