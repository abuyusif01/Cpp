//A = Abubakar /*my friend help me to solve on of the assingment so he write this shit*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
int const size=3;
struct capacity{
	int numRoom;
	int numBath;
};                  /* the structures for the houseType and capacity */                         
struct houseType{
	string style;
	int size;
	int price;
	capacity cpty;
};
// function prototype
void houseInsert(houseType house[]);
void houseDisplay(houseType house[]);
void insertinfo (houseType house[]);
int main(){
	houseType house[size];
houseInsert(house);
houseDisplay(house);
insertinfo (house);
return 0;
}
// fuction that will take the input from the user
void houseInsert(houseType house[size]){
	for(int i = 0 ; i < size;i++){
		cout << "Enter style of house : ";
		getline (cin,house[i].style);
		cout << "Enter size of house : ";
		cin >> house[i].size;
		cout << "Enter price of house : ";
		cin>>house[i].price;
		cout << "Enter num of rooms : ";
		cin>>house[i].cpty.numRoom;
		cout << "Enter num of bathrooms : ";
		cin>>house[i].cpty.numBath;
		cout<<endl;
	 cin.ignore();
	}
// fuction that will  sort the values /*this entire fuction my friend help me to do it*/
}void houseDisplay(houseType house[size]){
    int temp1=0, temp3=0, temp4=0, temp5=0;
	string temp2;
	int LargestPrice;
	for(int i=0; i<2; i++){
		LargestPrice= i;
		for (int j=i+1; j<3; j++)
      	if(house[j].size>house[LargestPrice].size)
      	LargestPrice=j;
      	temp1 = house[LargestPrice].size;
      	house[LargestPrice].size =house[i].size;
      	house[i].size = temp1;
      	temp2 = house[LargestPrice].style;
      	house[LargestPrice].style = house[i].style;
      	house[i].style = temp2;
      	temp3 = house[LargestPrice].price;
      	house[LargestPrice].price = house[i].price;
      	house[i].price = temp3;
      	temp4 = house[LargestPrice].cpty.numRoom;
      	house[LargestPrice].cpty.numRoom = house[i].cpty.numRoom;
      	house[i].cpty.numRoom = temp4;
      	temp5 = house[LargestPrice].cpty.numBath;
      	house[LargestPrice].cpty.numBath = house[i].cpty.numBath;
      	house[i].cpty.numBath = temp5;
    }
	cout<<setw(0)<<"HouseType"<<setw(16)<<"Size"<<setw(16)<<"Price"<<setw(16)<<"Room"<<setw(17)<<"Bath"<<setw(20)<<endl;
	cout<<setw(10)<<"-----------"<<setw(16)<<"-------"<<setw(16)<<"--------"<<setw(16)<<"--------"<<setw(17)<<"----------"<<setw(20)<<endl;
	for(int i=0; i<3;++i){
	cout<<setw(10)<<house[i].style<<setw(16)<<house[i].size<<setw(16)<<house[i].price<<setw(16)<<house[i].cpty.numRoom<<setw(17)<<house[i].cpty.numBath<<setw(20)<<endl;
    }cout<<endl;
}
// fuction that will insert the values into a text file
void insertinfo(houseType house[size]){
ofstream Abubakar;
Abubakar.open ("Assignment.txt", ios::app);// open the .txt file
Abubakar<<setw(0)<<"HouseType"<<setw(23)<<"Size"<<setw(23)<<"Price"<<setw(23)<<"Room"<<setw(24)<<"Bath"<<setw(30)<<endl;
Abubakar<<setw(10)<<"-----------"<<setw(23)<<"-------"<<setw(23)<<"--------"<<setw(23)<<"--------"<<setw(24)<<"----------"<<setw(30)<<endl;
    for(int i = 0 ; i < size;i++){
        Abubakar<<setw(0)<<house[i].style<<setw(23)<<house[i].size<<setw(23)<<house[i].price<<setw(23)<<house[i].cpty.numRoom<<setw(24)<<house[i].cpty.numBath<<setw(30)<<endl;
       }cout<<endl;
    Abubakar.close();
}