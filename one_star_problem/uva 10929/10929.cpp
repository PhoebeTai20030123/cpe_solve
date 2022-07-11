////#include<iostream>
////#include<string>
////using namespace std;
////int main(){
////     string tc;
////    while(cin>>tc){
////        if(tc=="0") break;
////        else{
////             int one=0; //计眖计秨﹍
////             int two=0; //案计
////             string s=tc;
////             char x, y;
////             for(int i=0; i<s.length()-1; i=i+2){
////                x=s[i];
////                y=s[i+1];
////                one+=(x-'0');
////                two+=(y-'0');
//////                cout<<one<<" "<<two<<endl;
////             }
////             if(s.length()%2==1)
////                one+=(s[s.length()-1]-'0');
//////            cout<<one<<" "<<two<<endl;
////            int c=abs(one-two);
////            if(c==0 || c%11==0)
////                cout<<tc<<" is a multiple of 11."<<endl;
////            else
////                cout<<tc<<" is not a multiple of 11."<<endl;
////        }
////    }
////}
//
//
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//    string tc;
//    while(cin>>tc){
//        if(tc=="0") break;
//        else{
//            int one=0;
//            int two=0;
//            int clk=0;
//            char x;
//            for(int i=0; i<tc.length(); i++){
//                x=tc[i];
//                if(clk==0){
//                    one+=(x-'0');
//                    clk=1;
//                }
//                else{
//                        two+=(x-'0');
//                        clk=0;
//                }
//            }
//            int y=abs(one-two);
//            if(y==0 || y%11==0)
//                cout<<tc<<" is a multiple of 11."<<endl;
//            else
//                cout<<tc<<" is not a multiple of 11."<<endl;
//        }
//    }
//}



#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string tc;
    int tmp;
    while(cin>>tc){
        if(tc=="0") break;
        else{
            int one=0;
            int two=0;
            vector<int>v;
            stringstream ss(tc);
            while(ss>>tmp){
                v.push_back(tmp);
            }
            for(int i=0; i<v.size()-1; i=i+2){
                one+=v[i];
                two+=v[i+1];
            }
            if(v.size()%2!=0)
                one+=v[v.size()-1];
            int y=abs(one-two);
            if(y==0 || y%11==0)
                cout<<tc<<" is a multiple of 11."<<endl;
            else
                cout<<tc<<" is not a multiple of 11."<<endl;
        }
    }
}
