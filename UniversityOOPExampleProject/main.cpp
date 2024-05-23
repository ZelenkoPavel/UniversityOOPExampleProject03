#include <iostream>
#include "GasStation.h"
#include "Transport.h"
#include "Bus.h"
#include "Car.h"
#include "Truck.h"
#include "Plane.h"

using namespace std;

int main() {

	Car car1{ 45 }, car2{ 50 }, car3{ 55 };
	Bus bus1{ 350 };
	Truck truck1{ 550 }, truck2{ 450 };
	Plane plane1{ 1500 };

	Transport transports[] = { car1, car2, car3, bus1, truck1, truck2, plane1 };

	GasStation station;

	int total = station.calcTotalGas(transports, 7);

	cout << "Total fuel is " << total << ".\n";

	return 0;
}