//
//  Ramos CW
//  Ramos_CW6-Thursday
//
//  Created by Aiden Ramos on 10/3/24.
//

#include <iostream>
using namespace std;

int main() {
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
    
    
    return 0;
}
