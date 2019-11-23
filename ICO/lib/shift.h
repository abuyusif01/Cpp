#include <bits/stdc++.h>
#include "assign.h"
#pragma once

/*so now we need a reference to main
values, thats the point of whole this
reassigning values*/

std::vector<char>& __m__ = __M__;
std::vector<char>& __a__ = __A__;
std::vector<char>& __q__ = __Q__;
std::vector<char>& __q_1 = __Q_1__;
void shift___q_1(){
    __q_1.push_back(__assign_all__.at(__assign_all__.size()-1));
    std::cout<<"value of __q_1 in the function: "<<__q_1.at(0);
}
void shift___m__(){}// this shit is constant.
void shift___q__(std::vector<char> &__q__){
    __q__.clear();
    for(int i=(int)(__assign_all__.size()-1); i>=4; --i){
        __q__.push_back(__assign_all__.at(i-1));
        std::cout<<"fuck at: "<<i<<"\n";
    }
    std::cout<<"value of __q__ after assigning it with shift,";
    for(int j=0;j<4; j++){
        std::cout<<__q__.at(j);
    }
}
void shift___a__(std::vector<char> & __a__){
    __a__.clear(); /*because of the buffer*/
    for (int i=0; i<(int)((__assign_all__.size()/2)-1); i++){
        __a__.push_back(__assign_all__.at(i));
    }
    __a__.insert(__a__.begin(),__assign_all__.at(0));
    std::cout<<"assigning of A after  pushing the values,: ";
    for (int j=0; j<(int)(__a__.size()); j++){
        std::cout<<__a__.at(j);
    }
}










