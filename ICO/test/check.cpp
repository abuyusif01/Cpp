#include <bits/stdc++.h>
int main(int argc, char *argv[])
{
    std::string x;
    std::cin>>x;
    const int size_of_x = x.size();
    if (x.size() < 4){
        for (int i = 0; i<x.size()-4; i++){
            x.push_back('0');
        }
    }
    for(int i = size_of_x; i<4;i++){
        std::cout<<x[i]<<std::endl;
    }
    return 0;
}
