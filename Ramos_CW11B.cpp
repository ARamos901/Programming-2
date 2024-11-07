//
//  Aiden Ramos
//  CW-11_07
//
//  Created by Aiden Ramos on 11/7/24.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*struct EmployeePay{
    string name;
    int empNum;
    double payRate;
    double hrs;
    double grosspay;

};
 */

struct PayInfo{
    int hrs;
    double payRate;
};

int main() {
   /*
    EmployeePay employee1={"Betty Ross", 141,18.75};
    EmployeePay employee2={"Jill Sandburg",142,17.50};
    
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Name:"<<employee1.name<<endl;
    cout<<"Name:"<<employee1.empNum<<endl;
    cout<<"Enter the hours worked by this employee: ";
    cin>>employee1.hrs;
    employee1.grosspay=employee1.hrs*employee1.payRate;
    cout<<"Gross Pay: "<<employee1.grosspay<<endl<<endl;
    
    cout<<"Name: "<<employee2.name<<endl;
    cout<<"Employee Number: "<<employee2.empNum<<endl;
    cout<<"Enter the hours worked by this employee: ";
    cin>>employee2.hrs;
    employee2.grosspay=employee2.hrs*employee2.payRate;
    cout<<"Gross pay: "<<employee2.grosspay<<endl;
    */
    
    const int num_wrkers=3;
    PayInfo wrkers[num_wrkers];
    int index;
    
    cout <<"Enter the hours worked by "<<num_wrkers <<" employees and their hourly rates. \n";
    
    for (index=0; index<num_wrkers;index++){
        cout<<"Hours worked by employee #"<<(index+1);
        cout<<": ";
        cin>>wrkers[index].hrs;
        
        cout<<"Hourly pay rate for employee #";
        cout<<(index+1)<<": ";
        cin>>wrkers[index].payRate;
        cout<<endl;
        }
    
    cout<<"Here is the gross pay for each employee:\n";
    cout<<fixed<<showpoint<<setprecision(2);
    for (index=0; index<num_wrkers; index++){
        double gross;
        gross=wrkers[index].hrs*wrkers[index].payRate;
        cout<<"Employee #"<<(index+1);
        cout<<": $"<<gross<<endl;
    }
    
    
    
    return 0;
}
