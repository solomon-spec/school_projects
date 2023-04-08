#include <iostream>
#include<cmath>
#include<string>

using namespace std;
int main() {
    string def_program = "This program takes a degree from 0 - 999 ans returns the closest degree that doesnt have 1,4 & 7 in it's digit";
    cout<<def_program<<"\n\n";
    program:
   int temprature;
   cout<<"Enter temprature\t";
   cin >> temprature;
   int dummy_temp = temprature;
   int ans[2];
   
   for(int i = 2; i>=0; i--){
       
       int dig = dummy_temp /pow(10,i); 
       if ((dig == 1) || (dig == 4) || (dig == 7)){
           ans[0] = (int(temprature / pow(10,i)))*pow(10,i) + pow(10,i);
           ans[1] = (int(temprature / pow(10,i)))*pow(10,i) - 1;
           cout<<ans[0]<<" "<<ans[1];
           goto close_program;
       }
       dummy_temp -= dig*pow(10,i);
   }
    cout<<temprature;
    char choice;
    close_program:
    cout<<"\nDo You Want to Exit (y/n)\t";
    cin>>choice;
    if(choice != 'Y' && choice != 'y')
    goto program;
    return 0;
} 
