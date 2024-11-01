//
//  Aiden Ramos
//  CW-10_31
//
//  Created by Aiden Ramos on 10/31/24.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    /*
    int x=25;
    int *ptr=nullptr;
    
    ptr=&x;
    
    
    cout<<"Here is the value in x,printed twice: \n";
    cout<<x<<endl;
    cout<<*ptr<<endl;
    
    *ptr=100;
    
    
    cout<<"once again,here is the value in x: \n";
    cout<<x<<endl;
    cout<<*ptr<<endl;
    */
    
    double *sales=nullptr,total=0.0,average;
    
    int numDays,count;
    
    cout<<"How many days of sales amounts do you wish ";
    cout<<"To process? ";
    cin>>numDays;
    
    sales=new double[numDays];
    
    cout<<"Enter the sales amounts below. \n";
    
    for(count=0;count<numDays;count++)
    {
        cout<<"Day "<<(count+1)<<": ";
        cin>>sales[count];
    }
    
    for(count=0;count<numDays;count++)
    {
        total+=sales[count];
    }
    
    average=total/numDays;
    
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\n\nTotal Sales: $"<<total<<endl;
    cout<<"Average Sales: $"<<average<<endl;
    
    delete[]sales;
    sales=nullptr;
    
    
    
    return 0;
}
