//
//  Aiden Ramos
//  HW8
//
//  Created by Aiden Ramos on 10/24/24.
//

#include <iostream>

using namespace std;

void Bubble(int[],int,int &);

void Select(int[],int,int &);

void swap(int &,int &);

int main(){
    
    const int SIZE=20;
    int Bubcount1=0;
    int Selctcount2=0;
    int vals1[SIZE]={2,5,3,1,4,6,7,8,11,19,20,12,14,18,11,19,13,28,29,24};
    int vals2[SIZE]={2,5,3,1,4,6,7,8,11,19,20,12,14,18,11,19,13,28,29,24};
    
    cout<<"The unsorted values are:\n";
    for (auto element : vals1)
        cout<<element<<" ";
    cout<<endl;
    
    Bubble(vals1,SIZE,Bubcount1);
    Select(vals2,SIZE,Selctcount2);
    
    
    cout<<"The amount of exchanges the Bubble sort made was: "<<Bubcount1<<"\n"<<endl;
    cout<<"The amount of exchanges the Selection sort made was: "<<Selctcount2<<"\n"<<endl;
    
    
    
    
    
    return 0;
}

void Bubble(int array[],int size,int &count)
{
    int maxEl;
    int index;
    
    for (maxEl=size-1;maxEl>0;maxEl--)
    {
        for (index=0;index<maxEl;index++)
        {
            if (array[index]>array[index+1])
            {
                swap(array[index],array[index+1]);
                count++;
            }
        }
    }
    
    
}

void Select(int array[],int size, int &count)
{
    int minIndex,minValue;
    
    for (int start=0;start<(size-1);start++)
    {
        minIndex=start;
        minValue=array[start];
        for (int index=start+1;index<size;index++)
        {
            if (array[index]<minValue)
            {
                minValue=array[index];
                minIndex=index;
            }
        }
        swap(array[minIndex],array[start]);
        count++;
    }
    
}


void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

