#include<bits/stdc++.h>
using namespace std;
#define ll long long;

class Employee{
public:
	string Name;
	Employee(string name){
		Name=name;
	}
	virtual void work(){
		cout<<"Employee class"<<Name<<endl;
	}
};

class Developer:public Employee{
public :
	string WorkkingOn;
	Developer(string name,string workkingOn)
	:Employee(name){
		WorkkingOn=workkingOn;
	}
	void work(){
		cout<<"developer class"<<endl;
	}
};

int main (){
	Developer d=Developer("umesh","coding");
	d.work();
	Employee* e1=&d;
	e1->work();
	}