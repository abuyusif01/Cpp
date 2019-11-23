#include <bits/stdc++.h>
#include "shift.h"
#pragma once
std::vector<char> __Q__,__M__,__A__,__Q_1__;
std::vector<char> __assign_all__;
void assign_all(std::vector<char> Q, std::vector<char> A){
    std::vector<char> local;

    __Q__ = Q; /*ok it start becoming confusing lol,*/
    __A__ = A; /*literally assigning the global to local,*/

    for (int i=0; i<(int)(A.size()); i++){
        local.push_back(Q.at(i));
    }
    for (int j=0; j<(int)(A.size()); j++){
        local.push_back(A.at(j));
    }
    __assign_all__ = local;
    for (int k =0; k<(int)(__assign_all__.size()); k++){
    std::cout<<__assign_all__.at(k);
    }
}

