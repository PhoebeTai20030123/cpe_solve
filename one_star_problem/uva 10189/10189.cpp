#include<iostream>
#include<string>
//#include<vector>
//#include<sstream>
using namespace std;
int main(){
    int m, n;
    int x=1;
    while(cin>>m>>n){
        if(m==0 && n==0) break;
        else{
                cin.ignore(1);
                char s[10000];
                for(int i=0; i<m*n; i++){
                    cin>>s[i];
                }
//                for(int i=0; i<m*n; i++)
//                    cout<<s[i]<<" "<<i<<endl;
                char a[101][101];        //ªì©l¤Æ
                for(int i=0; i<101; i++){
                    for(int j=0; j<101; j++){
                        a[i][j]={'0'};
                    }
                }
//                for(int i=0; i<m; i++){
//                    for(int j=0; j<n; j++){
//                        cout<<a[i][j]<<" "<<i<<j<<endl;;
//                    }
//                    cout<<endl;
//                }
                int y=0;
                for(int i=1; i<m+1; i++){
                    for(int j=1; j<n+1; j++){
                        if(s[y]=='*'){
                            a[i][j]='*';
                            if(a[i-1][j-1]!='*') a[i-1][j-1]++;
                            if(a[i-1][j]!='*')a[i-1][j]++;
                            if(a[i-1][j+1]!='*')a[i-1][j+1]++;
                            if(a[i][j-1]!='*')a[i][j-1]++;
                            if(a[i][j+1]!='*')a[i][j+1]++;
                            if(a[i+1][j-1]!='*')a[i+1][j-1]++;
                            if(a[i+1][j]!='*')a[i+1][j]++;
                            if(a[i+1][j+1]!='*')a[i+1][j+1]++;
                        }
                        y++;
                    }
                }
                cout<<"Field #"<<x<<": "<<endl;
                for(int i=1; i<m+1; i++){
                    for(int j=1; j<n+1; j++)
                        cout<<a[i][j];
                    cout<<endl;
                }
                cout<<endl;
                x++;
        }
    }
}
