#include <iostream>
#include <string>
using namespace std;

int main() {
   string def_program = "This program takes loan amount and interest rate as an input and calculates the monthly payment and the remening loan for each month";
   
   cout<< def_program<<endl;
   cout<<"Enter the loan amount"<<endl;
   float loan;
   cin>>loan;
  
   cout<<"Inter the interest rate"<<endl;
   float interest;
   cin>>interest;
   interest /= 100;
   
   float monthly_payment = loan/20;
   float this_month_interest;
   float remaining_month_payment;
   int month = 1;
   
   while (loan > 0){
       
       this_month_interest = (loan * interest)/12;
       remaining_month_payment = monthly_payment - this_month_interest;
       
       if (loan >= remaining_month_payment){
           loan -= remaining_month_payment;
       }
       else{
           monthly_payment = loan;
           loan = 0;
       }
       
       cout<<"For month "<<month<<endl;
     
        cout<<"\tYour monthly payment is "<<monthly_payment<<" BIRR"<<endl;
        cout<<"\tYour remaining loan is " << loan<<" BIRR"<<endl  ;
        month += 1;
       
   }
   
}
