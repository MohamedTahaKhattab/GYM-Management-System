#pragma once
#include"Person.h"
#include<iostream>
using namespace std;
class Trainee : public Person
{
    int ID;
	string plane, Coach_name;
	int subscription_Renewal_Day, subscription_Renewal_mounth, subscription_Renewal_year;
	float money;
	string Required_supplements;
public:
	Trainee();
	~Trainee();
	 void Set_ID(int ID);
	 int Get_ID();
	 void Set_plane(string plane);
	 string Get_plane();
	 void Set_Coach_name(string Coach_name);
	 string Get_Coach_name();
	 void Set_subscription_Renewal_Day(int subscription_Renewal_Day);
	 int Get_subscription_Renewal_Day();
	 void Set_subscription_Renewal_mounth(int subscription_Renewal_mounth);
	 int Get_subscription_Renewal_mounth();
	 void Set_subscription_Renewal_year(int subscription_Renewal_year);
	 int Get_subscription_Renewal_year();
	 void Set_money(float money);
	 float Get_money();
	 void Set_Required_supplements(string Required_supplements);
	 string Get_Required_supplements();
	 void unscbscribe();
	 void show();
	 void Trainee_message();
};

