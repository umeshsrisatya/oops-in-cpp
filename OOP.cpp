#include<bits/stdc++.h>
using namespace std;
#define ll long long;

//only developer can view this complex code
// view can see only view simple functionality
class AbstractEmployee{
	virtual void AskForPromotion()=0;
};

// blueprint of the object
class Employee:AbstractEmployee{
private:
	// characters or attributes -variables 
	string Name;
	string Company;
	int Age;
public:
	//getters and setters to encapsulate the 
	//attributes and characterstics from outside of this class
	void setName(string name){//setter
		Name=name;}
	string getName(){//getter
		return Name;}
	void setCompany(string company){//setter
		Company=company;}
	string getCompany(){//getter
		return Company;}
	void setAge(int a){//setter
		Age=a;}
	int getAge(){//getter
		return Age;}
	//constructor is used to construct the object attributes with the paramentes given 
	Employee(string Name1,string Company1,int Age1){
		Name=Name1;
		Company=Company1;
		Age=Age1;
	}
	// behaviour of the class
	void IntroduceYourself(){
		cout<<"my name is:"<<Name<<endl;
		cout<<"my Company is :"<<Company<<endl;
		cout<<"my age is :"<<Age<<endl;
	}
	// abstraction 
	void AskForPromotion() override {
		if(Age>30)
			cout<<"you are promoted"<<endl;
		else
			cout<<"you need to still work had for promotion"<<endl;
	}
	virtual void work(){
		cout<<Name<<" is checking email and backlog, performming tasks"<<endl;
	}
};

// child 1 of employee
class Developer:public Employee{
public:
	string FavourateProgrammingLanguage;
	Developer(string Name1,string Company1,int Age1,string fav):Employee(Name1,Company1,Age1){
		FavourateProgrammingLanguage=fav;	
	}
	void FixBug(){
		cout<<getName()<<" "<<"fixed bug using "<<FavourateProgrammingLanguage<<endl;
	}
	void work(){
		cout<<getName()<<" is developing code in "<<FavourateProgrammingLanguage<<endl;
	}
};

// child2 of employee
class Programmer :public Employee{
private:
	string Pc;
public:
	Programmer(string Name1,string Company1,int Age1,string pc)
	:Employee(Name1,Company1,Age1){
		Pc=pc;
	}
	void Programming(){
		cout<<getName()<<"is doing coding on  "<<Pc<<" in "<<getCompany()<<endl;
	}
	void work(){
		cout<<getName()<<" is writting code in "<<Pc<<endl;
	}
};

int main ()
{
	Developer umeshPrasad=Developer("umeshprasad","delloite",30,"cpp");
	Programmer satya =Programmer("satya","delloite",30,"hp");

	Employee *e1=&umeshPrasad;
	Employee* e2=&satya;

	e1->work();
	e2->work();

	Employee->work();
}