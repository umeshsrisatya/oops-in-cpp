#include<bits/stdc++.h>
using namespace std;
#define ll long long;

// abstract class
class AbstractEmployee{
	virtual void AskForPromotion()=0;
	virtual void AskForLeave()=0;
	virtual void AskForBonus()=0;
};

class Employee:AbstractEmployee{
public:
	string Name;
	int Age;
	string Email;
	int Rating ;
	int BehaviourRating;
	int KnowledgeRating;
	Employee(string name,int age,string email,int rating,int behaviourrating,int knowledgerating){
		Name=name;
		Age=age;
		Email=email;
		Rating=rating;
		BehaviourRating=behaviourrating;
		KnowledgeRating=knowledgerating;
	}
	// abstract class overriding (with or without override keyword doesnt makes any major differene)
	void AskForPromotion() override {
		if((Rating+BehaviourRating+KnowledgeRating)>=225){
			cout<<"congratulations you are promoted"<<endl;
		}
		else{
			cout<<"keep working hard for promotion"<<endl;
		}
	}
	void AskForLeave() override {
		if(Rating>=70){
			cout<<"leave granted"<<endl;
		}
		else{
			cout<<"write a mail to me"<<endl;
		}
	}
	void AskForBonus() override {
		if((KnowledgeRating+BehaviourRating)>=165){
			cout<<"your bonus will be credited with in 3 working days"<<endl;
		}else{
			cout<<"you have to keep working hard to get good bonus "<<"\n"<<"always remember bonus rate will be depends on your behaviourrating and knowledgerating"<<endl;
		}
	}
};

int main (){
	// initializing a object/instance
	/*string Name;
	int Age;
	string Email;
	int Rating ;
	int BehaviourRating;
	int KnowledgeRating;
	*/
	Employee umesh=Employee("umesh",20,"umeshsrisatya@gmail.com",100,100,100);
	umesh.AskForPromotion();
	umesh.AskForBonus();
	umesh.AskForLeave();
	return 0;
}