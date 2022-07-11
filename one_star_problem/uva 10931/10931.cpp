#include<iostream>
#include<string>
using namespace std;
int main(){
    int m;
    while(cin>>m){
        if(m==0) break;
        else{
            string s;
            int counter=0;
            while(m>0){
                if(m%2==0)
                    s='0'+s;
                else{
                    s='1'+s;
                    counter++;
                }
                m=m/2;
            }
            cout<<"The parity of "<<s<<" is "<<counter<<" (mod 2)."<<endl;
        }
    }
}
