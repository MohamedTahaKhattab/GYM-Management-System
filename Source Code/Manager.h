#pragma once
#include<iostream>
using namespace std;
class Manager
{
	string name;
	string pass;
public:
	Manager();
	~Manager();
	void Set_name(string name);
	string Get_name();
	void Set_pass(string pass);
	string Get_pass();
	int show_coach();	
	int show_trainee();
	void Recive_meassage(int s);
	int unscbscribe();
	int creat_account();
};

