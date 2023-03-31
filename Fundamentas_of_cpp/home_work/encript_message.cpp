
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int encrypt(int number){
    int dummy = number;
    int ans = 0;
    for(int i = 3; i>=0; i--){
    
        int cur_dig = dummy/pow(10,i);
        dummy -= cur_dig*pow(10,i);
        cur_dig = (cur_dig + 7) % 10;
        cur_dig = cur_dig*pow(10,i + 2);
        if (cur_dig >= 10000) cur_dig /= 10000;
        ans += cur_dig;
        
        
    }
    cout<<"encrypted is "<<ans<<endl;
    dummy = ans;
    return 0;
}


int decrypt(int number){
    int dummy = number;
    int ans = 0;
    for(int i = 3; i>=0; i--){
    
        int cur_dig = dummy/pow(10,i);
        dummy -= cur_dig*pow(10,i);
        
        if (cur_dig >= 7) cur_dig = cur_dig - 7;
        else cur_dig += 3;
        
        cur_dig = cur_dig*pow(10,i + 2);
        if (cur_dig >= 10000) cur_dig /= 10000;
        ans += cur_dig;
        
    }
    cout<<"decrypted is "<<ans<<endl;
    return 0;
}

int main() {
    program:
        cout<<"enter a 4 digit number"<<endl;
        int number;
        cin>>number;
        int choose;
        cout<<"1 for encrypt 2 for decrept"<<endl;
        cin>>choose;
        if(choose == 1){
            encrypt(number);
        }
        else{
            decrypt(number);
        }
        char cont;
        cout<<"Do you want to continue y/n: ";
        cin>> cont;
        if (cont == 'y') goto program;
        
    
    
   
    
    
}
