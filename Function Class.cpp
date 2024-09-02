 //Mohit Singh Rawat
 //23070123086
#include<iostream>
using namespace std;
class Band{
    public:

    string title = "Taal";
    string genre = "Indie";
    string country = "India";
    int year = 1991;
    

    void displayInfo(){
cout<< "Band details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Genre: "<< genre<<endl;
 cout <<"Origin: "<< country<<endl;
 cout <<"Established: "<<year<<endl;
    }
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    } 
