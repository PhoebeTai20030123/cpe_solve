//純數學解 ....//無解QAQ
//#include<iostream>
//using namespace std;
//int main(){
//    int m, n;
//    while(cin>>m>>n){
//        if(m==0 & n==0) break;
//
//        else{
//            float x=m**1%2;
//            float y=n**1%2;
//            if(x%2!=0)
//                x=x+1;
//            if(y%2!=0)
//                y=y+1;
//            cout<<y-x+1<<endl;
//        }
//    }
//}


//用到算根的
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//    int m, n;
//    while(cin>>m>>n){
//        if(m==0 &&n==0) break;
//
//        else{
//                float x=sqrt(m);
//                int y=sqrt(n);
//                if(x==round(x))
//                    cout<<y-(int)x+1<<endl;
//                else if(x!=round(x))
//                    cout<<y-(int)x<<endl;
//        }
//    }
//}


//用算平方的方式解
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m, n;
    while(cin>>m>>n){
        if(m==0 &&n==0) break;
        else {
            float x=pow(m,0.5); //因為x需要判斷是不是浮點數!
            if(x!=round(x))
                x=x+1;

            int y=pow(n,0.5); //他就最後了不能比他大一點所以不用加了!
            int counter=0;
            for(int i=x; i<=y; i++){
                counter++;
            }
            cout<<counter<<endl;
        }
    }
}
