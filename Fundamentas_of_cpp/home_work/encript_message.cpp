
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout<<"enter a 4 digit number"<<endl;
    int number;
    cin>>number;
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
    cout<<"encripted is "<<ans<<endl;
    dummy = ans;
    ans = 0;
    for(int i = 3; i>=0; i--){
    
        int cur_dig = dummy/pow(10,i);
        dummy -= cur_dig*pow(10,i);
        if (cur_dig >= 7) cur_dig = cur_dig - 7;
        else cur_dig += 3;
        cur_dig = cur_dig*pow(10,i + 2);
        if (cur_dig >= 10000) cur_dig /= 10000;
        cout<<cur_dig<<" "<< dummy<<endl;
        ans += cur_dig;
        
    }
    cout<<"decripted is "<<ans;
    
    
}
