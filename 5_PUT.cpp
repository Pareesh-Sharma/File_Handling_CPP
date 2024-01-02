#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream nameFile("J.txt", ios::out);
    char ch; 

    cout<<"Enter and end with Period ''.'' ";

    while(cin>>ch && ch != '.'){
        nameFile.put(ch);                             //PUT used here
    }

    nameFile.close();

    nameFile.open("J.txt",ios::in);

    while (nameFile.get(ch))                         //easy use of GET
    {
        cout<<ch;
    }

    nameFile.close();

    return 0;
}