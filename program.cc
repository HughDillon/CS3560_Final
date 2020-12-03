#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream> 
using namespace std;

int countLine(string input);
int countChar(string input);

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