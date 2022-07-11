#include<iostream>
using namespace std;
int main(){
    string s;
    int counter=1;
    while(getline(cin,s)){
        for(int i=0; i<s.length(); i++){
            if(s[i]=='"' && counter%2==1){
                cout<<"``";
                counter++;
            }
            else  if(s[i]=='"' && counter%2==0){
                cout<<"''";
                counter++;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
}
