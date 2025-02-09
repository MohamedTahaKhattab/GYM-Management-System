#include "Manager.h"
#include "Coach.h"
#include "Trainee.h"
#include<iostream>
using namespace std;
Manager::Manager() {
	name = "Manager";
	pass = "12345";
}
Manager::~Manager() {

}
void Manager::Set_name(string name) {
	this->name = name;
}
string Manager::Get_name() {
	return name;
}
void Manager::Set_pass(string pass) {
	this->pass = pass;
}
string Manager::Get_pass() {
	return pass;
}
int Manager::show_coach() {
	int c;
	cout << "Please enter the coach's ID: "; cin >> c;
	return c;
}
int Manager::show_trainee() {
	int c;
	cout << "Please enter the trainee's ID: "; cin >> c;
	return c;
}
void Manager::Recive_meassage(int s) {
	//if (s == 1) {
	//	cout << "Coach's Name: " << &Coach::Get_name << endl;
	//	cout << "Coach's ID: " << &Coach::Get_ID << endl;
	//	cout << "Coach's Email: " << &Coach::Get_email << endl;
	//	cout << "Coach's Phone number: " << &Coach::Get_phone_number << endl;
	//	cout << "coach's message: " << &Coach::Get_message << endl;
	//	cout << "*_*_*_*_*_*_*_*_*_*_*_**_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
	//}
	//else if (s == 2) {
	//	cout << "Trainee's Name: " << &Trainee::Get_name << endl;
	//	cout << "Trainee's ID: " << &Trainee::Get_ID << endl;
	//	cout << "Trainee's Email: " << &Trainee::Get_email << endl;
	//	cout << "Trainee's Phone number: " << &Trainee::Get_phone_number << endl;
	//	cout << "Trainee's message: " << &Trainee::Get_message << endl;
	//	cout << "*_*_*_*_*_*_*_*_*_*_*_**_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
	//}
	//else {
	//	cout << "Please enter a valid number......" << endl;
	//}
}
int Manager::unscbscribe() {
	int c;
		cout << "1.Delete Coach Account\n2.Delete Trainee Acount\nplease enter your choice: "; cin >> c;
		return c;
}
int Manager::creat_account() {
	int c;
	cout << "1.Create Coach Account\n2.Create Trainee Acount\nplease enter your choice: "; cin >> c;
	return c;
}
