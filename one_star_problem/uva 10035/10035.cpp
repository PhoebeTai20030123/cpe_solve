#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    while(cin>>n1>>n2){
        if(n1==0 && n2==0) break;

        else{
            int carry=0;
            int counter=0;
             while(n1>0 || n2>0){ //當相加有溢位產生
                 carry=n1%10+n2%10+carry;
                 carry=carry/10;
                 if(carry)
                    counter++;
                 n1=n1/10;
                 n2=n2/10;
            }
            if(counter==0)
                cout<<"No carry operation."<<endl;
            else if(counter==1)
                cout<<"1 carry operation."<<endl;
            else
                cout<<counter<<" "<<"carry operations."<<endl;
        }
    }
}
