//
//  Aiden Ramos
//  Class Work 09/12
//
//
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("//path here");
    
    cout << "Writing to file.\n";
    
    //write four names to file
    outputFile <<"Aiden\n";
    outputFile <<"John\n";
    outputFile <<"Robert\n";
    outputFile <<"Frank\n";
    
    //close file
    
    outputFile.close();
    
    cout <<"Done\n";
    
    
    
    return 0;
}
