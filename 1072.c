// done
#include <stdio.h>
int main(){

   int i, n, x, sum1=0, sum2=0;
   scanf("%i", &n);
   for(i=1; i<=n; i++){
     scanf("%i", &x);
     if(x>=10 && x<=20){
       sum1= sum1+1;
     }
     else if(x<10 || x>20){
       sum2= sum2+1;
     }

   }

   printf("%i in\n", sum1);
   printf("%i out\n", sum2);

  return 0;
}
