// Creating a program that compares vehicles MPG, seats, space, speed, and price
// created by Jessie R & Elijah V

#include <iostream>
#include <iomanip> 
#include <fstream>
#include <string>
using namespace std;



int main()
{
	
	cout << "Here's how the following trucks compare to eachother. \n";
	cout << endl;

	ifstream file("trucks.txt");
	
	
	string name;
	string name2;
	string cost;
	

	while (file >> name >> name2 >> cost) {
		cout << name << " " << name2 << " has a Starting price of $" << cost  << endl;
	}



}