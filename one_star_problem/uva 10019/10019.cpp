#include<iostream>
using namespace std;
//#include<bitset>
int main(){
        int tc;
        cin>>tc;
        int hex[16]={0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};
        while(tc--){
            int dec1, hex2, b1=0, b2=0;
            cin>>dec1;
            hex2=dec1;
            while(dec1>0){
                if(dec1%2==1)
                    b1++;
                dec1=dec1/2;
            }
            while(hex2>0){
                b2+=hex[hex2%10];
                hex2=hex2/10;
            }
            cout<<b1<<" "<<b2<<endl;
        }
}
