#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <Windows.h>

int press;
int press2;
int press3;
int press4;
int press5;
int press6;
string movie_type[3] = { "Commedy","Action","Thriller" };

string comedy_list[3] = { "FUnny guy", "Funny Actions 2","Mr me 3" };

string Action_list[3] = { "Action guy 1", "karate kid 2", "Brucelee" };

string Thriller[3] = { "Ghost Town 1","Caspper 2","American Gangster" };

string rent_dates1[4] = { "1 Nov 2022","2 Nov 2022","3 Nov 2022" };

class movielist
{    public:

	void movies_operations() {

	Loop:do {
		//cout << "********************************************************" << endl;
		cout << "\nto view list of movie genres available press 1" << endl;

		cin >> press;
		if (press == 1) {
			for (int i = 0; i < 3; i++) {
				cout << i << "---------" << movie_type[i] << "\n";
			}
		}
		cin >> press2;

		if (press2 == 0) {

			cout << "You have selected comedy" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i+1 << "---------" << comedy_list[i] << "\n";


			}



			cout << "select 1 movie to add to your collection" << endl;
			cin >> press3;
			if (press3 == 1) {

				cout << "you have added " << comedy_list[0] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[0] << endl;

				cout << "To delete/Edit " << comedy_list[0] << " from your selections please enter 3"<<endl;
				cout << "To turn back to movie selections enter 5" << endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << comedy_list[0] << " from your video collections " << endl;
					cout << "Enter 2 to edit " << comedy_list[0] << " from your video collections " << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << comedy_list[0] << " Has been deleted from your video collections" << endl;
						comedy_list[0] = "  ";

						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "" << comedy_list[i] << "\n";
						}

					}
					if (press5 == 2) {

						cout << comedy_list[0] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;
					}
				}
			}




			if (press3 == 2)
			{

				cout << "you have added " << comedy_list[1] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[1] << endl;

				cout << "To delete/Edit " << comedy_list[1] << " from your selections please enter 3 "<<endl;
				cout << "To turn back to movie selections enter 5 "<<endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << comedy_list[1] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << comedy_list[1] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << comedy_list[1] << " Has been deleted from your video collections" << endl;
						comedy_list[1] = "  ";

						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << comedy_list[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << comedy_list[1] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}
				}
			}
			if (press3 == 3)
			{

				cout << "you have added " << comedy_list[2] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[2] << endl;
				cout << "To delete/Edit " << comedy_list[2] << " from your selections please enter 3" <<endl;
				cout << "To turn back to movie selections enter 5" << endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << comedy_list[2] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << comedy_list[2] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << comedy_list[2] << " Has been deleted from your video collections" << endl;
						comedy_list[2] = "  ";

						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << comedy_list[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << comedy_list[2] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}
				}


			}

		}
		if (press2 == 1) {
			cout << "You have selected Action movies" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i+1 << "---------" << Action_list[i] << "\n";


			}
			cout << "select 1 movie per genre" << endl;
			cin >> press3;
			if (press3 == 1) {

				cout << "you have added " << Action_list[0] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[1] << endl;
				cout << "To delete/Edit " << Action_list[0] << " from your selections please enter 3" << endl;
				cout << "To turn back to movie selections enter 5" << endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << Action_list[0] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << Action_list[0] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << Action_list[0] << " Has been deleted from your video collections" << endl;
						Action_list[0] = "  ";
						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << Action_list[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << Action_list[0] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}

				}
			}

			if (press3 == 2)
			{

				cout << "you have added " << Action_list[1] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[2] << endl;
				cout << "To delete/Edit " << Action_list[1] << " from your selections please enter 3" << endl;
				cout << "To turn back to movie selections enter 5" << endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << Action_list[1] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << Action_list[1] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << Action_list[1] << " Has been deleted from your video collections" << endl;
						Action_list[1] = " ";
						
						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << Action_list[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << Action_list[1] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}
				}
			}

			if (press3 == 3)
			{

				cout << "you have added " << Action_list[2] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[1] << endl;
				cout << "To delete/Edit " << Action_list[2] << " from your selections please enter 3" <<endl;
				cout << "To turn back to movie selections enter 5" << endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << Action_list[2] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << Action_list[2] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << Action_list[2] << " Has been deleted from your video collections" << endl;
						Action_list[2] = " ";

						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << Action_list[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << Action_list[2] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}
				}
			}


		}if (press2 == 2) {

			cout << "You have selected Thriller movies" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i+1 << "---------" << Thriller[i] << "\n";


			}
			cout << "select 1 movie per genre" << endl;
			cin >> press3;
			if (press3 == 1) {

				cout << "you have added " << Thriller[0] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[2] << endl;
				cout << "To delete/Edit " << Thriller[0] << " from your selections please enter 3" << endl;
				cout << "To turn back to movie selections enter 5" << endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << Thriller[0] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << Thriller[0] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << Thriller[0] << " Has been deleted from your video collections" << endl;
						Thriller[0] = " ";

						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << Thriller[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << Thriller[0] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}
				}
			}
			if (press3 == 2)
			{

				cout << "you have added " << Thriller[1] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[0] << endl;
				cout << "To delete/Edit " << Thriller[1] << " from your selections please enter 3"<< endl;
				cout << "To turn back to movie selections enter 5" << endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << Thriller[1] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << Thriller[1] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << Thriller[1] << " Has been deleted from your video collections" << endl;
						Thriller[1] = " ";

						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << Thriller[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << Thriller[1] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}
				}
			}
			if (press3 == 3)
			{

				cout << "you have added " << Thriller[2] << " to your video collections Enjoy" << endl;
				Sleep(300);
				cout << " Date: " << rent_dates1[0] << endl;
				cout << "To delete/Edit " << Thriller[2] << " from your selections please enter 3" <<endl;
				cout << "To turn back to movie selections enter 5"<< endl;
				cin >> press4;
				if (press4 == 3) {

					cout << "Enter 1 to delete " << Thriller[2] << " from your video collections" << endl;
					cout << "Enter 2 to edit " << Thriller[2] << " from your video collections" << endl;
					cin >> press5;
					if (press5 == 1) {

						cout << Thriller[2] << " Has been deleted from your video collections" << endl;
						Thriller[2] = " ";

						for (int i = 0; i < 3; i++) {
							cout << i + 1 << "---------" << Thriller[i] << "\n";
						}
					}
					if (press5 == 2) {

						cout << Thriller[2] << " Has been Edited from your video collections" << endl;

					}if (press4 == 5) {


						goto Loop;

					}
				}
			}




		}



	}while (1);
}
	
	
	
};





