#include<bits/stdc++.h>
using namespace std;
#define ll long long;
// parent
class Car{
public:
	string Name;
	int TopSpeed;
	string Color;
	Car(string name,int topSpeed,string color){
		Name=name;
		TopSpeed=topSpeed;
		Color=color;
	}
};
// child1
class ElectricCar:public Car{
public:
	string EnergyType;
	ElectricCar(string name,int topSpeed,string color,string energyType)
	:Car(name,topSpeed,color){
		EnergyType=energyType;
	}
	void getName(){
		cout<<Name<<endl;
	}
};
// child2
class FuelCar:public Car{
public:
	string EnergyType;
	FuelCar(string name,int topSpeed,string color,string energyType)
	:Car(name,topSpeed,color){
		EnergyType=energyType;
	}
	void getName(){
		cout<<Name<<endl;
	}
};



int main (){
	ElectricCar tata=ElectricCar("Electron",150,"Blue","Electricity");
	FuelCar hundai=FuelCar("Fronx",190,"White","Petrol");
	tata.getName();
	hundai.getName();
	return 0;
}