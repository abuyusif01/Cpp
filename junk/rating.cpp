#include <iostream>

const int R =5;
void bar_chart(int A[R]){
    for (int i=0; i<=0;i++){
    std::cout<<"Enter rating for food quality: "<<std::endl;;
    std::cin>>A[0];
    std::cout<<"Enter rating for location: "<<std::endl;
    std::cin>>A[1];
    std::cout<<"Enter rating for convenience: "<<std::endl;;
    std::cin>>A[2];
    std::cout<<"Enter rating for waiting service: "<<std::endl;;
    std::cin>>A[3];
    std::cout<<"Enter rating for price: "<<std::endl;;
    std::cin>>A[4];
    }
}

int main (){
    std::cout<<"1821881 == Abubakar yusif \n1719211 == Alpha barry  "<<std::endl;
    std::cout<<"==================================================="<<std::endl;
    int A[R], i,j;
    double total=0;
    bar_chart(A);
    for(i=0,j=1;i<R;i++,j++){
        if(A[i]<=5){
            switch (A[i]){
            case 1:
                std::cout<<"Question "<<j<<": $\n";break;
            case 2:
                std::cout<<"Question "<<j<<": $$\n";break;
            case 3:
                std::cout<<"Question "<<j<<": $$$\n";break;
            case 4:
                std::cout<<"Question "<<j<<": $$$$\n";break;
            case 5:
                std::cout<<"Question "<<j<<": $$$$$\n";break;	   
        }
            total+=A[i];
        }else{
        std::cout<<"Question "<<j<<" :rating is out of 5 "<<std::endl;
        }
    }
    std::cout<<"average is :"<<total/R;
    return 0;
}
