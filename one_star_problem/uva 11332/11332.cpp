#include<iostream>
using namespace std;
int sum_no_ten(int n){
    if(n==0) return 0;
    return sum_no_ten(n/10)+n%10;
}
int main(){
    int zero;

    while(cin>>zero){
        if(zero==0) break;
        else{
            int x=zero;
            while(x>=10){    //�p�ߪ`�N�p�G�u��if�u�|�]�@��
                x=sum_no_ten(x);
            }
            cout<<x<<endl;
        }
    }
}
