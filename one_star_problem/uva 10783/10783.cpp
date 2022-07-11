#include<iostream>
using namespace std;
int main(){
    int tc;
    int m, n;
    cin>>tc;

        for(int  x=1; x<=tc; x++){
            cin>>m>>n;
            int counter=0;
             for(int i=m; i<=n; i++){
                if(i%2==1)
                   counter=counter+i;
             }
            cout<<"Case "<<x<<": "<<counter<<endl;
        }

}
