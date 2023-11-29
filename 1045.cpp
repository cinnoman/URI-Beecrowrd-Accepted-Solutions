#include <iostream>

using namespace std;

int main() {

   double a,b,c, max;
   while(cin>>a>>b>>c){
   max=a;
   if(b>max){
       a=b;
       b=max;
       max=a;
   }

   if(c>max){
      a=c;
      c=max;
      max=c;
   }
   if(a>=(b+c)){
       cout<<"NAO FORMA TRIANGULO"<<endl;continue;
   }
   if((a*a)==((b*b)+(c*c))){
       cout<<"TRIANGULO RETANGULO"<<endl;
   }
   if((a*a)>((b*b)+(c*c))){
       cout<<"TRIANGULO OBTUSANGULO"<<endl;
   }
   if((a*a)<((b*b)+(c*c))){
       cout<<"TRIANGULO ACUTANGULO"<<endl;
   }
   if(a==b && b==c){
       cout<<"TRIANGULO EQUILATERO"<<endl;
   }
   if(a==b && a!=c){
       cout<<"TRIANGULO ISOSCELES"<<endl;
   }
   if(b==c && b!=a){
      cout<<"TRIANGULO ISOSCELES"<<endl;
   }
   if(c==a && a!=b){
      cout<<"TRIANGULO ISOSCELES"<<endl;
   }
 }

    return 0;
}
