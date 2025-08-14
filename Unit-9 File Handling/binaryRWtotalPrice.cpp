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
        void display(){
            cout<<"CD ID = "<<cd_id<<endl<<"Name of cd = "<<cd_name<<endl<<"Price = "<<Price<<endl;
        }

        float returnPrice(){
            return Price;
        }
};

int main(){
    cdPlayer cd;
    ofstream onFile;
    int cd_num;
    cout<<"Enter the number of cd : ";
    cin>>cd_num;
    onFile.open("cdplayer.dat", ios::out|ios::binary);
    for(int i=0; i<cd_num; i++){
        cd.getdata();
        onFile.write((char*)&cd, sizeof(cd));
    }
    onFile.close();

    ifstream inFile;
    float total_price = 0;
    inFile.open("cdplayer.dat",ios::binary|ios::in);
    while(inFile.read((char*)&cd, sizeof(cd))){
        cd.display();
    }
    inFile.close();
    inFile.open("cdplayer.dat", ios::binary| ios::in);
    while(inFile.read((char*)&cd, sizeof(cd))){
        total_price = total_price + cd.Price;
    }  
    cout<<"Total price of all the cd is : "<<total_price<<endl;
    inFile.close();
    return 0;
}