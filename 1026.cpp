#include <iostream>

using namespace std;
int main(){

  long long int x,y, binary;
  while(cin>>x){
    cin>>y;
    binary=x^y;
    cout<<binary<<endl;
  }

  return 0;
}
