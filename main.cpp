#include "CSVParser.h"
#include <iostream>
using namespace std;

int main(){
    string csvName ("testing.csv");
    cout << "Welcome to the CSV Parser programme! " << std::endl << std::endl;
    // cout << "Creating object " << endl;
    CSVParser parser;
    // cout << "object created " << endl;
    cout << "calling ReadFile function" << endl;
    parser.ReadFile(csvName);
    
    cout << parser.GetEntry(0,0) << endl;
    cout << parser.GetEntry(20,1) << endl;
    parser.ClearData();


    return 0;
}
