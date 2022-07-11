#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int ca(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;
    }
}

int main(){
    int n;
    while(cin>>n){
        int a=ca(n); //如果n不是質數=>出現0，是質數=>出現自己
       cout<<a<<" ";
        string s=to_string(n);
        reverse(s.begin(), s.end());
        int m=stoi(s);
        int b=ca(m);
        cout<<b<<endl;
        i        if((a==0 && b==0)&&(n!=m))
            cout<<n<<" is emirp."<<endl;
        else if(a==0)
            cout<<n<<" is prime."<<endl;
        else
            cout<<n<<" is not prime."<<endl;
    }
}
//        if((a==0 && b==0)&&(n!=m))
//            cout<<n<<" is emirp."<<endl;
//        else if(a==0)
//            cout<<n<<" is prime."<<endl;
//        else
//            cout<<n<<" is not prime."<<endl;


