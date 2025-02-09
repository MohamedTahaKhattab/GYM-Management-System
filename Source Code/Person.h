#pragma once
#include<iostream>
using namespace std;
class Person
{
	string name, email, message, pass;
	float age, weight, lenght;
	int phone_number;
public:
	~Person();
	void Set_name(string name);	string Get_name();
	void Set_email(string email);	string Get_email();
	void Set_message(string message);	string Get_message();
	void Set_age(float age);	float Get_age();
	void Set_weight(float weight);	float Get_weight();
	void Set_lenght(float lenght);	float Get_lenght();
	void Set_pass(string pass);	string Get_pass();
	void Set_phone_number(int phone_number);	int Get_phone_number();
	void messages();
};