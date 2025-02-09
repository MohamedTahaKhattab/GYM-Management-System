#pragma once
#include"Person.h"
#include<iostream>
using namespace std;
class Coach : public Person
{
	int ID ;
	int Number_Of_Clients;
	float salary;
	string days[6];
	float begining_Work;
	float End_Of_Work;
public:
	Coach();	~Coach();
	void Set_ID(int ID);
	int Get_ID();
	void Set_Number_Of_Clients(int Number_Of_Clients);	int Get_Number_Of_Clients();
	void Set_salary(float salary);	float Get_salary();
	void Set_days(string days[6]);	string Get_days();
	void Set_begining_Work(float begining_Work);	float Get_begining_Work();
	void Set_End_Of_Work(float End_Of_Work);	float Get_End_Of_Work();
	void Show();
	void coach_message();
	int show_trainee();
};

