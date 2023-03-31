
#include <iostream>
using namespace std;
int main() {
    int score[5][4];
    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = 0;j<3;j++){
            cin>>score[i][j];
            sum += score[i][j];
        }
        score[i][3] = sum;
        sum = 0;
    }
    cout<<score;

    return 0;
}
