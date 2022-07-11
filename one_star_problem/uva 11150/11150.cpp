#include<iostream>
using namespace std;
int odd(int n){
    if(n==0) return 0;
    else if(n%2==0){
            return odd(n-1)+2;
    }
    else if(n%2!=0){
            return odd(n-1)+1;
    }
}
int even(int n){
    if(n==0) return 0;
    else if(n%2==0) return even(n-1)+1;
    else if(n%2!=0) return even(n-1)+2;
}
int main(){
    int n;
    while(cin>>n){
        int ans=0;
        if(n%2!=0)
            ans=odd(n);
        else
            ans=even(n);
        cout<<ans<<endl;
    }
}
