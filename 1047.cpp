#include <iostream>

using namespace std;

int main() {

    int y;
    while(cin>>y){
        if(y%4==0 && y%100!=0){
            if(y%15==0){
                cout<<"This is leap year."<<endl;
                cout<<"This is huluculu festival year."<<endl;
                cout<<endl;
            }
            else {
                cout<<"This is leap year."<<endl;
                cout<<endl;
            }
        }
        else if(y%4==0 && y%100!=0 && y%55==0){
            cout<<"This is leap year."<<endl;
            cout<<"This is bulukulu festival year."<<endl;
            cout<<endl;
        }
        else {
            cout<<"This is an ordinary year."<<endl;
            cout<<endl;
        }
    }

    return 0;
}
