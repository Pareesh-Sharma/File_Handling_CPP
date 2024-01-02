#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream nameFile;
    string name;

    nameFile.open("Test.txt", ios::in);
    if (!nameFile)
    {
        cout << "File open error!" << endl;
        return 1;
    }

    while (nameFile>>name)          //>> used
    {
        cout<<name;
    }
    
    nameFile.close();
    return 0;
}
