/******************************************************************************

Brief Description: A header file containing CSV file parsing class
******************************************************************************/
#ifndef CSVPARSER_H
#define CSVPARSER_H

#include <string>
#include <vector>

class CSVParser
{
	//CSVRow > CSVData(vector) > mData
	//this creates an empty string vector.
	typedef std::vector<std::string> CSVRow; //struct
	typedef std::vector<CSVRow> CSVData; //struct
public:
	enum RESULT
	{
		OK,
		FAIL
	};
	
	/* Reads the CSV contents of a file, writes to result and return OK/FAIL */
	RESULT ReadFile(const std::string& filePath);
	
	/* Gets an entry in the CSV data given the row and column index */
	std::string GetEntry(int rowIndex, int colIndex);
	
	/* Removes all data stored */
	void ClearData(void);
	
private:
	//string vector object that contains all data
	CSVData mData; // The container for all the data
};

#endif /* CSVPARSER_H */
/*****************************************************************************/