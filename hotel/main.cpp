#include <iostream>
#include <cmath>				/* just coming back to add some comment cuz i share my repository
#include <iomanip>				   with someone So i think he's not gonna understand my shitty code */						
#include "rating.h"
using namespace std;
const int Roomm =3;
string name,state,type,room,rate;
bool x = true;
void for_(int x); 
int price_(int x_);
void display(int e);
int main (){
    int time;
    string typ[Roomm]={": single",": double",":family "};
    cout<<"enter your name \n";
    cin>>name;
    cout<<"enter your time to stay in days NOTE that you cant stay more than 7 days without renewing your payment \n";        
    cin>>time;
// just making it easy so that i dont have calculate more time.. so the user will only stay in just for 7days unless he pay again.. lol
    do{
        do{   
            if(time => 1 && time <8){
                for_(time);
                break;
            }else{
                cout<<"you have chosing an invalid \n";
                cout<<"please try again \n";
                cin>>time;
                for_(time);
            }
        } while (time <0 || time >7);
                cout<<"enter your roomType \n";
                cin>>room;
        do{
            if (room == "single" ){
                cout<<"you have select single room \n";
                break;
            }else if (room == "double"){
                cout<<"you have select double room \n";
                break;    
            }else if(room == "family"){
                cout<<"you have select family room \n";
                break;
            }else{
                cout<<"you have chosing an invalid \n";
                cout<<"please try again \n";
                cin>>room;
            } 
        }while (room != "single" || room != "double" || room != "family");
        cout<<"enter your state \n";
        cin>>state;
        //    price_(time);
        display(time);
         cout<<"would you like to rate our service ? \n";
         cout<<"you will get a special discount by rating our service \n";
         cin>>rate;
         if (rate == "yes"){
             rating_1();
             display(time);
         }else{
              display(time);
              cout<<"thank you \n";
                exit;
         } 
    }while (x != true); 
    return 0;
}   
void for_(int x){
    if (x >0){
        switch (x){
        case 1: cout<<"you have chousen 1 day \n"
                    <<"thank you for coming to our hotel"<<endl;
            break;
        case 2: cout<<"you have chousen 2 day \n"
                   <<"thank you for coming to our hotel"<<endl;
            break;
        case 3: cout<<"you have chousen 3 day \n"
                   <<"thank you for coming to our hotel"<<endl;
            break;
        case 4: cout<<"you have chousen 4 day \n"
                    <<"thank you for coming to our hotel"<<endl;
            break;
        case 5: cout<<"you have chousen 5 day \n"
                    <<"thank you for coming to our hotel"<<endl;
            break;
        case 6: cout<<"you have chousen 6 day \n"
                    <<"thank you for coming to our hotel"<<endl;
            break;
        case 7: cout<<"you have chousen 7 day \n"
                    <<"thank you for coming to our hotel"<<endl;
            break;
        default:
        cout<<"";
            break;
        }
    }
}
int price_(int x=0){
    int time;
    string type;
    if(time ==1 && room == "single"){
        x=3;
    }else if(time ==1 && type == "double"){
        x+=3+1;
    }else if(time ==1 && type == "family"){
        x+=3+2;
    }
    if(time ==2 && type == "single"){
        x+=4;
    }else if(time ==2 && type == "double"){
        x+=4+1;
    }else if(time ==2 && type == "family"){
        x+=4+2;
    }if(time ==3 && type == "single"){
        x+=5;
    }else if(time ==3 && type == "double"){
        x+=5+1;
    }else if(time ==3 && type == "family"){
        x+=5+2;
    }if(time ==4 && type == "single"){
        x+=6;
    }else if(time ==4 && type == "double"){
        x+=6+1;
    }else if(time ==4 && type == "family"){
        x+=6+2;
    }if(time ==5 && type == "single"){
        x+=7;
    }else if(time ==5 && type == "double"){
        x+=7+1;
    }else if(time ==5 && type == "family"){
        x+=7+2;
    }if(time ==6 && type == "single"){
        x+=8;
    }else if(time ==6 && type == "double"){
        x+=8+1;
    }else if(time ==6 && type == "family"){
        x+=8+2;
    }if(time ==7 && type == "single"){
        x+=9;
    }else if(time ==7 && type == "double"){
        x+=9+1;
    }else if(time ==7 && type == "family"){
        x+=9+2;
    }
    return x;
}
void display(int e){
   int price =0;
    string typ[Roomm]={": single",": double",": family"};
    cout << "==============================" << endl;
    cout << setw(17) << left << "Customer Name    : "<<name<< endl;
	cout << setw(17) << left << "Room Type";
    if (rate == "yes"){
    price -=1;
    }
	if (room == "single"){
           price +=3;
		cout << typ[0] << endl;
	}
	else if (room == "double"){
           price +=5;
		cout << typ[1] << endl;
	}
	else if (room == "family"){
          price +=10;
		cout << *(typ+2) << endl;
	}
	cout << setw(17) << left << "Service Time";
    switch (e){
        case 1:
            cout<<": 1 day \n";
              price *=1;
            break;
        case 2:
            cout<<": 2 days \n";
              price *=2;
            break;
        case 3:
            cout<<": 3 days \n";
              price *=3;
            break;
        case 4:
            cout<<": 4 days \n";
              price *=4;
            break;
        case 5:
            cout<<": 5 days \n";
              price *=5;
            break;
        case 6:
            cout<<": 6 days \n";
              price *=6;
            break;
        case 7: 
            cout<<": 7 days \n";
              price *=7;
            break;
        default:
            cout<<"";
            break;
        }
	cout << setw(17) << left << "Total Price" << ": RM"  << price<< endl;
	state;
	cout << setw(17) << left <<  "State" << ": "  << state << endl<< endl;
    cout << "==============================" << endl;
}
