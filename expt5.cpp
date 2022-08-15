#include<iostream>
#include<fstream>
using namespace std;


int main(){

    char Give_Info[200];
    ofstream Out_file;
    Out_file.open("Information.txt",ios::out);
    cout<<"Enter information to store it in file.(Not more than 200 characters): \n";
    fgets(Give_Info,200,stdin);
    Out_file<<Give_Info;
    Out_file.close();


    char Get_Info[200];
    ifstream In_file;
    In_file.open("Information.txt",ios::in);
    In_file.getline(Get_Info,200);
    cout<<"\nGiven information is :\n";
    cout<<Get_Info<<endl;
    In_file.close();

    Out_file.open("Information.txt",ios::app);
    cout<<"Enter information to store it in file.(Not more than 200 characters): \n";
    fgets(Give_Info,200,stdin);
    Out_file<<Give_Info;
    Out_file.close();

    In_file.open("Information.txt",ios::in);
    In_file.getline(Get_Info,200);
    cout<<"\nGiven information is :\n";
    cout<<Get_Info<<endl;
    In_file.close();


    // Out_file.open("Information.txt",ios::trunc);
    // cout<<"Enter information to store it in file.(Not more than 200 characters): \n";
    // fgets(Give_Info,200,stdin);
    // Out_file<<Give_Info;
    // Out_file.close();

    // In_file.open("Information.txt",ios::in);
    // In_file.getline(Get_Info,200);
    // cout<<"\nGiven information is :\n";
    // cout<<Get_Info<<endl;
    // In_file.close();

    
    return 0; 
}