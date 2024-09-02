 //Mohit Singh Rawat
 //23070123086
#include<iostream>
using namespace std;
class Band{
    public:

    string title = "Hades";
    string sport = "Football";
    string captain = "Mohit";
    int year = 2021;
    

    void displayInfo(){
cout<< "Team details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Sport: "<< sport<<endl;
 cout <<"Captain: "<< captain<<endl;
 cout <<"Established: "<<year<<endl;
    }
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    } 
