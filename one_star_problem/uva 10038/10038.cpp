#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tc;
    while(cin>>tc){
        int num=tc;
        int a[3000]={0};
        vector<int>v;
        v.clear();
        int x, y, z, sum;
        int clk=0;
        while(tc--){
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<v.size()-1; i++){
            y=v[i];
            z=v[i+1];
            sum=abs(y-z);
            if(sum>=num || sum<1){
                cout<<"Not jolly"<<endl;
                clk=1;
                break;
            }
            a[sum]++;
        }
        if(clk==0){
            for(int i=1; i<num; i++){
                if(a[i]==0){
                    clk=1;
                    cout<<"Not jolly"<<endl;
                    break;
                }
//            cout<<a[i]<<" ";
            }
        }
        if(clk==0) cout<<"Jolly"<<endl;
    }
}
