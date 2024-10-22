//
//  Aiden Ramos
//  CW_10-22
//
//  Created by Aiden Ramos on 10/22/24.
//

#include <iostream>
using namespace std;


int Search(const int[], int, int);

int main() {
    
    const int size=5;
    int tests[size]={21,76,96,84,100};
    int res;
    
    
    
    res=Search(tests,size,100);
    
    if (res==-1)
        cout <<"You did not earn 100 points on a test \n ";
    else{
        cout<<"You earned 100 points on test ";
        cout<<(res +1)<<endl;
    }
    return 0;
}

int Search(const int arr[],int size,int value)
{
    int index=0;
    int position=-1;
    bool found=false;
    
    while (index<size && !found)
    {
        if (arr[index]==value)
        {
            found=true;
            position=index;
            
        }
        index++;
    }
    return position;
}
