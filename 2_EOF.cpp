#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream nameFile;
    string input;

    nameFile.open("Test.txt", ios::in);
    if (!nameFile)
    {
        cout << "File open error!" << endl;
        return 1;
    }

    while (!nameFile.eof())                     //eof() used
    {
        getline(nameFile,input);
        cout << input << endl;
    }

    nameFile.close();
    return 0;
}
