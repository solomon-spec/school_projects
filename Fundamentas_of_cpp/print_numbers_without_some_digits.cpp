#include <iostream>
#include<cmath>
using namespace std;
int main() {
    
   int temprature;
   cin >> temprature;
   int dummy_temp = temprature;
   int ans[2];
   
   for(int i = 2; i>=0; i--){
       
       int dig = dummy_temp /pow(10,i); 
       if ((dig == 1) || (dig == 4) || (dig == 7)){
           ans[0] = (int(temprature / pow(10,i)))*pow(10,i) + pow(10,i);
           ans[1] = (int(temprature / pow(10,i)))*pow(10,i) - 1;
           cout<<ans[0]<<" "<<ans[1];
           return 0;
       }
       dummy_temp -= dig*pow(10,i);
   }
    cout<<temprature;
    return 0;
}  
