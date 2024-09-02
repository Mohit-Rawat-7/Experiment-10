# Experiment-10
## AIM
To learn about object oriented programing using class and methods.

## Software Used
VS Code

## Problem Statements
1.) Write a c++ program to show car details using class.

2.) Write a c++ program to make a class by using function.

3.) Write a c++ program to calculate are of rectangle using class.

4.) Write a c++ program to make a class by taking inputs from user.

# THEORY
Object-Oriented Programming (OOP):

Object-oriented programming uses objects to model real-world entities. The goal is to combine data and functions in a way that limits access to that data, providing security and organization.

Class:

A class is like a blueprint for creating objects. It defines a new data type that bundles data and functions together.
In C++, a class is a user-defined type with data members (attributes) and member functions (methods).
Class Methods:

Methods are functions defined inside a class. They perform actions using the data stored in the class and define what objects of the class can do.
Public and Private Members:

Public members can be accessed from outside the class, allowing interaction with the class’s data.
Private members can only be accessed within the class itself. This helps protect data and maintains encapsulation, ensuring that sensitive information is kept safe.
In summary, a class is a blueprint that defines what data and actions an object will have, and methods are functions that operate on this data, with public and private access controls to manage how this data is used.

## Program Codes
1) CAR DETAILS:-
~~~ javascript
 //Mohit Singh Rawat
 //23070123086
#include<iostream>
using namespace std;
class Car{
    public:
    string make = "Kia";
    string model = "Seltos";
    int year = 2024;
};
int main()
{
    Car myCar;
    cout<< "Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;

}
~~~

2)FUNCTION CLASS:-
~~~ javascript
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
~~~~

3)CALCULATE AREA USING CLASS(public private variable):-
~~~javascript

 //Mohit Singh Rawat
 //23070123086
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    void setDimensions(double len,double wid){
        length = len;
        width = wid;
    }
    double calculateArea(){
return length*width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(15.0, 16.0);
    cout<< "Area: "<<rect.calculateArea()<<endl;
    return 0;
}
~~~~
4)CLASS USING THE USER INPUT:-
~~~javascript
//Mohit Singh Rawat
//23070123086
#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car make: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
~~~
## PROGRAM OUTPUTS:-
1) <img width="270" alt="Screenshot 2024-09-02 at 11 03 20 AM" src="https://github.com/user-attachments/assets/1d267460-a7d2-4648-b731-91335b13daad">
2) <img width="270" alt="Screenshot 2024-09-02 at 11 05 47 AM" src="https://github.com/user-attachments/assets/78fc14ca-cfe0-4ed5-a105-4dd3ee11db84">
3) <img width="290" alt="Screenshot 2024-09-02 at 11 20 53 AM" src="https://github.com/user-attachments/assets/738b30b3-0913-4e8e-85a8-0bd3a5053d52">
4) <img width="291" alt="Screenshot 2024-09-02 at 11 25 03 AM" src="https://github.com/user-attachments/assets/1308fb17-224d-453c-9917-b444af756174">

## CONCLUSION:-
Object-Oriented Programming (OOP) organizes data and functions into classes, which serve as blueprints for objects. This approach ensures data security and clarity by controlling access through public and private members, making code more organized and easier to manage.






