#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0; i<tc; i++){
            int m;
            cin>>m;
            int n;
            vector<int>v;
            v.clear();
            int counter=0;
            while(m--){
                    cin>>n;
                    v.push_back(n);
            }
//            for(auto it: v)
//                cout<<it;
            for(int j=v.size()-1; j>0; j--){
                for(int k=0; k<j; k++){
                    if(v[k]>v[k+1]){
                        swap(v[k], v[k+1]);
                        counter++;
                    }
                }
            }
            cout<<"Optimal train swapping takes "<<counter<<" swaps."<<endl;
    }
}
