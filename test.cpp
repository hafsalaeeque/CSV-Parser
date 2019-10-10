/******************************************************************************

Brief Description: A source file parsing CSV files 
******************************************************************************/
#include "CSVParser.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

//g++ CSVParser.cpp main.cpp -o main.exe
//./main.exe

/* Reads the CSV contents of a file, writes to result and return OK/FAIL */	
CSVParser::RESULT CSVParser::ReadFile(const std::string &filePath) {
//use fstream to open and access the file , before that create fstream object
//use object to access function of fstream
// .open to open the file 
// use string fn, getline, to read the lines. 3 params, to store line, to store word word, delim
// while loop to read all lines http://www.cplusplus.com/forum/beginner/11304/
//  and put into csvRow
// put csvRow into mData , use pushback
//clear csvRow .clear
  cout << "ReadFile function is called and the filepath is ||" << filePath << "||"<< endl;
  //file pointer
  ifstream fin;
  //CSV data 
  cout << "File pointer created, opening file" << endl << endl ;
  fin.open(filePath);
  string line;
  cout << "File opened" << endl << endl;
  if (fin.is_open()){
    /* read the entire line*/
    while (getline(fin, line)){
      cout<< line << endl;
      
      std::stringstream ss(line);
      string data;
      int id;
      CSVRow csvRow;
      /* separate by comma and store in variable*/
      while(getline(ss, data, ',')){
        csvRow.push_back(data); 
        cout << "Data "<< data << " is inserted in csvRow" << endl;
        cout << "Size of csvRow is: " << csvRow.size() << endl;      
        if(stoi(csvRow[0])){
          id = stoi(csvRow[0]);
          cout << "Id is " << id << endl;
        }
      }
      cout << "adding row to data" << endl;
      mData.push_back(csvRow);
      cout << "Size of mData is: " << mData.size() << endl;      
         
    }

    cout<< "closing file after looping" <<endl;
    fin.close();

    return RESULT::OK;

  }
  else{
    cout <<"file not open" <<endl;
    return RESULT::FAIL;

  }

}
      
/* Gets an entry in the CSV data given the row and column index */	
string CSVParser::GetEntry(int rowIndex, int colIndex) {
//use mdata, works like an array, more like 2d array
//condition to row size and mdsta size , reverse
// vector .at()
//  

  // cout << mData.size();
  cout << "Get Entry function is called and here is rowIndex " << rowIndex << " and colIndex is "<< colIndex << endl;

  return mData.at(rowIndex).at(colIndex);
}

/* Removes all data stored */
void CSVParser::ClearData(void) {
  //vector clear function
  cout << "Clear Data function is called" << endl;
  mData.clear();
}