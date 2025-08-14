#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n,b_id;
    string b_name;
    float b_price, total_price = 0;

    cout<<"Enter the total number of books : ";
    cin>>n;

    ofstream OnFile;
    OnFile.open("Records.dat");

    if(OnFile.is_open()){
        cout<<"All the records of books:"<<endl;
        OnFile<<"All the records of books in Records.dat file : "<<endl;
        for(int i = 0; i<n; i++){
            cout<<"Enter details of book: "<<i+1<<endl;
            cout<<"Book ID : ";
            cin>>b_id;
            cout<<"Book name: ";
            cin>>b_name;
            cout<<"Enter price : ";
            cin>>b_price;
            total_price = total_price + b_price;
            OnFile<<"Book ID : "<<b_id<<endl<<"Book name : "<<b_name<<endl<<"Book Price : "<<b_price<<endl;
        }

        cout<<"Total price of "<<n<<" books is : "<<total_price<<endl;
        OnFile<<"Total price of all the books is : "<<total_price<<endl;
    }
    else{
        cerr<<"File is not opened !";
    }
    OnFile.close();

    ifstream inFile;
    inFile.open("Records.dat");

    string line;
    if(inFile.is_open()){
        while(getline(inFile, line)){
            cout<<endl<<line<<endl;
        }
    }
    else{
        cout<<"file is not opened";
    }

    inFile.close();

    return 0;
}