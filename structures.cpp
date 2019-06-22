#include <iostream>
using namespace std;
// the function that will return the total
int total(int Qty, double price){
	 return Qty*price;
}
struct car{
	string name;
	int year;
	float price;
	int Qty;
};
int main(){
	int rep;
	cout<<"enter the number of the car :";
	cin>>rep;
	car info[rep];
	for (int i =0; i < rep; i++){
		cout <<"model: ";
		cin.ignore();
		getline(cin,info[i].name);
		cout<<"year: ";
		cin>>info[i].year;
		cout<<"price: ";
		cin>>info[i].price;
		cout<<"Qty: ";
		cin>>info[i].Qty;
	}
	for (int j =0; j<rep; j++){
		cout<<"the informatioon of car "<<j+1<<" is: "<<endl;
		cout<<"the name of the car is : "<<info[j].name<<endl;
		cout<<"the year that the car is made : "<<info[j].year<<endl;
		cout<<"the price of this car :"<<info[j].price<<endl;
		cout<<"the total: "<<total(info[j].Qty,info[j].price)<<endl;
	}
	return 0;
}