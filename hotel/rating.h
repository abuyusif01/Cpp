#ifndef G_H_INCLUDED
#define G_H_INCLUDED
#include <iostream>
#include <cmath>
using namespace std;
const int R =5;
void bar_chart(int A[R]);
void rating_1(){
	cout<<"==================================================="<<endl;
	int A[R], i,j;
	double ave,total=0;
	bar_chart(A);
	for(i=0,j=1;i<R;i++,j++){
		if(A[i]<=5){
		switch (A[i]){
		case 1:
	    cout<<"Question "<<j<<": $\n";break;
	    case 2:
	    cout<<"Question "<<j<<": $$\n";break;
	    case 3:
	    cout<<"Question "<<j<<": $$$\n";break;
	    case 4:
	    cout<<"Question "<<j<<": $$$$\n";break;
	    case 5:
	    cout<<"Question "<<j<<": $$$$$\n";break;	   
    }
     	total+=A[i];
 }
   else{
   	 cout<<"Question "<<j<<" :rating is out of 5 "<<endl;
   }
    }
    ave=total/R;
    cout<<"average is :"<<ave<<endl;
    return;
}
void bar_chart(int A[R]){
	for (int i=0; i<=0;i++){
	cout<<"Enter rating for food quality: "<<endl;;
	cin>>A[0];
	cout<<"Enter rating for location: "<<endl;
	cin>>A[1];
	cout<<"Enter rating for convenience: "<<endl;;
	cin>>A[2];
	cout<<"Enter rating for waiting service: "<<endl;;
	cin>>A[3];
	cout<<"Enter rating for price: "<<endl;;
	cin>>A[4];
}
	return;
}
#endif // G_H_INCLUDED
