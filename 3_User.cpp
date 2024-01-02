#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string file;
    fstream obj;
    cout<<"File name ?"<<endl;
    cin>>file;
    obj.open(file,ios::in);
    if(!obj){
        cout<<"Can't be opened / Doesn't exist"<<endl;
        return 0;
    }
    cout<<"Opening..."<<endl;

    while (!obj.eof())
    {
        getline(obj,file);
        cout<<file<<" ";
    }

    obj.close();
    
    return 0;
}