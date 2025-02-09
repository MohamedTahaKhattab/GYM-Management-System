#include "Person.h"
#include<iostream>
using namespace std;
Person::~Person() {

}
void Person::Set_name(string name) {
	this->name = name;
}
string Person::Get_name() {
	return name;
}
void Person::Set_email(string email) {
	this->email = email;
}
string Person::Get_email() {
	return email;
}
void Person::Set_age(float age) {
	this->age = age;
}
float Person::Get_age() {
	return age;
}
void Person::Set_weight(float weight) {
	this->weight = weight;
}
float Person::Get_weight() {
	return weight;
}
void Person::Set_lenght(float lenght) {
	this->lenght = lenght;
}
float Person::Get_lenght() {
	return lenght;
}
void Person::Set_pass(string pass) {
	this->pass = pass;
}
string Person::Get_pass() {
	return pass;
}
void Person::Set_phone_number(int phone_number) {
	this->phone_number = phone_number;
}
int Person::Get_phone_number() {
	return phone_number;
}
void Person::Set_message(string message) {
	this->message = message;
}
string Person::Get_message() {
	return message;
}
void Person::messages() {
	cout << "Please Enter Your message: "; cin >> message;
	cout << "Thank you for your message and we will contact you soon..\n";
}