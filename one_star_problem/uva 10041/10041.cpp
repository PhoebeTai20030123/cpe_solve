#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
            int m;
            cin>>m;
            cin.ignore();
            string s;
            int tmp;
            vector<int>v;
            v.clear();
            int counter=0;
            while(getline(cin, s)){
//                    for(auto it: s)
//                        cout<<it;
                    stringstream ss(s);
                    while(ss>>tmp)
                        v.push_back(tmp);
                    break;
            }
//            for(auto it: v)
//                cout<<it<<" ";
            for(int i=v.size()-1; i>0; i--){
                for(int j=0; j<i; j++){
                    if(v[j]>v[j+1])
                        swap(v[j], v[j+1]);
                }
            }
//            for(auto it: v)
//                cout<<it<<" ";
            int x;
            x=v.size()/2;
//            cout<<x<<endl;
            int a=v[x];
//            cout<<a<<endl;
            for(int i=0; i<v.size(); i++){
                counter+=abs(a-v[i]);
            }
            cout<<counter<<endl;
    }
}
