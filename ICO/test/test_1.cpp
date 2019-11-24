#include <iostream>
using namespace std;

int main(){
    for(int i =0; i < 100; i++){
        if(i && (!(i&(i-1)))){
            std::cout<<"the number is: "<<i<<std::endl;
        }
    }
}
