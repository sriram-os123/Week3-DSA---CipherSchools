#include<iostream>
using namespace std;
class vehicle{
	public:
	int number_of_tyres;
	string name;
	int capacity;
	int milleage;
	public:
	void calculatemillaege(){
		cout<<"the milleage is "<<milleage;
	}
}
class schoolBus: public vehicle{
private:
	int number_of_tyres;
	string name;
	int capacity;
	int milleage;

	string schoolname;
	int noOfHolidays;
public:
	void calculatemillaege(){
		cout<<"the milleage is "<<milleage;
	}
	void printnameofschool(){
		cout<<"the name of the truck"<<name;
	}
};
class Car: public vehicle{
private:
	int number_of_tyres;
	string name;
	int capacity;
	

	int number_airbags;
	int ac_consumption;
	public:
	void calculatemillaege(){
		cout<<"the milleage is "<<milleage;
	}	
};
int main(){
	Car a;
	a.calculatemillaege();
	a.capacity=50;
}
