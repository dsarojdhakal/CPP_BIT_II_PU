//WAP in C++ to enter id, name and price of cd, Store it in file and read the details from the file.
#include<iostream>
#include<fstream>
using namespace std;

class cdPlayer{
    public:
        int cd_id;
        char cd_name[30];
        float Price;

        void getdata(){
            cout<<"Enter id, name and price of each cd";
            cin>>cd_id>>cd_name>>Price;
        }
};

int main(){
    cdPlayer cd;
    ofstream onFile;
    int cd_num;

    onFile.open("cdplayer.dat", ios::out|ios::binary);
  
    cd.getdata();
    onFile.write((char*)&cd, sizeof(cd));

    return 0;
}