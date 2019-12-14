#include <bits/stdc++.h>
int main(int argc, char *argv[])
{
    std::string x;
    std::cin>>x;
    int i =0;
    while((i <4-x.size()+1)&&x.size()< 4){
        x.insert(0, "0");
    };
    std::cout<<x;
    return 0;
}
