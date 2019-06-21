#include <iostream>
#include <iomanip>
#include <cstring>
#include <unistd.h>
#include <cstdlib>
#include <windows.h>
#include "receipt.h"
using namespace std;
struct wash{
int *pntr; // POINTER
int add;
char complete, answ_add;
};
void tags(){
	cout<<"========================================="<<endl;
};
void summery(); // FUNCTION PROTOTYPING
int main(){
wash wash;
wash.pntr= &wash.add; // POINTERS 
*wash.pntr = wash.add; // DECLARATION OF POINTERS 
/*THE PROGRAM START HERE*/
	do // WHEN YOU TYPE "1" AT THE END OF THIS PROGRAM, THE PROGRAM WILL RUN FROM THE MAIN FUNCTION
	{

		cout << "			--------------------------------------------------\n\n";
		cout << "				Welcome To Our  Laundry Service\n" << endl;
		cout << "			--------------------------------------------------\n\n";
		Sleep(600);
		cout<<"please select operation"<<endl
			<<"1. wash"<<endl
			<<"2. dry"<<endl<<endl;
			cin>>operation;
			cout<<endl;
			do{
				if(operation =="1"){
					cout<<"you have choose the washing operation"<<endl<<endl;
					tags();
					break;
				}
				else if (operation =="2"){
					cout<<"you have choose a dryer operation"<<endl<<endl;
					tags();
					break;
				}
				else {
					cout<<"invalid input"<<endl;
					cout<<"try again"<<endl;
					cin>>operation;
				}
			}while(operation !="1" || operation !="2");
    		cout<< "Please Select Machine Size:" << endl
		    << "1. Normal (1kg -  5kg)" << endl
		    << "2. Large  (6kg to 10kg)" << endl << endl;
			cin>> type;
		do
		{
			if (type == "1"){
				Sleep(400);
				cout << endl << "You Have Chosen Normal Sized Machine!" << endl << endl;
				price += 2;
				tags();
				break;
			}
			else if (type == "2"){
				Sleep(400);
				cout << endl << "You Have Chosen Large Sized Machine!" << endl << endl;
				price += 4;
				tags();
				break;
			}
			else{
				Sleep(400);
				cout << "Invalid Input! " << endl
				     << "Please Try again: " << endl;
				cin >> type;
			}
		} while (type != "1" || type != "2");
		Sleep(400);
		if (operation == "1"){
		cout << "\nPlease Select Wash Type:" << endl
		     << "1. Warm" << endl
		     << "2. Hot " << endl
		     << "3. Cold" << endl << endl;
			 cin >> type_wash;
		do
		{
			if (type_wash == "1"){
				price +=3.5;
				Sleep(1 * 1000);
				cout << endl << "Warm Wash Selected!" << endl << endl;
				tags();
				break;
			}
			else if (type_wash == "2"){
				price +=(3.5*2);
				Sleep(1 * 1000);
				cout << endl << "Hot Wash Selected!" << endl << endl;
				tags();
				break;
			}
			else if (type_wash == "3"){
				price +=(3.5*3);
				Sleep(1 * 1000);
				cout << endl << "Cold Wash Selected!" << endl << endl;
				tags();
				break;
			}
			else {
				Sleep(1 * 1000);
				cout << "Invalid Input! " << endl
				     << "Please Try again: " << endl;
				cin >>type_wash;
			}
		} while (type_wash != "1" || type_wash != "2" || type_wash != "3");
			}
		cout << "\nPlease Select Service Time: " << endl
		     << "1. 30 Minutes " << endl
		     << "2. 20 Minutes " << endl
		     << "3. 10 Minutes" << endl << endl;
		cin >> standar_ret;
		do
		{
			if (standar_ret == "1"){
			Sleep(1 * 1000);
				cout << endl << "You've Chosen 30 Min Service Time!" << endl << endl;
				break;
			}
			else if (standar_ret == "2"){
			Sleep(400);
				cout << endl << "You've Chosen 20 Min Service Time!" << endl << endl;
				break;
			}
			else if (standar_ret == "3"){
			Sleep(400);
				cout << endl << "You've Chosen 10 Min Service Time!" << endl << endl;
				break;
			}
			else{
				Sleep(400);
				cout << "Invalid Input! " << endl
				     << "Please Try again: " << endl;
				cin >> standar_ret;
			}
		} while (standar_ret != "1" || standar_ret != "2" || standar_ret != "3");
		Sleep(400);
		if(operation == "1"){
		cout << "\nWould you like to additional drying detergent(Y or N)? ";
					cin >> wash.answ_add;
		}
		if(operation == "1"){

		while (wash.answ_add != 'y' && wash.answ_add != 'Y' && wash.answ_add != 'n' && wash.answ_add != 'N'){
			Sleep(400);
			cout << "Please Input Y or N: ";
			cin >> wash.answ_add;
			}
		}else{
			cout<<"you have choosing a dryer machine that did not need detergent"<<endl;
		}
		if (wash.answ_add == 'y' || wash.answ_add == 'Y'){
			Sleep(400);
			cout << "\nPlease Select Dryer Type:" << endl
			     << "1. Thermal dryer" << endl
			     << "2. Air dryer" << endl << endl;
				 cin >> *wash.pntr; 
			 /* the caling of the pointer that was declare from the beginnig of this program*/
			do
			{
				if (*wash.pntr == 1){
					Sleep(400);
					cout << endl << "Thermal Dryer Selected!" << endl << endl;
					break;
				}
				else if (*wash.pntr == 2){
					Sleep(400);
					cout << endl << "Air Dryer Selected" << endl << endl;
					break;
				}
				else{
					Sleep(400);
					cout << "\nInvalid Input! " << endl
					     << "Please Try again: " << endl;
					cin >> *wash.pntr;
				}
			} while (*wash.pntr != 1 || *wash.pntr != 2);
			price +=*wash.pntr*2;
		}
		else if (wash.answ_add == 'n' || wash.answ_add == 'N'){
			Sleep(400);
			cout << "\nNo Dryer Type Selected!" << endl
			     << "Proceeding..." << endl << endl;
		}
		summery();
		Sleep(600);
		cout << "\nStarting Your Service..." << endl;
		Sleep(400);
		cout << "Service Ongoing..." << endl;
		int x;
		standar_ret = x;
		switch (x){
		case 1: Sleep(900); break;
		case 2: Sleep(900); break;
		case 3: Sleep(900); break;
		}
		cout << "Service Finished!" << endl << endl;
		cout << "==============================" << endl;
		Sleep(400);
		cout << "\nthank You For Using Our Service!" << endl << endl;
		Sleep(400);
		cout << "Please Come Back Again" << endl << endl;
        cout << "==============================" << endl;
        cout <<"Press 1 to use the service again"<<endl;
        cout <<"Else every character will end the session"<<endl;
		cin >>wash.complete;
	} while ( wash.complete == '1');
	return 0;
}
