#include <iostream>
#include "FireDept.hpp"
#include "PoliceDept.hpp"
#include "People.hpp"
#include "Organization.hpp"

using namespace std;

int main() {

	FireDept dept1;
	PoliceDept dept2;
	string location[5],name;
	char ch;
	int n,i;
	cout<<"Enter how many people you want to subscribe";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout << "Enter Name of the people "<<endl;
		cin >> name;
		cout<<"Enter Subscription Department \n Enter F for FireDept P for PoliceDept and B for both";
		cin>>ch;
		if(ch=='F' || ch =='f')
		{
			People *p1 = new People(name);
			dept1.registerObserver(&(*p1));
		}
		else if(ch=='P' || ch =='p')
		{
			People *p1 = new People(name);
			dept2.registerObserver(&(*p1));
		}
		else if(ch=='B' || ch =='b')
		{
			People *p1 = new People(name);
			dept1.registerObserver(&(*p1));
			dept2.registerObserver(&(*p1));
		}
	}
	cout<<"Enter how many Organization you want to subscribe";
	cin>>n;
	for (i=0;i<n;i++)
	{
		cout << "Enter Organization of the people "<<endl;
		cin >> name;
		cout<<"Enter Subscription Department \n Enter F for FireDept P for PoliceDept and B for both";
		cin>>ch;
		if(ch=='F' || ch =='f')
		{
			Organization *o1 = new Organization(name);
			dept1.registerObserver(&(*o1));
		}
		else if(ch=='P' || ch =='p')
		{
			Organization *o1 = new Organization(name);
			dept2.registerObserver(&(*o1));
		}
		else if(ch=='B' || ch =='b')
		{
			Organization *o1 = new Organization(name);
			dept1.registerObserver(&(*o1));
			dept2.registerObserver(&(*o1));
		}
	}
//	People p2("Mary");
//	People p3("Sam");
//	Organization O1("CSUSM");
//	Organization O2("UCLA");
//	dept1.registerObserver(&p1);
//	dept2.registerObserver(&p2);
//	dept2.registerObserver(&p3);
//	dept1.registerObserver(&O1);
//	dept2.registerObserver(&O1);
//	dept1.registerObserver(&O2);
//	dept2.registerObserver(&O2);

	cout<<"For how many location you want to set Alram";
	cin>>n;
	for(i=0;i<n;i++)
	{	
		cout << "Enter Location "<<endl;
		cin >> location[i];
	}
	for (i=0;i<n;i++)
	{
		dept1.setAlarm(location[i]);
		dept2.setAlarm(location[i]);
	}
	return 0;
}
