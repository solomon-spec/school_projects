#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void closest_temperature(int temperature, int* ans);

int main() {
    string def_program = "This program takes a degree from 0 - 999 and returns the closest degree that doesn't have 1, 4 & 7 in its digit";
    cout << def_program << "\n\n";
    
    int temperature;
    char choice;

    program:
    cout << "Enter temperature: ";
    cin >> temperature;
    if ((temperature < 0 )|| (temperature >999)){
        cout<<"Wrong input"<<endl;
        goto program;
    }
    int ans[2];
    closest_temperature(temperature, ans);
    if (ans[0] != ans[1]){
    cout << "Closest temperatures that don't contain 1, 4, or 7: " << ans[0] << " " << ans[1] << endl;
    }
    else{
        cout<<"Closest temperature that don't contain 1, 4, or 7: "<< ans[0] << endl;
    }
    cout << "Do you want to exit? (y/n) ";
    cin >> choice;
    
    if (choice != 'Y' && choice != 'y') {
        goto program;
    }
    
    return 0;
}

void closest_temperature(int temperature, int* ans) {
    int dummy_temp = temperature;
    
    for (int i = 2; i >= 0; i--) {
        int dig = dummy_temp / pow(10, i); 
        if (dig == 1 || dig == 4 || dig == 7) {
            ans[0] = (int(temperature / pow(10, i))) * pow(10, i) + pow(10, i);
            ans[1] = (int(temperature / pow(10, i))) * pow(10, i) - 1;
            return;
        }
        dummy_temp -= dig * pow(10, i);
    }
    
    ans[0] = temperature;
    ans[1] = temperature;
}
