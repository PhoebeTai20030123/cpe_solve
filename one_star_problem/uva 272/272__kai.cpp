#include<iostream>
using namespace std;
int main(){
    char word;
    int counter=1;
    while(cin.get(word)){
        if(word=='"'){
            if(counter%2){
                cout<<"``";
            }
            else{
                cout<<"''";
            }
            counter++;
        }
        else{
            cout<<word;
        }
    }
}
