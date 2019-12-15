#include <bits/stdc++.h>
#pragma once
void check(std::string &x){
    int i =0;
    while((i <4-x.size()+1)&&x.size()< 4){
        x.insert(0, "0");
    };

}
