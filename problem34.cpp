/*
Solved by Joel Felix
Dept of IT
*/

#include<iostream>
using namespace std;
class Vehicle
{
	public:
		virtual void park()=0;
};
class Motorbike : public Vehicle
{
	static int mb_parking;
	public:
		void park()
		{
			mb_parking++;
		}
		static int mbParking()
		{
			return mb_parking;
		}
};
int Motorbike::mb_parking=0;
class Car : public Vehicle
{
	static int car_parking;
	public:
		virtual void park()
		{
			car_parking++;
		}
		static int carParking()
		{
			return car_parking;
		}
};
int Car::car_parking=0;
class HandicappedCar : public Car
{
	static int hcar_parking;
	public:
		void park()
		{
			hcar_parking++;
		}
		static int hcarParking()
		{
			return hcar_parking;
		}
};
int HandicappedCar::hcar_parking=0;
main()
{
	int v,p;
	Vehicle *veh;
	Motorbike mb;
	Car c;
	HandicappedCar hc;
	cout<<"Enter the vehicle no:\n1.Motor Bike\n2.Car\n3.Handicapped Car\n";
	cin>>v;
	if(v==1)
		veh=&mb;
	else if(v==2)
		veh=&c;
	else
	{
		cout<<"Enter the parking area no:\n1.Car Parking Area\n2.Handicapped Car Parking Area\n";
		cin>>p;
		if(p==1)
			veh=&c;
		else
			veh=&hc;
	}
	veh->park();
	cout<<Motorbike::mbParking()<<"\t"<<Car::carParking()<<"\t"<<HandicappedCar::hcarParking()<<"\n";
}
