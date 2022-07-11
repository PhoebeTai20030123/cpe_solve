#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b;
    while(cin>>a>>b){
        if(a==0 && b==0) break;

        else{
                float aa=sqrt(a);
                b=sqrt(b);
                if(aa!=round(a))
                    cout<<b-(int)aa<<endl;
                else
                    cout<<b-(int)aa+1<endl;
        }

    }
}
