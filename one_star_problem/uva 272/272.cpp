#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    vector<char>v;
     int counter=1;
    while(getline(cin, s)){
        v.clear();
        char x='`';
        char y='\'';
        for(int i=0; i<s.length(); i++){
            if(s[i]=='"'){
                if(counter%2==1){
                    v.push_back(x);
                    v.push_back(x);
                }
                else if(counter%2==0){
                    v.push_back(y);
                    v.push_back(y);
                }
                counter++;
            }
            else{
                v.push_back(s[i]);
            }
        }
        for(int i=0; i<v.size(); i++)
            cout<<v[i];
        cout<<endl;
    }
}
