#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m, n;
    while(cin>>m>>n){
        if((m==0 || n==0) || (m==1 || n==1)) cout<<"Boring!"<<endl;
        else{
                vector<int>v;
                int counter=0;
                int a=m;
                int b=n;
                while(m>0 ){
                    if(m%n==0 || m==1 ){
                        counter++;
                        v.push_back(m);
                        m=m/n;
                        if(m<n && m>1){
                            v.pop_back();
                            //cout<<m<<endl;
                            break;
                            //cout<<m<<" ";
                        }
                    }
                    else{
                        counter++;
                        break;
                    }
                }
                if(v.size()<counter || b>a) {
                    cout<<"Boring!"<<endl;
                    //break;
                }
                else{
                    for(int i=0; i<v.size(); i++){
                        if(i!=v.size()-1)
                            cout<<v[i]<<" ";
                        else
                            cout<<v[i];
                    }
                    cout<<endl;
                }
                v.clear();
        }
    }
}
