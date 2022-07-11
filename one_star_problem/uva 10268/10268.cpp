//從前面往後解不出來qq, 底下就可以qq
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cmath>
using namespace std;
int main(){
    long long int x;
    string s;
    vector<int>a;
    while(cin>>x){
            cin.ignore();
            a.clear();
            long long int sum=0;
            long long int n=-1;//why start from -1??
            while(getline(cin,s)){
                    stringstream ss(s);
                    while(ss>>s){
                        a.push_back(stoi(s));
                        n++;
                    }
                    for(int i=0; i<n; i++){
                            sum+=a[i]*(n-i)*pow(x,n-i-1);
                    }
                    cout<<sum<<endl;
                    break;
            }
    }
}






//
//
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//string s;
//int x;
//vector <int> v;
//
//int main() {
//    while (cin >> x){
//        cin.ignore();
//        getline(cin, s);
//        stringstream ss(s);
//        v.clear();
//        while (ss >> s){
//            v.push_back(stoi(s));
//        }
//        v.pop_back();
//        reverse(v.begin(), v.end());
////        for(auto it : v)
////            cout<<it<<" ";
//        long long mul = 1;
//        int ans = 0;
//        for (int i = 0; i < v.size(); i++){
//            ans += v[i]*(i+1)*mul;
//            mul *= x;
//        }
//        cout << ans << "\n";
//    }
//}
