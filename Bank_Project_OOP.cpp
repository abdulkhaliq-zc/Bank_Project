#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include<cstdio>
using namespace std;
class Bank {
private:

	double balance;
	string id, pass, name, lname, address, phone, pin;
public:
	void menu();
	void BankManagement();
	void AtmManagement();
	void new_user();
	void already_user();
	void deposit();
	void withdraw();
	void transfer();
	void payment();
	void search();
	void edit();
	void del();
	void showRecord();
	void showPayment();
	void userBalance();
	void withAtm();
	void details();

};
void introduction()
{
	cout << "\n\n\n\n\n\t\t\t";
	for (int i = 0; i <= 60; i++)
		cout << "*";
	cout << "\n\t\t\t ";
	for (int i = 0; i <= 58; i++)
		cout << "*";
	cout << "\n\t\t\t  ";
	for (int i = 0; i <= 56; i++)
		cout << "*";
	cout << "\n\n\t\t\t\t\t Bank & ATM Mnangement System\n\t\t\t\t\t\t Project With C++\n\n\t\t\t  ";
	for (int i = 0; i <= 57; i++)
		cout << "*";
	cout << "\n\t\t\t ";
	for (int i = 0; i <= 58; i++)
		cout << "*";
	cout << "\n\t\t\t";
	for (int i = 0; i <= 60; i++)
		cout << "*";
	_getch();
	system("cls");
	cout << "\n\n\n\n\n\t\t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	cout << "\n\t \t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	cout << "\n\n\t\t\t\t Welcome to Our project my Friend";
	cout << "\n\n\t\t\t\t 1.Abdulkhaliq Sarwat Sabry ";
	cout << "\n\n\t\t\t\t 2.Ahmed Mohammed Ebaid  ";
	cout << "\n\n\t\t\t\t 3.Ahmed Yasser Mahfouz\n\t\t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	cout << "\n\t \t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	_getch();
	system("cls");
	cout << "\n\t \t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	cout << "\n\t \t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	cout << "\n\n\t\t\t\t Demo project for c++";
	cout << "\n\n\n\t\t\tUniversity: Zewail University\n\n\t\t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	cout << "\n\t \t";
	for (int i = 1; i <= 60; i++)
		cout << "*";
	_getch();

}
void Bank::menu() {
p:
	system("cls");
	int choice;
	char ch1;
	string pin_ = "1234";
	string passwrd = "12345";
	string passwd, pin, email;
	cout << "\n\n\t\tControl Panel";
	cout << "\n\n1- Bank Management ";
	cout << "\n2- Atm Management ";
	cout << "\n3- Exit";
	cout << "\n\nEnter your choice : ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "\n\n\t\t\t\t\t\t\tlogin to account";
		cout << "\n\n\nE-mail:";
		cin >> email;
		cout << "\n\nPIN code:";
		for (int i = 1; i <= 4; i++) {
			ch1 = _getch();
			pin += ch1;
			cout << "*";
		}
		cout << "\n\nPassword:";
		for (int i = 1; i <= 5; i++) {
			ch1 = _getch();
			passwd += ch1;
			cout << "*";
		}
		if (email == "zewailcity@zc.eg" && pin == pin_ && passwd == passwrd)
		{
			BankManagement();
		}
		else
		{
			cout << "\n\n this data is wrong....";
		}

		BankManagement();
		break;
	case 2:
		AtmManagement();
		break;
	case 3:
		exit(0);
	default:
		cout << "\n\nInvalid value please try again.....";
	}
	_getch();
	goto p;
}
void Bank::BankManagement() {
p:
	system("cls");
	int choice;
	cout << "\n\n\t\t\tBank Management System";
	cout << "\n\n1-New User";
	cout << "\n2-already user";
	cout << "\n3-Deposit money";
	cout << "\n4-Withdraw money";
	cout << "\n5-Transfer money";
	cout << "\n6-Payment option";
	cout << "\n7-Search user record";
	cout << "\n8-Edit user record";
	cout << "\n9-Delete user recoed";
	cout << "\n10-Show all recoed";
	cout << "\n11-Payment all records";
	cout << "\n12-Go back";
	cout << "\n\n Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		new_user();
		break;
	case 2:
		already_user();
		break;
	case 3:
		deposit();
		break;
	case 4:
		withdraw();
		break;
	case 5:
		transfer();
		break;
	case 6:
		payment();
		break;
	case 7:
		search();
		break;
	case 8:
		edit();
		break;
	case 9:
		del();
		break;
	case 10:
		showRecord();
		break;
	case 11:
		showPayment();
		break;
	case 12:
		menu();
	default:
		cout << "\n\n Invalid value please try again.....";
	}
	_getch();
	goto p;
}
void Bank::AtmManagement() {
p:
	system("cls");
	int choice;
	cout << "\n\n\t\t\tATM Management System";
	cout << "\n\n1-User login and check balance";
	cout << "\n2-Withdraw money";
	cout << "\n3-Account details";
	cout << "\n4-Go back";
	cout << "\n\n Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		userBalance();
		break;
	case 2:
		withAtm();
		break;
	case 3:
		details();
		break;
	case 4:
		menu();
	default:
		cout << "\n\n Invalid value please try again.....";
	}
	_getch();
	goto p;
}
void Bank::new_user() {
p:
	system("cls");
	fstream file;
	int p;
	double b = 0.0;
	string n, l, pa, a, ph, i;
	cout << "\n\n\t\t\tAdd new user";
	cout << "\n\n user ID: ";
	cin >> id;
	cout << "\n\nyour Name: ";
	cin >> name;
	cout << "\n\n Last Name: ";
	cin >> lname;
	cout << "\n\nAddress: ";
	cin >> address;
	cout << "\n\n PIN code(5 digit): ";
	cin >> pin;
	cout << "\n\nPassword (5 digit) : ";
	cin >> pass;
	cout << "\n\n phone number: ";
	cin >> phone;
	cout << "\n\n\t\tCurrent balance: ";
	cin >> balance;
	file.open("bank2.txt", ios::in);//open file in input mode
	if (!file) {
		file.open("bank2.txt", ios::in | ios::out);
		file << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
		file.close();

	}
	else
	{
		file >> i >> n >> l >> a >> p >> pa >> ph >> b;
		while (!file.eof())
		{
			if (i == id) {
				cout << "\n\n user ID already exist!..";
				_getch();
				goto p;
			}
			file >> i >> n >> l >> a >> p >> pa >> ph >> b;
		}
		file.close();
		file.open("bank2.txt", ios::in | ios::out);
		file << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
		file.close();

	}
	cout << "\n\n New user account created successfully...!";
}
void Bank::already_user() {

	system("cls");
	fstream file;
	string t_id;
	int found = 0;
	cout << "\n\n\t\t\t Already user account";
	file.open("bank2.txt", ios::in);
	if (!file) {

		cout << "File opening Error!...";
	}
	else
	{
		cout << "\n\n user Id: ";
		cin >> t_id;
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (t_id == id)
			{
				system("cls");
				cout << "\n\n\t\t\t Already user account";
				cout << "\n\n User Id: " << id << "   PIN code: " << pin << "  Password: " << pass;
				found++;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		if (found == 0)
			cout << "\n\n User Id can't found...";
	}
}
void Bank::deposit() {
	fstream file, file1;
	float dep;
	string t_id;
	int found = 0;
	system("cls");
	cout << "\n\n\t\t\tDeposit amount option";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "File opening Erorr!...";

	}
	else
	{
		cout << "\n\n user Id: ";
		cin >> t_id;
		file1.open("bank1.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (t_id == id)
			{
				cout << "\n\n Ammount for deposit: ";
				cin >> dep;
				balance += dep;
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
				found++;
				cout << "\n\n\t\t\t Your ammount " << dep << " Sucessfully deposit...";
			}
			else
			{
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		file1.close();
		remove("bank2.txt");
		rename("bank1.txt", "bank2.txt");

		if (found == 0)
			cout << "\n\n User Id can't found...";
	}
}
void Bank::withdraw() {
	fstream file, file1;
	float with;
	string t_id;
	int found = 0;
	system("cls");
	cout << "\n\n\t\t\tWithdraw amount option";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "File opening Erorr!...";

	}
	else
	{
		cout << "\n\n user Id: ";
		cin >> t_id;
		file1.open("bank1.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (t_id == id)
			{
				cout << "\n\n Ammount for withdraw: ";
				cin >> with;
				if (with <= balance)
				{


					balance -= with;
					file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
					found++;
					cout << "\n\n\t\t\t Your ammount " << with << " Sucessfully Withdraw...";
				}
				else
				{
					file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
					cout << "\n\n\t\t\tYour current balance " << balance << " is less...";
				}
				found++;
			}
			else
			{
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		file1.close();
		remove("bank2.txt");
		rename("bank1.txt", "bank2.txt");

		if (found == 0)
			cout << "\n\n User Id can't found...";
	}
}
void Bank::transfer() {
	fstream file, file1;
	system("cls");
	float ammount;
	int found = 0;
	string s_id, r_id;
	cout << "\n\n\t\t\tPayment transfer option ";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "File opening Erorr!...";

	}
	else
	{
		cout << "\n\n Sender user Id for transction: ";
		cin >> s_id;
		cout << "\n\n Receiver user Id for transction: ";
		cin >> r_id;
		cout << "\n\n Enter transction amount: ";
		cin >> ammount;
		file1.open("bank2.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (s_id == id && ammount >= balance)
				found++;
			else if (r_id == id)
				found++;

			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
	}	file.close();
	if (found == 2) {
		file.open("bank2.txt", ios::in);
		file.open("bank1.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (s_id == id) {
				balance -= ammount;
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			else if (r_id == id)
			{
				balance += ammount;
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			else
			{

				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		file1.close();
		remove("bank2.txt");
		rename("bank1.txt", "bank2.txt");
		cout << "\n\n\t\t\tTransction Sucessfully...";


	}
	else
	{
		cout << "\n\n\t\t\tBoth transction user ID's & balance Invalid!....";
	}
}
void Bank::payment() {
	system("cls");
	fstream file, file1;
	int found = 0;
	string t_id, b_name;
	float amount;
	SYSTEMTIME x;
	cout << "\n\n\t\t\tBills payment option";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "\n\nFile opening Error!...";

	}
	else
	{
		cout << "\n\n Enter user ID: ";
		cin >> t_id;
		cout << "\n\n Bill Name: ";
		cin >> b_name;
		cout << "\n\n Bill amount: ";
		cin >> amount;
		file1.open("bank1.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (t_id == id && amount <= balance)
			{
				balance -= amount;
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
				found++;
			}
			else
			{
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		file1.close();
		remove("bank2.txt");
		rename("bank1.txt", "bank2.txt");
		if (found == 1)
		{
			GetSystemTime(&x);
			file.open("bill.txt", ios::app | ios::out);
			file << t_id << " " << b_name << " " << amount << " " << x.wDay << "/" << x.wMonth << "/" << x.wYear << endl;
			file.close();
			cout << "\n\n\t\t\t" << b_name << " Bill pay sucessfully....";
		}
		else
		{
			cout << "\n\n user ID or amount invalid....";
		}
	}
}
void Bank::search() {
	system("cls");
	fstream file;
	string t_id;
	int found = 0;
	cout << "\n\n\t\t\tSearch user record";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "\n\n File opening Error...";

	}
	else
	{
		cout << "\n\n user ID: ";
		cin >> t_id;
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof()) {
			if (t_id == id)
			{
				system("cls");
				cout << "\n\n\t\t\t\t\t******* Search user record *********\n\n";
				cout << "\n\n\n user ID: " << id << " \t\tName: " << name << "\t\t Last name: " << lname;
				cout << "\n\n\n Address: " << address << "\t\t\t  PIN: " << pin << "\t\t\t  Password: " << pass;
				cout << "\n\n\n Phone No. : " << phone << "\t Current Balance: " << balance;
				found++;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		if (found == 0) {
			cout << "\n\n Can't found User ID!....";
		}

	}

}
void Bank::edit()
{
	system("cls");
	fstream file, file1;
	string t_id, n, l, a, p, ph;
	int found = 0, pi;
	cout << "\n\n\t\t\tEdit user record";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "\n\n File opening Error...";

	}
	else
	{
		cout << "\n\n User ID: ";
		cin >> t_id;
		file1.open("bank1.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof()) {
			if (t_id == id)
			{
				cout << "\n\nyour Name: ";
				cin >> n;
				cout << "\n\n Last Name: ";
				cin >> l;
				cout << "\n\nAddress: ";
				cin >> a;
				cout << "\n\n PIN code(5 digit): ";
				cin >> pi;
				cout << "\n\nPassword: ";
				cin >> p;
				cout << "\n\n phone number: ";
				cin >> ph;
				file1 << " " << id << " " << n << " " << l << " " << a << " " << pi << " " << p << " " << ph << " " << balance << endl;
				cout << "\n\n\t\t\t Record Edit Sucessfully....";
				found++;
			}
			else
			{
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		file1.close();
		remove("bank2.txt");
		rename("bank1.txt", "bank2.txt");
		if (found == 0) {
			cout << "\n\n Can't found User ID!....";
		}
	}
}
void Bank::del() {
	system("cls");
	fstream file, file1;
	string t_id;
	int found = 0;
	cout << "\n\n\t\t\tDelete user record";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "\n\n File opening Error...";

	}
	else
	{
		cout << "\n\n User ID: ";
		cin >> t_id;
		file1.open("bank1.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof()) {
			if (t_id == id)
			{

				cout << "\n\n\t\t\t Record Deleted Sucessfully....";
				found++;
			}
			else
			{
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		file1.close();
		remove("bank2.txt");
		rename("bank1.txt", "bank2.txt");
		if (found == 0) {
			cout << "\n\n Can't found User ID!....";
		}
	}
}
void Bank::showRecord()
{
	system("cls");
	fstream file;
	int found = 0;
	cout << "\n\n\t\t\tShow All User's Records";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "\n\n File opening Erorr...";
	}
	else
	{

		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof()) {
			cout << "\n\n\n User ID: " << id;
			cout << "\n Name : " << name;
			cout << "\n Last Name : " << lname;
			cout << "\n Address : " << address;
			cout << "\n PIN code : " << pin;
			cout << "\n Password : " << pass;
			cout << "\n Phone No. :" << phone;
			cout << "\n Current balance : " << balance;
			cout << "\n\n================================================= ";
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
			found++;
		}
		file.close();
		if (found == 0)
			cout << "\n\n Data Base is Empty....";


	}
}
void Bank::showPayment()
{
	system("cls");
	fstream file;
	int found = 0;
	float amount;
	string c_date;
	cout << "\n\n\t\t\tShow All Bill's Records";
	file.open("bill.txt", ios::in);
	if (!file)
	{
		cout << "\n\n File opening Erorr...";
	}
	else
	{

		file >> id >> name >> amount >> c_date;
		while (!file.eof()) {
			cout << "\n\n\n User ID: " << id;
			cout << "\n Bill Name : " << name;
			cout << "\n Bill Amount : " << amount;
			cout << "\n Date : " << c_date;
			cout << "\n\n================================================= ";
			file >> id >> name >> amount >> c_date;
			found++;
		}
		file.close();
		if (found == 0)
			cout << "\n\n Data Base is Empty....";


	}

}
void Bank::userBalance()
{
	system("cls");
	fstream file;
	int found = 0;
	string t_id, t_pass, t_pin;
	char ch;
	cout << "\n\n\t\t\t User Login & Check Balance";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "\n\n File opening Error...";

	}
	else
	{
		cout << "\n\n User ID :";
		cin >> t_id;
		cout << "\n\n\t\tPIN code :";
		for (int i = 1; i <= 5; i++)
		{
			ch = _getch();
			t_pin += ch;
			cout << "*";
		}
		cout << "\n\n Password :";
		for (int i = 1; i <= 5; i++)
		{
			ch = _getch();
			t_pass += ch;
			cout << "*";
		}
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (file.eof())
		{
			if (t_id == id && t_pass == pass && t_pin == pin)
			{
				cout << "\n\n\t\t\tyour current Balance is : " << balance;
				++found;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		if (found == 0)
			cout << "\n\n\t\t\tUser ID, PIN & Password Invalid...!";
	}

}
void Bank::details()
{
	fstream file;
	float with;
	char ch;
	string t_id, t_pin, t_pass;
	int found = 0;
	system("cls");
	cout << "\n\n\t\t\t Check Details option";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "File opening Erorr!...";

	}
	else
	{
		cout << "\n\n user Id: ";
		cin >> t_id;
		cout << "\n\n\t\tPIN code :";
		for (int i = 1; i <= 5; i++)
		{
			ch = _getch();
			t_pin += ch;
			cout << "*";
		}
		cout << "\n\n Password :";
		for (int i = 1; i <= 5; i++)
		{
			ch = _getch();
			t_pass += ch;
			cout << "*";
		}

		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (t_id == id && t_pass == pass && t_pin == pin)
			{
				system("cls");
				cout << "\n\n\t\t\t Check Details option";
				cout << "\n\n\n User ID: " << id;
				cout << "\n Name : " << name;
				cout << "\n Last Name : " << lname;
				cout << "\n Address : " << address;
				cout << "\n PIN code : " << pin;
				cout << "\n Password : " << pass;
				cout << "\n Phone No. :" << phone;
				cout << "\n Current balance : " << balance;
				found++;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		if (found == 0)
			cout << "\n\n User Id can't found...";
	}

}
void Bank::withAtm()
{
	fstream file, file1;
	float with;
	char ch;
	string t_id, t_pin, t_pass;
	int found = 0;
	system("cls");
	cout << "\n\n\t\t\tWithdraw amount option";
	file.open("bank2.txt", ios::in);
	if (!file)
	{
		cout << "File opening Erorr!...";

	}
	else
	{
		cout << "\n\n user Id: ";
		cin >> t_id;
		cout << "\n\n\t\tPIN code :";
		for (int i = 1; i <= 5; i++)
		{
			ch = _getch();
			t_pin += ch;
			cout << "*";
		}
		cout << "\n\n Password :";
		for (int i = 1; i <= 5; i++)
		{
			ch = _getch();
			t_pass += ch;
			cout << "*";
		}
		file1.open("bank1.txt", ios::app | ios::out);
		file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		while (!file.eof())
		{
			if (t_id == id && t_pass == pass && t_pin == pin)
			{
				cout << "\n\n Ammount for withdraw: ";
				cin >> with;
				if (with <= balance)
				{


					balance -= with;
					file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
					found++;
					cout << "\n\n\t\t\t Your ammount " << with << " Sucessfully Withdraw...";
					cout << "\n\n\t\t\tYour current balance " << balance << " is less...";
				}
				else
				{
					file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
					cout << "\n\n\t\t\tYour current balance " << balance << " is less...";
				}
				found++;
			}
			else
			{
				file1 << " " << id << " " << name << " " << lname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << endl;
			}
			file >> id >> name >> lname >> address >> pin >> pass >> phone >> balance;
		}
		file.close();
		file1.close();
		remove("bank2.txt");
		rename("bank1.txt", "bank2.txt");
		if (found == 0)
			cout << "\n\n User Id can't found...";
	}
}
int main() {
	Bank myobj;
	introduction();
	myobj.menu();
	return 0;
}
