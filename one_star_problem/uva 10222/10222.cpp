#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        string m1="qwertyuiop[]";
        string m2="asdfghjkl;'";
        string m3="zxcvbnm,.";
        for(int i=0; i<s.length(); i++){
            if(isspace(s[i])) cout<<" ";
            for(int j=0; j<m1.length(); j++){
                if(s[i]==m1[j])
                    cout<<m1[j-2];
            }
            for(int j=0; j<m2.length(); j++){
                if(s[i]==m2[j])
                    cout<<m2[j-2];
            }
            for(int j=0; j<m3.length(); j++){
                if(s[i]==m3[j])
                    cout<<m3[j-2];
            }
        }
        cout<<endl;
    }
}
