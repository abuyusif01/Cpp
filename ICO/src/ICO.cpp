#include <bits/stdc++.h>
#include "../lib/assign.h"
#include "../lib/shift.h"
#define space(){std::cout<<"\n";}
std::vector<int>fine;
std::vector<int>_add_;

std::string to_binary(int &x){ //no need to comment this, everyone can understand
    std::string y{};
    while(x > 0){
        if(x % 2 == 0) y.insert(y.begin(),'0');
        else y.insert(y.begin(),'1');
        x >>= 1;
    }
    return y;
}

std::vector<int>to_compliment(int& bn1){ //by name you understand it
    int bn2=1;
    int i=0, r=0;
    int sum[20];
    while (bn1 != 0 || bn2 != 0){
       sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
       r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
       bn1 = bn1/10;
       bn2 = bn2/10;
    }
    if (r != 0){
        sum[i++] = r;
    }
    --i;
    while (i >= 0){
        fine.push_back(sum[i--]);
    }
    return fine;
}

std::string reverse(std::string &x){ //same as the rest functions
    for(int i=0; i<(int)x.size(); i++){
        if(x[i]== '0'){
            x[i] = '1';
        }else{
            x[i]='0';
        }
    }
    return x;
}

std::vector<int> add(int bn1, int bn2){
    int i=0, r=0;
    int sum[20];
    while (bn1 != 0 || bn2 != 0){
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10;
        bn2 = bn2 / 10;
    }
    if (r != 0){
        sum[i++] = r;
    }
    --i;
    while (i >= 0){
        _add_.push_back(sum[i--]);
    }
    return _add_;
}

void print(std::vector<char> x){
    for (auto c: x){
        std::cout<<c;
    }
    std::cout<<"\n";
}

int main(int args, char** argv){
    std::vector<char> Q; //right hand side
    std::vector<char> A; //always start with 0 and left hand side
    std::vector<char> M;
    std::string copy_Q; //right hand side
    std::string copy_M;
    char zero = '0';
    std::cout<<"Enter number to calculate: ";
    int num_1,num_2;
    std::cin>>num_1;
    std::cin>>num_2;
    copy_M = to_binary(num_1);
    copy_Q = to_binary(num_2);
    std::cout<<"num_1 in bin: "<<copy_M<<std::endl;
    std::cout<<"num_2 in bin: "<<copy_Q<<std::endl;
    int n = copy_M.size();
    for(int j=0; j<n; j++){
        Q.push_back((copy_Q[j]));
        A.push_back((zero));
        M.push_back((copy_M[j]));
    }
    assign_all(A,Q);
    print(shift___q_1());
    print(shift___q__(__q__));
    print(shift___a__(__a__));
    print(__assign_all__);
}
