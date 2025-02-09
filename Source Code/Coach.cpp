#include "Coach.h"
#include"Person.h"
#include<iostream>
using namespace std;
Coach::Coach() {
	
}
Coach::~Coach() {

}
void Coach::Set_ID(int ID) {
	this->ID = ID;
}
int Coach::Get_ID() {
	return ID;
}
void Coach::Set_Number_Of_Clients(int Number_Of_Clients) {
	this->Number_Of_Clients = Number_Of_Clients;
}
int Coach::Get_Number_Of_Clients() {
	return Number_Of_Clients;
}
void Coach::Set_salary(float salary) {
	this->salary = salary;
}
float Coach::Get_salary() {
	return salary;
}
void Coach::Set_days(string days[6]) {
	for (int i = 0; i < 6; i++) {
		this->days[i] = days[i];
	}
}
string Coach::Get_days() {
	 	for (int i = 0; i < 6; i++) {
		 return days[i];
		};
}
void Coach::Set_begining_Work(float begining_Work) {
	this->begining_Work = begining_Work;
}
float Coach::Get_begining_Work() {
	return begining_Work;
}
void Coach::Set_End_Of_Work(float End_Of_Work) {
	this->End_Of_Work = End_Of_Work;
}
float Coach::Get_End_Of_Work() {
	return End_Of_Work;
}
void Coach::Show() {
	cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
	cout << "Your ID: " << ID << endl;
	cout << "Your name: " << Person::Get_name() << endl;
	cout << "Your email: " << Person::Get_email() << endl;
	cout << "Your Phone Number: " << Person::Get_phone_number() << endl;
	cout << "Your age: " << Person::Get_age() << endl;
	cout << "Your weight: " << Person::Get_weight() << endl;
	cout << "Your Lenght: " << Person::Get_lenght() << endl;
	cout << "Your salary: " << salary << "$" << endl;
	cout << "Your clients number: " << Number_Of_Clients << endl;
	cout << "Your working hours from: " << begining_Work << " to: " << End_Of_Work << endl;
	cout << "Your working days are: " << days[0];
	for (int i = 0; i < 5; i++) {
		cout << ',' << days[i + 1];
	}
	cout << endl;
	cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
}
void Coach::coach_message() {
	cout << "Your ID: " << ID << endl;
	cout << "Your Name: " << Get_name() << endl;
	cout << "Your Email: " << Get_email() << endl;
	cout << "Your Phone number: " << Get_phone_number() << endl;
	messages();
}
int Coach::show_trainee() {
	int c;
	cout << "Please enter the trainee's ID: "; cin >> c;
	return c;
}