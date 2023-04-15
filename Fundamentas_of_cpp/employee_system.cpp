#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
string calculate_tax(int sal){
    string tax;
    if(sal < 600){
            tax = "0";
        }
    else if(sal <= 4000){
        tax = to_string((sal*10)/100);
    }
    else if(sal <= 8000){
        tax = to_string((sal*20)/100);
    }
    else if(sal <= 12000){
        tax = to_string((sal*30)/30);
    }
    else{
        tax = to_string((sal*40)/100);
    }
    return tax;

}

string calculate_bonus(int exp){
        if(exp > 10){
            return "2500";
        }
        else if(exp >= 5){
             return "1000";
        }
        else {
            return "0";
        }
}

string calculate_insentive(int man_eval,char gender){
    int insentive = 0;
    if(gender == 'f') insentive += 1000;
    if(man_eval >= 90) insentive += 1000;
    return to_string(insentive);
}

void add_employee(int*total,string (*employee)[12]){
    string arr[] = {"name","id","age","sex","experiance","salary","pension","manegerial eval","tax","bouus","insentive","-2"};
    for(int i = 0; i<8; i++){
        cout<<arr[i]<<":\t";
        cin>>employee[*total][i];
    }
    employee[*total][8] = calculate_tax(stoi(employee[*total][5]));
    employee[*total][9] = calculate_bonus(stoi(employee[*total][4]));
    employee[*total][10] = calculate_insentive(stoi(employee[*total][7]),employee[*total][3][0]);
    employee[*total][11] = to_string(stoi(employee[*total][5]) + stoi(employee[*total][9]));
    *total += 1;
    return;
    }

void edit_val(int no_employee, string (*employee)[12],string arr[12]){
    for(int i = 0;i<8;i++){
        char ce;
        cout<<"Do you want to edit "<<employee[no_employee][0]<<"'s "<<arr[i]<<"(y/n)";
        cin>>ce;
        if(ce == 'y') cin>>employee[no_employee][i];
        employee[no_employee][8] = calculate_tax(stoi(employee[no_employee][5]));
        employee[no_employee][9] = calculate_bonus(stoi(employee[no_employee][4]));
        employee[no_employee][10] = calculate_insentive(stoi(employee[no_employee][7]),employee[no_employee][3][0]);
        employee[no_employee][11] = to_string(stoi(employee[no_employee][5]) + stoi(employee[no_employee][9]));
        }

}

bool test(string n, string m){
    if (n.length() != m.length()){
            return false;
    }
    for(int i  = 0; i< n.length(); i++){
        if(n[i] != m[i]){
            return false;
        }
    }
    return true;
 }
int main(){
    string arr[] = {"name","id","age","sex","experiance","salary","pension","manegerial eval","tax","bouus","insentive","-2"};
    //menu
    int menu;
    int total = 0;
    string employee[50][12];
    program:
    cout<<"Enter \n1 to add employee record\n2 to update employee record\n3 to display all employee info \n4 to search by ID \& name\n5 to exit\n";
    cin>>menu;
    if(menu == 1){
        add_employee(&total,employee);
        goto program;
    }
    else if(menu ==2){
        string sear;
        cout<<"Enter the name or id of employee you want to edit";
        cin>>sear;
        for(int i = 0; i < total; i++){
            if( test(sear,employee[i][0]) || test(sear,employee[i][1]) ){
                 edit_val(i,employee,arr);
            }
        }

    }
    else if(menu == 3){
        for(int i = 0;i<total; i++){
            for(int j = 0; j < 12; j++){
                cout << left << setw(7) << employee[i][j];
            }
            cout<<endl;
        }
    }
    else if(menu == 4){
        string sear;
        cout<<"enter the id or name";
        cin>>sear;
        for(int i = 0; i < total; i++){
            if( test(sear,employee[i][0]) || test(sear,employee[i][1]) ){
                 for(int j = 0; j < 12; j++){
                    cout << left << setw(7) << employee[i][j];
            }
            cout<<endl;
            }
        }
    }
    else if(menu == 5){
        return 0;
    }
    else{
        goto program;
    }
    return 0;
}