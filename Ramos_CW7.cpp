//
//  Aiden Ramos
// CW 7
//
//  Created by Aiden Ramos on 10/8/24.
//

#include <iostream>
using namespace std;

/*
void showValues(int [],int);

int main() {
    
    const int S1=8;
    const int S2=5;
    int set1[S1]={5,10,15,20,25,30,35,40};
    int set2[S2]={2,4,6,8,20};
    
    showValues(set1,S1);
    
    showValues(set2,S2);
    
    
    
    
    return 0;
}
void showValues(int nums[],int size)
{
    for (int index=0; index <size; index++)
        cout << nums [index] << " ";
    cout<<endl;
}
*/


#include <iomanip>

const int cols=4;
const int TB1_row=3;
const int TB2_row=4;

void showArr(const int [][cols], int);

int main(){
    
    int table1[TB1_row][cols]={{1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}};
    
    
    int table2[TB2_row][cols]={{10,20,30,40},
                                {50,60,70,80},
                                {90,100,110,120},
                            {130,140,150,160}};
    
    cout<<"The contents of table1 are: \n";
    showArr(table1, TB1_row);
    cout<<"The contents of table2 are: \n";
    showArr(table2, TB2_row);
    
    return 0;
}


void showArr(const int numbers[][cols],int rows)
{
    for (int x=0; x<rows;x++){
        for (int y=0;y<cols;y++){
            cout<<setw(4)<<numbers[x][y]<<" ";
        }
        cout<<endl;
    }
        
}

