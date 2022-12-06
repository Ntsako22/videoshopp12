#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <Windows.h>
string customer_list[5] = { "Perter", "Arnold","John","",""};

string rent_dates[4] = { "1 Nov 2022","2 Nov 2022","3 Nov 2022" };

string return_dates[3] = { "8 Nov 2022","9 Nov 2022","10 Nov 2022" };

string comedy_list1[4] = { "FUnny guy", "Funny Actions 2","Mr me 3",""};

string Action_list2[4] = { "Action guy 1", "karate kid 2", "Brucelee",""};

string Thriller3[4] = { "Ghost Town 1","Caspper 2","American Gangster",""};

int option1;
int option2;
int option3;
int option4;
int option5;

struct mystruct2 {

	char cust_info11[50];
	char cust_info12[50];
	char cust_info13[50];
	char cust_ID[50];
	int IDgen;

}z[50];

class Admin22
{
public:
	void Admin_operations22() {
	Loop:do {
		//cout << "\n"<<"*****************************************************************" << endl;
		cout << "To View the store current Customer list please enter 1" << endl;
		cout << "\n\nTo Add Customer to the list please enter 2" << endl;
		cout << "\nTo Add Movies to the collection enter 3" << endl;
		cout << "******************************************************************" << endl;
	//	
		//cout << "To Delete customer from the list please enter 4" << endl;

		cin >> option1;

		if (option1 == 1) {
			for (int i = 0; i < 3; i++) {

				cout << i + 1 << "-----" << customer_list[i] << "\n";

			}
			cout << "Select 1 customer for more info" << endl;
			cin >> option3;
			if (option3 == 1) {

				cout << "Here is information about  " << customer_list[0] << endl;
				Sleep(500);

				cout << "customer_ID____05 " << endl;
				cout << "Movies_rented____   " << comedy_list1[1]<<" " << comedy_list1[2]<<"  " << Action_list2[0]<<"  " << endl;
				cout << "Date_of rent_____   " << rent_dates[0] << endl;
				cout << "Return_date______   " << return_dates[0] << endl;
				cout << "Movies_returned____ 0 " << endl;

				Sleep(500);

				cout << "To Delete/Edit about this customer please Enter 3:" << endl;

				cout << "To return to Main Menue Enter 4:" << endl;
				cin >> option4;
				if (option4 == 3) {

					cout << "To Delete this customer please enter 1:" << endl;
					cout << "To Edit this customer info please enter2:" << endl;
					Sleep(300);
					cin >> option5;
					if (option5 == 1) {


						cout << "you deleted customer " << customer_list[0] << " from the list" << endl;
						customer_list[0] = "  ";
						cout << "current customer list" << endl;
						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << customer_list[i] << "\n";
						}


					}if (option5 == 2) {


						cout << "Continue Editing customer information " << endl;

					}

					if (option4 == 4) {

						goto Loop;

					}
				}


			}

			if (option3 == 2) {

				cout << "Here is information about " << customer_list[1] << endl;
				Sleep(500);

				cout << "customer_ID____04" << endl;
				cout << "Movies_rented____" << comedy_list1[0] <<" "<< comedy_list1[1]<<" " << Action_list2[0]<<" " << endl;
				cout << "Date_of rent_____" << rent_dates[1] << endl;
				cout << "Return_date______" << return_dates[1] << endl;
				cout << "Movies_returned____ 2" << endl;
				Sleep(500);

				cout << "\nTo Delete/Edit about this customer please Enter 3: " << endl;

				cout << "To return to Main Menue Enter 4:" << endl;
				cin >> option4;
				if (option4 == 3) {

					cout << "\nTo Delete this customer please enter 1: " << endl;
					cout << "\nTo Edit this customer info please enter2: " << endl;
					Sleep(300);
					cin >> option5;
					if (option5 == 1) {


						cout << "you deleted customer " << customer_list[1] << " from the list" << endl;
						customer_list[1] = "  ";
						cout << "current customer list" << endl;
						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << customer_list[i] << "\n";
						}
					}if (option5 == 2) {


						cout << "Continue Editing customer information" << endl;

					}

					if (option4 == 4) {

						goto Loop;

					}

				}

			}



			if (option3 == 3) {

				cout << "Here is information about " << customer_list[2] << endl;
				Sleep(500);

				cout << "customer_ID____03" << endl;
				cout << "Movies_rented____" << Thriller3[1] << " "<< comedy_list1[0]<<"  " << Action_list2[2]<<"  " << endl;
				cout << "Date_of rent_____" << rent_dates[2] << endl;
				cout << "Return_date______" << return_dates[2] << endl;
				cout << "Movies_returned____ 0" << endl;

				cout << "\nTo Delete/Edit about this customer please Enter 3:" << endl;

				cout << "\nTo return to Main Menue Enter 4:" << endl;
				cin >> option4;
				if (option4 == 3) {

					cout << "To Delete this customer please enter 1:" << endl;
					cout << "To Edit this customer info please enter2:" << endl;
					Sleep(300);
					cin >> option5;
					if (option5 == 1) {


						cout << "you deleted customer " << customer_list[2] << " from the list" << endl;
						customer_list[2] = "  ";
						cout << "current customer list" << endl;
						for (int i = 0; i < 3; i++) {
							cout << i + 1 << " " << customer_list[i] << "\n";
						}
					}if (option5 == 2) {


						cout << "\nContinue Editing customer information " << endl;

					}
					if (option4 == 4) {

						goto Loop;

					}
				}

			}
		}

