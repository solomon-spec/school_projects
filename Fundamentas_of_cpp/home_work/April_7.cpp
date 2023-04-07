#include <iostream>
#include<cmath>
using namespace std;
int main() {
    cout<<"pattern1"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout<<"* ";
        }
        cout<< endl;
    }
    cout<<"pattern2"<<endl;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if (j <= i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"pattern3"<<endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if (j >= i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"pattern4"<<endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if (j < (4- i)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"pattern5"<<endl;
    int j;
    for(int i = 0; i < 5; i++){
        j = 0;
        while(j < 9){
            if(abs(j - 4) <= abs(4 - i)) {
                cout<<"*"<<" ";
                j += 2;
            }
            else {
                cout<<" ";
                j += 1;
            }
        }
        cout<<endl;
    }
    return 0;
}
