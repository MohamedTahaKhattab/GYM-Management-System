#include "Trainee.h"
#include"Person.h"
#include<iostream>
using namespace std;
Trainee::Trainee() {
	
}
Trainee::~Trainee() {
	
}
void Trainee::Set_ID(int ID) {
	this->ID = ID;
}
int Trainee::Get_ID() {
	return ID;
}
void Trainee::Set_plane(string plane) {
	this->plane = plane;
}
string Trainee::Get_plane() {
	return plane;
}
void Trainee::Set_Coach_name(string Coach_name) {
	this->Coach_name = Coach_name;
}
string Trainee::Get_Coach_name() {
	return Coach_name;
}
void Trainee::Set_subscription_Renewal_Day(int subscription_Renewal_Day) {
	this->subscription_Renewal_Day = subscription_Renewal_Day;
}
int Trainee::Get_subscription_Renewal_Day() {
	return subscription_Renewal_Day;
}
void Trainee::Set_subscription_Renewal_mounth(int subscription_Renewal_mounth) {
	this->subscription_Renewal_mounth = subscription_Renewal_mounth;
}
int Trainee::Get_subscription_Renewal_mounth() {
	return subscription_Renewal_mounth;
}
void Trainee::Set_subscription_Renewal_year(int subscription_Renewal_year) {
	this->subscription_Renewal_year = subscription_Renewal_year;
}
int Trainee::Get_subscription_Renewal_year() {
	return subscription_Renewal_year;
}
void Trainee::Set_money(float money) {
	this->money = money;
}
float Trainee::Get_money() {
	return money;
}
void Trainee::Set_Required_supplements(string Required_supplements) {
	this->Required_supplements = Required_supplements;
}
string Trainee::Get_Required_supplements() {
	return Required_supplements;
}
void Trainee::unscbscribe() {
	float m = (25 / 100) * money;
	cout << "You will recive: " << (money - m) << "$ only" << endl;
}
void Trainee::show() {
	cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
	cout << "Your ID: " << ID << endl;
	cout << "Your name: " << Person::Get_name() << endl;
	cout << "Your email: " << Person::Get_email() << endl;
	cout << "Your Phone Number: " << Person::Get_phone_number() << endl;
	cout << "Your age: " << Person::Get_age() << endl;
	cout << "Your weight: " << Person::Get_weight() << endl;
	cout << "Your Lenght: " << Person::Get_lenght() << endl;
	cout << "Your plane: " << plane << endl;
	cout << "Your Coach_name: " << Coach_name << endl;
	cout << "Your Subscription start date: " << subscription_Renewal_Day << '/' << subscription_Renewal_mounth << '/' << subscription_Renewal_year << endl;
	cout << "The money that has been paid = " << money << '$' << endl;
	cout << "Your Required_supplements: " << Required_supplements << endl;
	cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
}
void Trainee::Trainee_message() {
	cout << "Your ID: " << ID << endl;
	cout << "Your Name: " << Get_name() << endl;
	cout << "Your Email: " << Get_email() << endl;
	cout << "Your Phone number: " << Get_phone_number() << endl;
	messages();
}
