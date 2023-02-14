#include "vehicle_project.h"
#include <iostream>
#include <iomanip>
using namespace std;


void demo_function()
{
	char a = 0, b = 0, c = 0, x = 0;

	while (a != x || b != x || c != x)
	{
		cout << "Hello, please choose a vehicle type that you are interested in:  ";
		cin >> x;

		if (x = a) {
			sedan* pSedan = new sedan();
			api_function(pSedan);
		}
		else if (x = b) {
			suv* pSuv = new suv();
			api_function(pSuv);
		}
		else if (x = c) {
			truck* pTruck = new truck();
			api_function(pTruck);
		}
	}
};