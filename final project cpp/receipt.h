#ifndef G_H_INCLUDED
#define G_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <windows.h>
using namespace std;
int token;
string type_wash,type,standar_ret,operation;
float price = 0;
const int typewash = 4;

void summery(){
string typ[typewash]={": Warm",": Hot",": Cold",": dryer"};
	Sleep(2 * 1000);
    cout << "==============================" << endl;
	cout << endl << setw(17) << left << "Machine Type";
	if(type =="1"){
		cout << ": Normal" << endl;
	}
	else if (type =="2"){
		 cout << ": Large" << endl;
 	}
 	if(operation =="1"){
		cout << setw(17) << left << "Wash Type";
	}
	else if(operation =="2"){
		cout << setw(17) << left << "dryer type";
	};
	if (type_wash == "1")	{
		cout << typ[0] << endl;
	}
	else if (type_wash == "2"){
		cout << typ[1] << endl;
	}
	else if (type_wash == "3"){
		cout << *(typ+2) << endl;
	};
	if (operation == "2"){
		cout << *(typ+3) << endl;
	}
	cout << setw(17) << left << "Service Time";
	if (standar_ret == "1"){
		cout << ": 30 Minutes" << endl; 	
	}
	else if(standar_ret == "2"){
		cout << ": 20 Minutes" << endl;
	}
	else if (standar_ret == "3"){
		cout << ": 10 Minutes" << endl;
	}
	cout << setw(17) << left << "Total Price" << ": RM"  << price<< endl ;
	token=price * 2;
	cout << setw(17) << left <<  "Number of Token" << ": "  << token << endl<< endl;
    cout << "==============================" << endl;
}
#endif // G_H_INCLUDED
