
#include <iostream>
using namespace std;
#include <string>
#include <Windows.h>
#include "movielist.h"
#include "Admin22.h"
int options20;
int options;
int opt1;


movielist arr;
Admin22 two;
//int options6;

//int max_storev = 200;

int main(){
    cout <<

           
       """***** WELCOME TO VIDEO STORE!*******\n""";
            

    cout << "\nFor Admin please Enter 1\n";
    cout << "\nFor customer please Enter 2" << endl;

    Sleep(100);
    cin >> options;
   


    if (options == 1) {

      
        cout << "******************************" << endl;
        cout << "***** Welcome Admin *********" << endl;
        cout<< "*****************************" << endl;;
         two.Admin_operations22();
        // two.movies_add();
        //me.Admin_operations();
       

    }

    else if (options == 2) {
        
       cout << "**********************************************" << endl;
         cout<< "\n***** Welcome Customer********************\n" << endl;
          cout<<"********************************************";

                arr.movies_operations();
      //  you.customer_operations();


    }
    
   
       

   
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
