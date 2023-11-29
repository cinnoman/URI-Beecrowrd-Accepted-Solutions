#include <iostream>
#include <string>
using namespace std;

int main() {
  string a,b,c;
 cin>>a>>b>>c;
 string s[10]={"vertebrado","ave","carnivoro","onivoro","mamifero",
              "herbivoro","invertebrado", "inseto","hematofago","anelideo"};
   if(a==s[0] && b==s[1] && c==s[2]){
     cout<< "aguia"<<endl;
   }
 else if(a==s[0] && b==s[1] && c==s[3]){
   cout<<"pomba"<<endl;
 }
 else if(a==s[0] && b==s[4] && c==s[3]){
   cout << "homen"<<endl;
 }
 else if(a==s[0] && b==s[4] && c==s[6]){
   cout<< "vaca"<<endl;
 }
 else if(a==s[6] && b==s[7] && c==s[8]){
   cout<< "pulga"<<endl;
 }
 else if(a==s[6] && b==s[7] && c==s[5]){
   cout<<"lagarta"<<endl;
 }
 else if(a==s[6] && b==s[9] && c==s[8]){
   cout<<"sanguessuga"<<endl;
 }
 else if(a==s[6] && b==s[9] && c==s[3]){
   cout<<"minhoca"<<endl;
 }
    return 0;
}
