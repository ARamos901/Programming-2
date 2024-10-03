//
//  Ramos CW
//  Ramos_CW6-Thursday
//
//  Created by Aiden Ramos on 10/3/24.
//

#include <iostream>
using namespace std;

int main() {
    /*
    const int NUM_EMPLOYEES=6;
    int hrs[NUM_EMPLOYEES];
    
    cout <<"Enter the hours worked by "
    <<NUM_EMPLOYEES<<" employess: ";
    
    cin>>hrs[0];
    cin>>hrs[1];
    cin>>hrs[2];
    cin>>hrs[3];
    cin>>hrs[4];
    cin>>hrs[5];
    
    cout<<"The hours you entered are:";
    
    cout<<" "<<hrs[0];
    cout<<" "<<hrs[1];
    cout<<" "<<hrs[2];
    cout<<" "<<hrs[3];
    cout<<" "<<hrs[4];
    cout<<" "<<hrs[5] << endl;
    
    */
    
    const int Months=12;
    int days [Months]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    for (int count=0; count<Months;count++)
    {
        cout<<"Month "<<(count+1)<<" has ";
        cout<< days[count]<<" days.\n";
        
    }
    return 0;
}
