#include <iostream>
#include <string>
using namespace std;

int main() {
   string def_program = "This program takes loan amount and interest rate as an input and calculates the monthly payment and the remening loan for each month";
   cout<< def_program<<"\n"<<endl;
   program:
   cout<<"Enter the loan amount\t";
   float loan;
   cin>>loan;
  
   cout<<"Inter the interest rate\t";
   float interest;
   cin>>interest;
   interest /= 100;
   
   float monthly_payment = loan/20;
   float this_month_interest;
   float remaining_month_payment;
   int month = 1;
   cout<<"month\t monthly payment\t remaining loan"<<endl;
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
       
        cout<<"month "<<month<<" \t";
        cout<<monthly_payment<<" BIRR\t\t\t";
        cout<<loan<<" BIRR"<<endl  ;
        month += 1;
       
   }
  char choice;
  cout<<"\nDo You Want to Exit (y/n)\t";
  cin>>choice;
  if(choice != 'Y' && choice != 'y')
    goto program;
   
}
