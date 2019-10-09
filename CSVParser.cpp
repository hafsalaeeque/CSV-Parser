/******************************************************************************

Brief Description: A source file parsing CSV files 
******************************************************************************/
#include "CSVParser.h"
#include <iostream>
#include <fstream>
using namespace std;

//g++ CSVParser.cpp main.cpp -o main.exe
//./main.exe

// std::vector<std::string> CSVParser::CSVRow;
// std::vector CSVParser::CSVData;
// std::vector<std::vector<std::string>> mData;

/* Reads the CSV contents of a file, writes to result and return OK/FAIL */	
CSVParser::RESULT CSVParser::ReadFile(const std::string &filePath) {
//use fstream to open and access the file , before that create fstream object
//use object to access function of fstream
// .open to open the file 
// use string fn, getline, to read the lines. 3 params, to store line, to store word word, delim
// while loop to read all lines http://www.cplusplus.com/forum/beginner/11304/ and put into csvRow
// put csvRow into mData , use pushback
//clear csvRow .clear

}

/* Gets an entry in the CSV data given the row and column index */	
string CSVParser::GetEntry(int rowIndex, int colIndex) {
//use mdata, works like an array, more like 2d array
//condition to row size and mdsta size , reverse
// vector .at()
//   
}

/* Removes all data stored */
void CSVParser::ClearData(void) {
  //vector clear function
  mData.clear();
}


int main()
{
  // ReadFile()
  return 0;
}