		if (option1 == 2) {
			for (int i = 0; i < 1; i++) {

				cout << "******************************************************" << endl;

				cout << "Enter customer Name\n" << endl;
				cin >> customer_list[4];
				customer_list[4] = customer_list[4];
				for (int i = 0; i < 4; i++) {
					cout << i + 1 << "---------" << customer_list[i] << endl;
				}
				
				Sleep(100);
				cout << "Enter Customer surname\n" << endl;
				cin >> z[i].cust_info12;
				Sleep(100);
				cout << "Enter customer ID number ";


				cin >> z[i].cust_info13;


			}
			cout << "customer is Added\n" << endl;

			for (int i = 0; i < 1; i++)
			{


				cout << "\n\ncustomer name is: " << customer_list[4] << endl;
				cout << "customer surname is: " << z[i].cust_info12 << endl;
				cout << "customer ID is: " << z[i].cust_info13 << endl;

				Sleep(100);

				cout << "\n\n\ncustomer " <<customer_list[4] << " Is successfuly added to system" << endl;
				
				z[i].IDgen = i + 1;
				cout << "\ncustomer auto ID is: " << i + 1 << endl;



				cout << "****************************************************************************" << endl;
			}
		}

		if (option1 == 3)
		{
			int  presss;
			cout << "Enter genre of the movie" << endl;
			cout << "1--- Commedy" << endl;
			cout << "2---Action" << endl;
			cout << "3---Thriller" << endl;
			cin >> press;
			string movie_name;
			if(press==1){
			cout << "**************************************************************************" << endl;
			cout << "Enter name of commedy movie to add to store collection" << endl;
			cin >> movie_name;
			comedy_list1[3] = movie_name;
			cout << "movie is successfuly added to the list" << endl;
			for (int i = 0; i < 4; i++) {
				cout << i + 1 << "---------" << comedy_list1[i] << endl;
			  }
			}if (press == 2) {
				cout << "**************************************************************************" << endl;
				cout << "Enter name of Action movie to add to store collection" << endl;
				cin >> movie_name;
				Action_list2[3] = movie_name;
				cout << "movie is successfuly added to the list" << endl;
				for (int i = 0; i < 4; i++) {
					cout << i + 1 << "---------" << Action_list2[i] << endl;


				}
			}if (press == 3) {
				cout << "**************************************************************************" << endl;
				cout << "Enter name of commedy movie to add to store collection" << endl;
				cin >> movie_name;
				Thriller[3] = movie_name;
				cout << "movie is successfuly added to the list" << endl;
				for (int i = 0; i < 4; i++) {
					cout << i + 1 << "---------" << Thriller[i] << endl;







				}
			}
		}





	} while (1);

	}
	
};

