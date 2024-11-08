//
//  Aiden Ramos
//  HW11
//
//  Created by Aiden Ramos on 11/8/24.
//

#include <iostream>
using namespace std;
struct WeatherData{
    double rain;
    double high;
    double low;
    double averageTemp;
};

void getMonthData(WeatherData &);
double totalRain(WeatherData[],int);
double AvgmonthRain(WeatherData[],int);
double AvgAvgTemp(WeatherData[],int);
double highTemp(WeatherData[],int,int &);
double lowTemp(WeatherData[],int,int &);

int main() {
    
    const int MONTHS=12;
    
    WeatherData year[MONTHS];
    
    int HighMonth;
    int lowMonth;
    
    cout<<"Enter the following information:\n ";
    for (int index=0; index<MONTHS;index++){
        cout<<"Month "<<(index+1)<<endl;
        getMonthData(year[index]);
        
    }
    
    cout<<"\nTotal Rainfall:"<<totalRain(year,MONTHS)<<endl;
    
    cout<<"Average Monthly Rain:"<<AvgmonthRain(year,MONTHS)<<endl;
    
    cout<<"Average Monthly Average Temperature:"<<AvgAvgTemp(year,MONTHS)<<endl;
    
    double Highest=highTemp(year,MONTHS,HighMonth);
    cout<<"Highest Temperature:"<<Highest;
    cout<<" (Month "<<HighMonth<< ")\n";
    
    double lowest=lowTemp(year,MONTHS,lowMonth);
    cout<<"Lowest Temperature:"<<lowest;
    cout<<" (Month "<<lowMonth<< ")\n\n";
    
    
    
    
    
    
    return 0;
}

void getMonthData(WeatherData &data){
    
    cout<<"\tTotal Rainfall:";
    cin>>data.rain;
    
    cout<<"\tHigh Temperature: ";
    cin>>data.high;
    
    while(data.high<-100||data.high>140){
        cout<<"ERROR:Temperature not in range of -100 through 140.\n";
        cout<<"\tHigh Temperature: ";
        cin>>data.high;
    }
    
    cout<<"\tLow Temperature: ";
    cin>>data.low;
    
    while(data.low<-100||data.low>140){
        cout<<"ERROR:Temperature not in range of -100 through 140.\n";
        cout<<"\tLow Temperature: ";
        cin>>data.low;
    }
    
    data.averageTemp=(data.high+data.low)/2.0;

}

double totalRain(WeatherData data[],int size){
    
    double totalRain=0;
    
    for (int index=0; index<size;index++)
        totalRain+=data[index].rain;
    
    return totalRain;
}

double AvgmonthRain(WeatherData data[],int size){
    
    return totalRain(data,size)/size;
}

double AvgAvgTemp(WeatherData data[],int size){
    double aveTotal=0;
    double aveAve;
    
    for(int index=1;index<size;index++)
        aveTotal+=data[index].averageTemp;
    
    aveAve=aveTotal/size;
    
    return aveAve;
    
}

double highTemp(WeatherData data[],int size, int &month){
    double highest=data[0].high;
    
    for(int index=1;index<size;index++){
        if (data[index].high>highest){
            highest=data[index].high;
            
            month=index+1;
        }
    }
    return highest;
}

double lowTemp(WeatherData data[],int size, int &month){
    double lowest=data[0].low;
    
    for (int index=1;index<size;index++){
        if (data[index].low<lowest){
            lowest=data[index].low;
            
            month=index+1;
        }
    }
    return lowest;
}
