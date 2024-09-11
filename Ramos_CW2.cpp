//
//  Aiden Ramos
//  Classwork week 2
//
//
//

#include <iostream>
using namespace std;
int main() {
    
    int grade;
    
    cout<<"Please enter a grade: ";
    cin>>grade;
    
    if (grade>=0 && grade <= 100)
        cout<<"Valid grade \n";
    if (grade<0 ||grade>100)
        cout<<"Invalid grade\n";
    
        
    grade>=70? cout<<"Passed\n": cout<<"Failed\n";
        
    
    return 0;
}
