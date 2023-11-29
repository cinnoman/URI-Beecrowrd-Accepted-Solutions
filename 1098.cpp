#include <iostream>
using namespace std;
int main(){

   float i=0;
   float j=1;
   while(i<=2.1){
     cout<<"I="<<i<<" "<<"j="<< j+i<<endl;
     cout<<"I="<<i<<" "<<"j="<< j+i+1<<endl;
     cout<<"I="<<i<<" "<<"j="<< j+i+2<<endl;
     i+=.2;
   }

  return 0;
}
