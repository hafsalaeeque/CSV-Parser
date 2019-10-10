/******************************************************************************

Brief Description: A source file parsing CSV files 
******************************************************************************/
#include "CSVParser.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

/* Reads the CSV contents of a file, writes to result and return OK/FAIL */	
CSVParser::RESULT CSVParser::ReadFile(const std::string &filePath) {
  cout << "ReadFile function is called and the filepath is ||" << filePath << "||"<< endl;
  //file pointer
  ifstream fin;
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

      CSVRow csvRow;
      /* separate by comma and store in variable*/
      while(getline(ss, data, ',')){
        csvRow.push_back(data);       
      }
      cout << "Adding row to data" << endl;
      mData.push_back(csvRow);
      csvRow.clear();
      cout << "Size of csvData is: " << mData.size() << endl << endl;         
    }
    cout<< "Closing file after populating vector" <<endl << endl;
    fin.close();
    return RESULT::OK;
  }
  else{
    cout <<"File cannot open" <<endl;
    return RESULT::FAIL;
  }
}
     
/* Gets an entry in the CSV data given the row and column index */	
string CSVParser::GetEntry(int rowIndex, int colIndex) {
  int row = rowIndex, col = colIndex;
  cout << "calling GetEntry function" << endl;
  cout << "Row is " << rowIndex << " and column is "<< colIndex << endl;
  string entry = mData.at(row).at(col);
  return "Entry is " + entry;   
}

/* Removes all data stored */
void CSVParser::ClearData(void) {
  cout << "Clearing data in vector...";
  mData.clear();
  if (mData.empty() == false){
    cout << "\nData is not cleared";     
  }
  else{
    cout << "\nData is cleared";
  }
}
