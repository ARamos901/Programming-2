//
//  Aiden Ramos
//  CW-11_05
//
//  Created by Aiden Ramos on 11/5/24.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll{
    int empNum;
    string name;
    double hrs;
    double payrate;
    double grosspay;
};


int main() {
    PayRoll employee;
    
    //Employee Num
    cout<<"Enter the employee's number: ";
    cin>>employee.empNum;
    
    //Employee Name
    cout<<"Enter the employee's name: ";
    cin.ignore();
    getline(cin,employee.name);
    
    //hrs worked
    cout<<"How many hours did the employee work? ";
    cin>>employee.hrs;
    
    //emplyee hr pay rate
    cout<<"What is the employee hourly pay rate? ";
    cin>>employee.payrate;
    
    //gros pay calucation
    employee.grosspay=employee.hrs*employee.payrate;
    
    //employee data
    
    cout<<"Here is the employee payroll data: \n";
    cout<<"Name:"<<employee.name<<endl;
    cout<<"Number:"<<employee.empNum<<endl;
    cout<<"Hours worked:"<<employee.hrs<<endl;
    cout<<"Pay rate:"<<employee.payrate<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The employee's total pay is $"<<employee.grosspay<<endl;
    
    
    
    
    
    return 0;
}
