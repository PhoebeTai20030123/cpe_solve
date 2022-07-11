#include <iostream>
#include<string>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    cin.ignore();
    string s;
    int a[30]={0};
    char A[26];
    int b=0;
    for(char i=65; i<=90; i++){
        A[b]=i;
        b++;
    }
//    for(int i=0; i<26; i++){
//        cout<<A[i]<<" ";
//    }
    for(int k=0;  k<tc; k++){
        getline(cin, s);
//        cout<<s.length()<<endl;
        for(int i=0; i<s.length(); i++){
           if('a'<=s[i] && s[i]<='z'){
                a[s[i]-'a']++;
//                cout<<a[i]<<" ";
//                cout<<s[i]<<endl;
            }
             if('A'<=s[i] && s[i]<='Z'){
                a[s[i]-'A']++;
//                cout<<a[i]<<" ";
//                cout<<s[i]<<endl;
             }
        }

    }
//        for(int i=0; i<26; i++){
//                cout<<a[i]<<" ";
//            }
    for(int i=25; i>0; i--){        //°O±o·¥­­¦b­þ!
        for(int j=0; j<i; j++){
            if(a[j]==a[j+1] && A[j]>A[j+1])
                swap(A[j], A[j+1]);
            if(a[j]<a[j+1]){
                swap(a[j], a[j+1]);
                swap(A[j], A[j+1]);
            }
        }
    }
//     for(int j=0; j<26; j++){
//             cout<<A[j]<<" ";
//            cout<<a[j]<<endl;
//    }
    for(int i=0; i<26; i++){
        if(a[i]!=0)
            cout<<A[i]<<" "<<a[i]<<endl;
    }
}
