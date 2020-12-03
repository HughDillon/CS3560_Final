/**
*   @file program.cc
*   @brief This program will allow the user to input a .txt file and output the amount of charcters and lines in the file
*   @author Hugh Dillon
*/




#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream> 
using namespace std;

/**
*   @file program.cc
*   @fn countLine
*   @brief This function will output the number of lines in a string
*   @param input A string 
**/
int countLine(string input);
/**
*   @file program.cc
*   @fn countChar
*   @brief This function will
*   @param input A string 
**/
int countChar(string input);

/**
*   @file program.cc
*   @fn main
*   @brief This function will run both functions in the program from a user specified file, or output static numbers for a test
*   @param argc the number of command line arguments
*   @param argv[] the contents of the command line
**/
int main(int argc, char *argv[])
{ 
    fstream input;
    string param;
    if(argc > 1)
    {
        
        string filename = argv[1];
        input.open(filename);
        if(input.fail())
        {
            cout << "Error opening file, try again." << endl;
            return 0;
        }

        char tmpchar;
        input.get(tmpchar);
        while(!input.eof())
        {
            param += tmpchar;
            input.get(tmpchar);
        }
        

        cout << countLine(param) << " Lines." << endl;
        cout << countChar(param) << " Characters." << endl;
        
    }
    else{
        string input1 = "Ohio University";
        string input2 = "Athens";
        cout << countLine(input1) << " Lines." << endl;
        cout << countChar(input2) << " Characters." << endl;

    }
    input.close();
    return 0;
    
}

int countLine(string pName)
{
    int count = 1;
    for(size_t i = 0; i < pName.size(); i++)
    {
        if(pName[i] == '\n')
        {
            count++;
        }
    }
    return count;
     
}

int countChar(string pName)
{
    return pName.size();
}