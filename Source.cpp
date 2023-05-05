#include <iostream>

using namespace std;

class Transport {
public:
	void go() {
		cout << " Can go anywhere" << endl;
	}
};
class Car: public Transport {
public:
	void fast() {
		cout << " Go very fast" << endl;
	}
};
class Truck : public Transport {
public:
	void heavy() {
		cout << " Transport heavy things" << endl;
	}
};
class Pickup : public Transport, public Truck, public Car {
public:
	void Hybrid() {
		cout << " Used by the Americans" << endl;
	}
};
int main()
{
	Pickup hybrid20;
	cout << " Information about PICKUP" << endl;
	hybrid20.Transport::go();
	hybrid20.fast();
	hybrid20.heavy();
	hybrid20.Hybrid();

}