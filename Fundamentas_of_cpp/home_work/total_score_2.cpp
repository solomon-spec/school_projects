#include <iostream>
#include <string>
using namespace std;
bool check(string no1,string no2){
    int i = 0;
    int j = 0;
    if (no1.length() > no2.length()) return false;
    while ((i < no1.length()) && (j < no2.length())){
        if (no1[i] != no2[i]){
            return false;
        }
        i++;
        j++;
    }
    return true;
}



int main() {
    int students;
    int subjects;

    cout<<"Enter student number"<<endl;
    cin>>students;

    cout<<"Enter subject number"<<endl;
    cin>>subjects;

    int score[students][subjects + 1];
    string stu_name[students];

    for(int i = 0; i < students; i++){

        cout<<"Enter student name"<<endl;
        cin>>stu_name[i];
        int sum = 0;

        for(int j = 0;j<subjects;j++){
            cout<<"enter "<<stu_name[i]<<"'s subject"<<i+1;
            cin>>score[i][j];
            sum += score[i][j];
        }
        
        score[i][subjects] = sum;
        sum = 0;
    }
    cout<<"enter the letter you want the names to start with";
    string start;
    cin>>start;

    for(int i = 0; i < students ; i++){
        if(check(start,stu_name[i]) == true) cout<<stu_name[i]<<"'s"<<" total is "<<score[i][subjects]<<endl;
    }


    return 0;
}
