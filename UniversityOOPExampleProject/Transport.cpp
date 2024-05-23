#include "Transport.h"


int Transport::getTank() {
	return tank;
}
void Transport::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}