#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            int num =  7 - abs(7 - j);
            int num2 =  7 - abs(7 - i);
            if (num + num2 <= 7){
                cout<<char(num+ 65)<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}  
