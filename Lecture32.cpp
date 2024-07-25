#include <iostream>
using namespace std;

class Vehicle{
    public:
    int number_typers;
    string name;
    int capacity;
    int mileage;
    
};

class SchoolBus: public Vehicle
{
    public:
    string name;
    
    int number_holidays;
    public:
    
    void printname(){
        cout<<"heleluheah "<<name;
    }
};

class Car: public Vehicle   //  inherited all the data from the base class vehicle
{
    private:
    int number_airbags;
    int ac_consumption;
    
    public:
    void printname(){
        cout<<name;
    }
    // void set_mileage(int mileage){
    //     this->mileage = mileage;
    // }
    // void calculatemileage(){
    //     cout<<"The mileage is "<<mileage;
    // }
    // void number_of_airbags(){
    //     cout<<"the number of air bags is "<<number_airbags;
    // }
};
class redcar : public Car{
    public:
    int four_wheel_drive;
};
int main(){
    
    Car a;
    SchoolBus b;
    
    
    a.name = "Suzuki";
    b.name = "Toyota";
    a.printname();
    cout<<endl;
    b.printname();
    // a.mileage = 50;
    // a.set_mileage(50);
    // a.calculatemileage();
    // a.number_airbags =5;
    // a.number_of_airbags();
   return 0;
}
