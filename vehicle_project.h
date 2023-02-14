#ifndef vehicle_project
#define vehicle_project
#include <iostream>
#include <fstream>
using namespace std;

// Abstract Base Class
class vehicle
{
private:
	
public:
	virtual void vehicleType() = 0;

};

// Derived Sedan Class
class sedan : public vehicle
{
private:
	
public:
	void vehicleType()
	{
		cout << "Here's how the following Sedan's compare to eachother. \n";
		cout << endl;

		ifstream file("sedan.txt");// needs txt file
	
	
		string name;
		string name2;
		string cost;
	

		while (file >> name >> name2 >> cost) {
			cout << name << " " << name2 << " has a Starting price of $" << cost  << endl;
		}

	}

};

// Derived SUV Class
class suv : public vehicle
{
private:
	
public:
	void vehicleType()
	{
	
		cout << "Here's how the following Suv's compare to eachother. \n";
		cout << endl;

		ifstream file("suv.txt"); // needs file
	
		string name;
		string name2;
		string cost;
	

		while (file >> name >> name2 >> cost) {
			cout << name << " " << name2 << " has a Starting price of $" << cost  << endl;
		}
	}

};

// Derived Truck Class
class truck : public vehicle
{
private:
	
public:
	void vehicleType()
	{
		cout << "Here's how the following Truck's compare to eachother. \n";
		cout << endl;

		ifstream file("truck.txt"); //needs txt file
	
	
		string name;
		string name2;
		string cost;
	

		while (file >> name >> name2 >> cost) {
			cout << name << " " << name2 << " has a Starting price of $" << cost  << endl;
		}
	}
};

// API Function
void api_function(vehicle* p)		// Do not pass a Derived* (Derived pointer) but only a Base* (Base pointer)
{
	p->vehicleType();
}

#endif