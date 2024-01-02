// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     fstream nameFile;
//     char ch; // Use char to read each character of the file

//     nameFile.open("User.txt", ios::in);
//     if (!nameFile)
//     {
//         cout << "File open error!" << endl;
//         return 1;
//     }

//     while (!nameFile.eof()) // Read until the end of the file (EOF)
//     {
//         nameFile.get(ch); // Read each character
//         if (!nameFile.eof()) // Check if the last read operation reached EOF
//         {
//             cout << ch;
//         }
//     }

//     nameFile.close();
//     return 0;
// }


#include<iostream>
#include<fstream>

using namespace std;

int main(){
    fstream fileName;
    char chr;
    fileName.open("User.txt",ios::in);
    

    while(!fileName.eof()){
        fileName.get(chr);
        if(!fileName.eof())
            cout<<chr;
    }
    return 0;
}