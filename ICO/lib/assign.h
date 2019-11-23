#include <bits/stdc++.h>
std::vector<char> __assign_all__;
std::vector<int> __shift__;
void assign_all(std::vector<char> Q, std::vector<char> A){
    std::vector<char> local;
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
