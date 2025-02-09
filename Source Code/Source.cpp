#include<iostream>
#include<vector>
#include"Coach.h"
#include"Manager.h"
#include"Trainee.h"
using namespace std;
void main() {
	bool IDA1 = false,IDA2=false;
	int n1=4, n2=20;
	string a1[6] = { "Sat", "Sun", "Mon", "Tue", "Wed", "Thu" };
	string a2[6] = { "Fri", "Sun", "Mon", "Tue", "Wed", "Thu" };
	Manager m;
	//Trainee T[20];
	//Coach C[4];
Increment_the_dynamic_array:
	vector <Coach> C(n1);
	vector <Trainee> T(n2);
	/*Trainee* T = new Trainee[n2];
	Coach* C = new Coach[n1];*/

#pragma region Coach Data
	C[0].Set_name("Mohamed");
	C[0].Set_email("mtahjjlkna@gmail.com");
	C[0].Set_age(20);
	C[0].Set_weight(90);
	C[0].Set_lenght(180);
	C[0].Set_phone_number(0115632147);
	C[0].Set_pass("jnji656");//important
	C[0].Set_ID(1);
	C[0].Set_Number_Of_Clients(5);
	C[0].Set_begining_Work(3.0);
	C[0].Set_End_Of_Work(11.0);
	C[0].Set_salary(1500);
	C[0].Set_days(a1);
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	C[1].Set_name("Ahmed");
	C[1].Set_email("mtahjj66611kna@gmail.com");
	C[1].Set_age(20);
	C[1].Set_weight(90);
	C[1].Set_lenght(180);
	C[1].Set_phone_number(0115632147);
	C[1].Set_pass(" ");//important
	C[1].Set_ID(2);
	C[1].Set_Number_Of_Clients(5);
	C[1].Set_begining_Work(3);
	C[1].Set_End_Of_Work(11);
	C[1].Set_salary(1500);
	C[1].Set_days(a1);
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	C[2].Set_name("Ali");
	C[2].Set_email("mtahjjmzwzekna@gmail.com");
	C[2].Set_age(20);
	C[2].Set_weight(90);
	C[2].Set_lenght(180);
	C[2].Set_phone_number(0115632147);
	C[2].Set_pass("9556bihvgh");//important
	C[2].Set_ID(3);
	C[2].Set_Number_Of_Clients(5);
	C[2].Set_begining_Work(3);
	C[2].Set_End_Of_Work(11);
	C[2].Set_salary(1500);
	C[2].Set_days(a2);
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	C[3].Set_name("Amr");
	C[3].Set_email("mtahjjxrdxkna@gmail.com");
	C[3].Set_age(20);
	C[3].Set_weight(90);
	C[3].Set_lenght(180);
	C[3].Set_phone_number(0115632147);
	C[3].Set_pass("szrdxt562");//important
	C[3].Set_ID(4);
	C[3].Set_Number_Of_Clients(5);
	C[3].Set_begining_Work(3);
	C[3].Set_End_Of_Work(11);
	C[3].Set_salary(1500);
	C[3].Set_days(a2);
#pragma endregion
#pragma region Trainee Data
	T[0].Set_name("yahia");
	T[0].Set_email("yahia@yahoo");
	T[0].Set_age(26);
	T[0].Set_weight(86);
	T[0].Set_lenght(156);
	T[0].Set_pass("126126");
	T[0].Set_phone_number(6115666616);
	T[0].Set_ID(1);
	T[0].Set_plane("hard gainer");
	T[0].Set_Coach_name("youssef");
	T[0].Set_subscription_Renewal_Day(7);
	T[0].Set_subscription_Renewal_mounth(1);
	T[0].Set_subscription_Renewal_year(2622);
	T[0].Set_money(456);
	T[0].Set_Required_supplements("creatine");
	//////////////////////////////////////////////////////////////////////
	T[1].Set_name("hishmat");
	T[1].Set_email("hishmat@yahoo");
	T[1].Set_age(26);
	T[1].Set_weight(86);
	T[1].Set_lenght(156);
	T[1].Set_pass("2656");
	T[1].Set_phone_number(6115666616);
	T[1].Set_ID(2);
	T[1].Set_plane("hard gainer");
	T[1].Set_Coach_name("youssef");
	T[1].Set_subscription_Renewal_Day(7);
	T[1].Set_subscription_Renewal_mounth(7);
	T[1].Set_subscription_Renewal_year(2622);
	T[1].Set_money(356);
	T[1].Set_Required_supplements("arginine");
	/////////////////////////////////////////////////////////////////////
	T[2].Set_name("mohamed");
	T[2].Set_email("mohamed@yahoo");
	T[2].Set_age(21);
	T[2].Set_weight(86);
	T[2].Set_lenght(156);
	T[2].Set_pass("546126");
	T[2].Set_phone_number(6115666616);
	T[2].Set_ID(3);
	T[2].Set_plane("hard gainer");
	T[2].Set_Coach_name("youssef");
	T[2].Set_subscription_Renewal_Day(11);
	T[2].Set_subscription_Renewal_mounth(11);
	T[2].Set_subscription_Renewal_year(2622);
	T[2].Set_money(966);
	T[2].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[3].Set_name("hossam");
	T[3].Set_email("hossam@yahoo");
	T[3].Set_age(22);
	T[3].Set_weight(86);
	T[3].Set_lenght(156);
	T[3].Set_pass("16126");
	T[3].Set_phone_number(6115666616);
	T[3].Set_ID(4);
	T[3].Set_plane("hard gainer");
	T[3].Set_Coach_name("youssef");
	T[3].Set_subscription_Renewal_Day(17);
	T[3].Set_subscription_Renewal_mounth(5);
	T[3].Set_subscription_Renewal_year(2622);
	T[3].Set_money(456);
	T[3].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[4].Set_name("gaber");
	T[4].Set_email("gaber@yahoo");
	T[4].Set_age(26);
	T[4].Set_weight(86);
	T[4].Set_lenght(156);
	T[4].Set_pass("126146");
	T[4].Set_phone_number(6115666616);
	T[4].Set_ID(5);
	T[4].Set_plane("hard gainer");
	T[4].Set_Coach_name("youssef");
	T[4].Set_subscription_Renewal_Day(36);
	T[4].Set_subscription_Renewal_mounth(5);
	T[4].Set_subscription_Renewal_year(2622);
	T[4].Set_money(456);
	T[4].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////

	T[5].Set_name("yahia");
	T[5].Set_email("yahia@yahoo");
	T[5].Set_age(26);
	T[5].Set_weight(86);
	T[5].Set_lenght(156);
	T[5].Set_pass("121126");
	T[5].Set_phone_number(6115666616);
	T[5].Set_ID(6);
	T[5].Set_plane("hard gainer");
	T[5].Set_Coach_name("youssef");
	T[5].Set_subscription_Renewal_Day(7);
	T[5].Set_subscription_Renewal_mounth(1);
	T[5].Set_subscription_Renewal_year(2622);
	T[5].Set_money(456);
	T[5].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[6].Set_name("yahia");
	T[6].Set_email("yahia@yahoo");
	T[6].Set_age(26);
	T[6].Set_weight(86);
	T[6].Set_lenght(156);
	T[6].Set_pass("126126");
	T[6].Set_phone_number(6115666616);
	T[6].Set_ID(7);
	T[6].Set_plane("hard gainer");
	T[6].Set_Coach_name("youssef");
	T[6].Set_subscription_Renewal_Day(7);
	T[6].Set_subscription_Renewal_mounth(1);
	T[6].Set_subscription_Renewal_year(2622);
	T[6].Set_money(456);
	T[6].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[7].Set_name("yahia");
	T[7].Set_email("yahia@yahoo");
	T[7].Set_age(27);
	T[7].Set_weight(87);
	T[7].Set_lenght(157);
	T[7].Set_pass("127120");
	T[7].Set_phone_number(7115777717);
	T[7].Set_ID(8);
	T[7].Set_plane("hard gainer");
		T[7].Set_Coach_name("youssef");
	T[7].Set_subscription_Renewal_Day(7);
	T[7].Set_subscription_Renewal_mounth(1);
	T[7].Set_subscription_Renewal_year(2722);
	T[7].Set_money(457);
	T[7].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[8].Set_name("yahia");
	T[8].Set_email("yahia@yahoo");
	T[8].Set_age(28);
	T[8].Set_weight(88);
	T[8].Set_lenght(158);
	T[8].Set_pass("128108");
		T[8].Set_phone_number(8115888818);
	T[8].Set_ID(9);
	T[8].Set_plane("hard gainer");
	T[8].Set_Coach_name("youssef");
	T[8].Set_subscription_Renewal_Day(7);
	T[8].Set_subscription_Renewal_mounth(1);
	T[8].Set_subscription_Renewal_year(2822);
	T[8].Set_money(458);
	T[8].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[9].Set_name("yahia");
	T[9].Set_email("yahia@yahoo");
	T[9].Set_age(29);
	T[9].Set_weight(89);
	T[9].Set_lenght(159);
	T[9].Set_pass("129129");
		T[9].Set_phone_number(9115999919);
	T[9].Set_ID(10);
	T[9].Set_plane("hard gainer");
	T[9].Set_Coach_name("youssef");
	T[9].Set_subscription_Renewal_Day(7);
		T[9].Set_subscription_Renewal_mounth(1);
	T[9].Set_subscription_Renewal_year(2922);
	T[9].Set_money(459);
	T[9].Set_Required_supplements("creatine");
	////////////////////////////////////////////////////////////////////////////////////
	T[10].Set_name("yahia");
	T[10].Set_email("yahia@yahoo");
	T[10].Set_age(2111);
	T[10].Set_weight(8111);
	T[10].Set_lenght(15111);
	T[10].Set_pass("1211112111");
	T[10].Set_phone_number(111111111111111);
	T[10].Set_ID(11);
	T[10].Set_plane("hard gainer");
	T[10].Set_Coach_name("youssef");
	T[10].Set_subscription_Renewal_Day(7);
	T[10].Set_subscription_Renewal_mounth(1);
	T[10].Set_subscription_Renewal_year(211122);
	T[10].Set_money(45111);
	T[10].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[11].Set_name("yahia");
	T[11].Set_email("yahia@yahoo");
	T[11].Set_age(211);
	T[11].Set_weight(811);
	T[11].Set_lenght(1511);
	T[11].Set_pass("12111211");
		T[11].Set_phone_number(1111511111111111);
	T[11].Set_ID(12);
	T[11].Set_plane("hard gainer");
	T[11].Set_Coach_name("youssef");
	T[11].Set_subscription_Renewal_Day(7);
	T[11].Set_subscription_Renewal_mounth(1);
	T[11].Set_subscription_Renewal_year(21122);
	T[11].Set_money(4511);
	T[11].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[12].Set_name("yahia");
	T[12].Set_email("yahia@yahoo");
	T[12].Set_age(212);
	T[12].Set_weight(812);
	T[12].Set_lenght(1512);
	T[12].Set_pass("12121212");
	T[12].Set_phone_number(1211512121212112);
	T[12].Set_ID(13);
	T[12].Set_plane("hard gainer");
	T[12].Set_Coach_name("youssef");
	T[12].Set_subscription_Renewal_Day(7);
	T[12].Set_subscription_Renewal_mounth(1);
	T[12].Set_subscription_Renewal_year(21222);
	T[12].Set_money(4512);
	T[12].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[13].Set_name("yahia");
	T[13].Set_email("yahia@yahoo");
	T[13].Set_age(213);
	T[13].Set_weight(813);
	T[13].Set_lenght(1513);
	T[13].Set_pass("12131213");
	T[13].Set_phone_number(1311513131313113);
	T[13].Set_ID(14);
	T[13].Set_plane("hard gainer");
	T[13].Set_Coach_name("youssef");
	T[13].Set_subscription_Renewal_Day(7);
	T[13].Set_subscription_Renewal_mounth(1);
	T[13].Set_subscription_Renewal_year(21322);
	T[13].Set_money(4513);
	T[13].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[14].Set_name("yahia");
	T[14].Set_email("yahia@yahoo");
	T[14].Set_age(214);
	T[14].Set_weight(814);
	T[14].Set_lenght(1514);
	T[14].Set_pass("12141214");
	T[14].Set_phone_number(1411514141414114);
	T[14].Set_ID(15);
	T[14].Set_plane("hard gainer");
	T[14].Set_Coach_name("youssef");
	T[14].Set_subscription_Renewal_Day(7);
	T[14].Set_subscription_Renewal_mounth(1);
	T[14].Set_subscription_Renewal_year(21422);
	T[14].Set_money(4514);
	T[14].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[15].Set_name("yahia");
	T[15].Set_email("yahia@yahoo");
	T[15].Set_age(215);
	T[15].Set_weight(815);
	T[15].Set_lenght(1515);
	T[15].Set_pass("12151215");
	T[15].Set_phone_number(1511515151515115);
	T[15].Set_ID(16);
	T[15].Set_plane("hard gainer");
	T[15].Set_Coach_name("youssef");
	T[15].Set_subscription_Renewal_Day(7);
	T[15].Set_subscription_Renewal_mounth(1);
	T[15].Set_subscription_Renewal_year(21522);
	T[15].Set_money(4515);
	T[15].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[16].Set_name("yahia");
	T[16].Set_email("yahia@yahoo");
	T[16].Set_age(216);
	T[16].Set_weight(816);
	T[16].Set_lenght(1516);
	T[16].Set_pass("12161216");
	T[16].Set_phone_number(1611516161616116);
	T[16].Set_ID(17);
	T[16].Set_plane("hard gainer");
	T[16].Set_Coach_name("youssef");
	T[16].Set_subscription_Renewal_Day(7);
	T[16].Set_subscription_Renewal_mounth(1);
	T[16].Set_subscription_Renewal_year(21622);
	T[16].Set_money(4516);
	T[16].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[17].Set_name("yahia");
	T[17].Set_email("yahia@yahoo");
	T[17].Set_age(217);
	T[17].Set_weight(817);
	T[17].Set_lenght(1517);
	T[17].Set_pass("12171217");
	T[17].Set_phone_number(1711517171717117);
	T[17].Set_ID(18);
	T[17].Set_plane("hard gainer");
	T[17].Set_Coach_name("youssef");
	T[17].Set_subscription_Renewal_Day(7);
	T[17].Set_subscription_Renewal_mounth(1);
	T[17].Set_subscription_Renewal_year(21722);
	T[17].Set_money(4517);
	T[17].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[18].Set_name("yahia");
	T[18].Set_email("yahia@yahoo");
	T[18].Set_age(218);
	T[18].Set_weight(818);
	T[18].Set_lenght(1518);
	T[18].Set_pass("12181218");
	T[18].Set_phone_number(1811518181818118);
	T[18].Set_ID(19);
	T[18].Set_plane("hard gainer");
	T[18].Set_Coach_name("youssef");
	T[18].Set_subscription_Renewal_Day(7);
	T[18].Set_subscription_Renewal_mounth(1);
	T[18].Set_subscription_Renewal_year(21822);
	T[18].Set_money(4518);
	T[18].Set_Required_supplements("creatine");
	/////////////////////////////////////////////////////////////////////
	T[19].Set_name("yahia");
	T[19].Set_email("yahia@yahoo");
	T[19].Set_age(219);
	T[19].Set_weight(819);
	T[19].Set_lenght(1519);
	T[19].Set_pass("12191219");
	T[19].Set_phone_number(1911519191919119);
	T[19].Set_ID(20);
	T[19].Set_plane("hard gainer");
	T[19].Set_Coach_name("youssef");
	T[19].Set_subscription_Renewal_Day(7);
	T[19].Set_subscription_Renewal_mounth(1);
	T[19].Set_subscription_Renewal_year(21922);
	T[19].Set_money(4519);
	T[19].Set_Required_supplements("creatine");
#pragma endregion
	int c, id;
	bool v = true;
	string name, pass, pass2, r;

	string s, a[6]; int no; float sa;
	bool repeat = true;
	if (IDA1) {
		goto continue_createC;
	}
	if (IDA2) {
		goto continue_createT;
	}
	while (repeat) {
		cout << "*_*_*_*_*_* Welcome *_*_*_*_*_*\n";
		cout << "1.Manager Account\n2.Coach Account\n3.Trainee Account\n4.Exit";
		cout << "\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
		cout << "Enter your choice Please: "; cin >> c;
		switch (c) {
#pragma region Case Manager
		case 1: //Manager
			cout << "please enter your name: "; cin >> name;
			cout << "please enter your password: "; cin >> pass;
			if (name == m.Get_name() && pass == m.Get_pass()) {
				cout << "1.show Coach info\t2.Show trainee info\t3.Recive messages\t4.Change Password\n5.change Name\t6.Unscbscribe Account\t7.create account\nplease enter your choice: "; cin >> c;
				switch (c)
				{
				case 1:
					cout << "Number of the coaches: " << n1 << endl;
					C[(m.show_coach() - 1)].Show();
					break;
				case 2:
					cout << "Number of the trainees: " << n2 << endl;
					T[(m.show_trainee() - 1)].show();
					break;
				case 3:
					cout << "Recive message from:\t1.Coach\t2.trainee\nplease enter your choice: "; cin >> c;
					if (c == 1) {
						cout << "Please enter the coach's ID: "; cin >> id;
						cout << "Coach's Name: " << C[id-1].Get_name() << endl;
						cout << "Coach's ID: " << C[id-1].Get_ID() << endl;
						cout << "Coach's Email: " << C[id-1].Get_email() << endl;
						cout << "Coach's Phone number: " << C[id-1].Get_phone_number() << endl;
						cout << "coach's message: " << C[id-1].Get_message() << endl;
						cout << "*_*_*_*_*_*_*_*_*_*_*_**_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
					}
					else if (c == 2) {
						cout << "Please enter the trainee's ID: "; cin >> id;
						cout << "Trainee's Name: " << T[id-1].Get_name() << endl;
						cout << "Trainee's ID: " << T[id-1].Get_ID() << endl;
						cout << "Trainee's Email: " << T[id-1].Get_email() << endl;
						cout << "Trainee's Phone number: " << T[id-1].Get_phone_number() << endl;
						cout << "Trainee's message: " << T[id-1].Get_message() << endl;
						cout << "*_*_*_*_*_*_*_*_*_*_*_**_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n";
					}
					else {
						cout << "Please enter a valid number......" << endl;
					}
					break;
				case 4:
					cout << "please enter your current password: "; cin >> pass;
					if (pass == m.Get_pass()) {
						cout << "please enter the new password: "; cin >> pass;
						cout << "please enter the new password again: "; cin >> pass2;
						if (pass == pass2) {
							m.Set_pass(pass);
							cout << "Done.........." << endl;
						}
						else {
							cout << "Two passwords are not the same.." << endl;
						}
					}
					else {
						cout << "please enter correct password" << endl;
					}
					break;
				case 5:
					cout << "please enter your current name: "; cin >> name;
					if (name == m.Get_name()) {
						cout << "please enter the new name: "; cin >> name;
						cout << "please enter the new name again: "; cin >> pass2;
						if (name == pass2) {
							m.Set_name(name);
							cout << "Done.........." << endl;
						}
						else {
							cout << "Two names are not the same.." << endl;
						}
					}
					else {
						cout << "please enter correct name" << endl;
					}
					break;
				case 6:
					c = m.unscbscribe();
					switch (c)
					{
						bool y;
					case 1:
						cout << "Please enter the coach's ID: "; cin >> id;
						cout << "Are you sure:  0.No  1.Yes" << endl;
						cout << "please enter your choice: "; cin >> y;
						if (y) {
							cout << "please enter your reason: "; cin >> r;
							id--;
							C.erase(C.begin() + id);
							n1--;
							cout << "Done......." << endl;
						}
						break;
					case 2:
						cout << "Please enter the trainee's ID: "; cin >> id;
						cout << "Are you sure:  0.No  1.Yes" << endl;
						cout << "please enter your choice: "; cin >> y;
						if (y) {
							cout << "please enter your reason: "; cin >> r;
							id--;
							T.erase(T.begin() + id);
							n2--;
							cout << "Done......." << endl;
						}
						break;
					default:
						cout << "please enter a valid number......" << endl;
						break;
					}
					break;
				case 7:
					c = m.creat_account();

					switch (c) {
					case 1:
						n1++;
						IDA1 = true;
						if (IDA1)
						{
							goto Increment_the_dynamic_array;
						}
					continue_createC:
						IDA1 = false;
						C[(n1 - 1)].Set_ID(n1);
						cout << "enter the Coach's name: ";
						cin >> s;
						C[(n1 - 1)].Set_name(s);
						cout << "enter the Coach's email: ";
						cin >> s;
						C[n1 - 1].Set_email(s);
						cout << "enter the coach's password: ";
						cin >> s;
						C[n1 - 1].Set_pass(s);
						cout << "enter the coach's age: ";
						cin >> no;
						C[n1 - 1].Set_age(no);
						cout << "enter the coach's Weight: ";
						cin >> no;
						C[n1 - 1].Set_weight(no);
						cout << "enter the coach's Lenght: ";
						cin >> no;
						C[n1 - 1].Set_lenght(no);
						cout << "enter the coach's Phone number: ";
						cin >> no;
						C[n1 - 1].Set_phone_number(no);
						cout << "enter the coach's number of clients: ";
						cin >> no;
						C[n1 - 1].Set_Number_Of_Clients(no);
						cout << "enter the coach's Salary: ";
						cin >> sa;
						C[n1 - 1].Set_salary(sa);
						cout << "enter the coach's Begining Work: ";
						cin >> sa;
						C[n1 - 1].Set_begining_Work(sa);
						cout << "enter the coach's End Work: ";
						cin >> sa;
						C[n1 - 1].Set_End_Of_Work(sa);
						cout << "enter the coach's days of Work: \n";
						for (int j = 0; j < 6; j++) {
							cin >> a[j];
						}
						C[n1 - 1].Set_days(a);
						cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
						cout << "the data you entered is: " << endl;
						C[n1 - 1].Show();
						break;
					case 2:
						n2++;
						IDA2 = true;
						if (IDA2)
						{
							goto Increment_the_dynamic_array;
						}
					continue_createT:
						IDA2 = false;
						T[(n2 - 1)].Set_ID(n2);
						cout << "enter the trainee's name: ";
						cin >> s;
						T[(n2 - 1)].Set_name(s);
						cout << "enter the trainee's email: ";
						cin >> s;
						T[n2 - 1].Set_email(s);
						cout << "enter the trainee's password: ";
						cin >> s;
						T[n2 - 1].Set_pass(s);
						cout << "enter the trainee's age: ";
						cin >> no;
						T[n2 - 1].Set_age(no);
						cout << "enter the trainee's Weight: ";
						cin >> no;
						T[n2 - 1].Set_weight(no);
						cout << "enter the trainee's Lenght: ";
						cin >> no;
						T[n2 - 1].Set_lenght(no);
						cout << "enter the trainee's Phone number: ";
						cin >> no;
						T[n2 - 1].Set_phone_number(no);
						cout << "enter the trainee's plane: ";
						cin >> s;
						T[n2 - 1].Set_plane(s);
						cout << "enter the trainee's coach: ";
						cin >> s;
						T[n2 - 1].Set_Coach_name(s);
						cout << "enter the trainee's Subscription day: ";
						cin >> no;
						T[n2 - 1].Set_subscription_Renewal_Day(no);
						cout << "enter the trainee's Subscription mounth: ";
						cin >> no;
						T[n2 - 1].Set_subscription_Renewal_mounth(no);
						cout << "enter the trainee's Subscription year: ";
						cin >> no;
						T[n2 - 1].Set_subscription_Renewal_year(no);
						cout << "The money that has been paid = ";
						cin >> sa;
						T[n2 - 1].Set_money(sa);
						cout << "enter the trainee's Required_supplements: ";
						cin >> s;
						T[n2 - 1].Set_Required_supplements(s);
						cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
						cout << "the data you entered is: " << endl;
						T[n2 - 1].show();
						break;
					default:
						cout << "please enter a valid number......" << endl;
						break;
					}
					break;
				default:
					cout << "please enter a valid number......" << endl;
					break;
				}
			}
			else { cout << "please enter correct information" << endl; }
			break;
#pragma endregion
#pragma region Case Coach
		case 2:  //Coach
			cout << "please enter your ID: "; cin >> id;
			cout << "please enter your password: "; cin >> pass;
			for (int i = 0; i < n1; i++) {
				if (id == C[i].Get_ID() && pass == C[i].Get_pass()) {
					cout << "1.Show my info\t2.Send a message to the manager\t3.Change Password\t4.show trainee\nplease enter your choice: "; cin >> c;
					switch (c) {
					case 1:
						C[i].Show();
						break;
					case 2:
						C[i].coach_message();
						break;
					case 3:
						cout << "please enter your current password: "; cin >> pass;
						for (int j = 0; j < n1; j++) {
							if (pass == C[j].Get_pass()) {
								cout << "please enter the new password: "; cin >> pass;
								cout << "please enter the new password again: "; cin >> pass2;
								if (pass == pass2) {
									C[j].Set_pass(pass);
									cout << "Done.........." << endl;
								}
								else {
									cout << "Two passwords are not the same.." << endl;
								}
								v = false;
							}
						}
						if (v) {
							cout << "please enter correct password" << endl;
						}
						break;
					case 4:
						cout << "Number of the trainees: " << n2 << endl;
						T[(C[i].show_trainee() - 1)].show();
						break;
					default:
						cout << "please enter a valid number......" << endl;
						break;
					}
					v = false;
				}
			}
			if (v) {
				cout << "please enter correct information" << endl;
			}
			break;
#pragma endregion
#pragma region Case Trainee
		case 3: // Trainee
			cout << "please enter your ID: "; cin >> id;
			cout << "please enter your password: "; cin >> pass;
			for (int i = 0; i < n1; i++) {
				if (T[i].Get_ID() == id && pass == T[i].Get_pass()) {
					cout << "1.Show my info\t2.Send a message to the manager\t3.Change Password\t4.Unscbscribe\nplease enter your choice: "; cin >> c;
					switch (c) {
					case 1:
						T[i].show();
						break;
					case 2:
						T[i].Trainee_message();
						break;
					case 3:
						cout << "please enter your current password: "; cin >> pass;
						for (int j = 0; j < n1; j++) {
							if (pass == T[j].Get_pass()) {
								cout << "please enter the new password: "; cin >> pass;
								cout << "please enter the new password again: "; cin >> pass2;
								if (pass == pass2) {
									T[j].Set_pass(pass);
									cout << "Done.........." << endl;
								}
								else {
									cout << "Two passwords are not the same.." << endl;
								}
								v = false;
							}
						}
						if (v) {
							cout << "please enter correct password" << endl;
						}
						break;
					case 4:
						bool y;
						cout << "Are you sure:  0.No  1.Yes" << endl;
						cout << "please enter your choice: "; cin >> y;
						if (y) {
							cout << "please enter your reason: "; cin >> r;
							T[i].unscbscribe();
							id--;
							T.erase(T.begin() + id);
							n2--;
							cout << "Done......." << endl;
						}
						break;
					default:
						cout << "please enter a valid number......" << endl;
						break;
					}
					v = false;
				}
			}
			if (v) {
				cout << "please enter correct information" << endl;
			}
			break;
#pragma endregion
		case 4:
			cout << "Thank You......" << endl;
			repeat = false;
			break;
		default:
			cout << "please enter a valid number......" << endl;
			break;
		}
	}
}