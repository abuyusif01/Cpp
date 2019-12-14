#include <bits/stdc++.h>
#include "../test/check.h"

/*Some bullshit global vars*/
std::vector < char > Q; // right hand side
std::vector < char > A; // always start with 0 and left hand side
std::vector < char > M;
std::vector < char > __assign_all__;
std::string copy_Q; // right hand side
std::string copy_M;
int n = copy_M.size();
char zero = '0';

std::vector < char > fine;
std::vector < char > _add_;
std::vector < char > & __add__ = _add_;

std::string to_binary(int & x) { // no need to comment this, everyone can understand
    if (x < 0)
        x *= -1; /*for negative numbers*/
    std::string y {};
    while (x > 0) {
        if (x % 2 == 0)
            y.insert(y.begin(), '0');
        else
            y.insert(y.begin(), '1');
        x >>= 1;
    }
    return y;
}

std::vector < char > to_compliment(int & bn1) { // by name you understand it
    int bn2 = 1;
    int i = 0, r = 0;
    int sum[20];
    while (bn1 != 0 || bn2 != 0) {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10;
        bn2 = bn2 / 10;
    }
    if (r != 0) {
        sum[i++] = r;
    }
    --i;
    while (i >= 0) {
        fine.push_back(sum[i--]);
    }
    return fine;
}

std::vector<char> reverse(std::vector<char> & x) { // same as the rest functions
    for (int i = 0; i < (int) x.size(); i++) {
        if (x.at(i) == '0') {
            x.at(i) = '1';
        } else {
            x.at(i) = '0';
        }
    }
    return x;
}

std::vector < char > add(int bn1, int bn2) {
    int i = 0, r = 0;
    int sum[20];
    while (bn1 != 0 || bn2 != 0) {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10;
        bn2 = bn2 / 10;
    }
    if (r != 0) {
        sum[i++] = r;
    }
    --i;
    while (i >= 0) {
        __add__.push_back(sum[i--]);
    }
    return __add__;
}

void print(std::vector < char > x) {
    for (auto c: x) {
        std::cout << c;
    }
    std::cout << "\n";
}

int from_vec_to_int(std::vector < char > &x) {
    std::string str = "";
    for (int i = 0; i < (int) x.size(); i++) {
        str[i] = x.at(i);
    }
    int char_to = std::stoi(str);
    return char_to;
}

int from_str_to_int(std::string &x){
    std::string str ="";
    for(int i =0; i<x.size(); i++){
        str[i] = x[i];
    }
    int str_to = std::stoi(str);
    return str_to;
}

void assign_all(std::vector < char > & A, std::vector < char > & Q, std::vector < char > &__assign_all__) {
    __assign_all__.clear();
    for (int i = 0; i < (int)(A.size()); i++) {
        __assign_all__.push_back(A.at(i));
    }
    for (int j = 0; j < (int)(A.size()); j++) {
        __assign_all__.push_back(Q.at(j));
    }
}

std::vector < char > __q_1;
std::vector < char > shift___q_1(std::vector < char > & __q_,
    std::vector < char > & __assign_all__) {
    __q_1.clear(); /*because of buffer*/
    __q_1.push_back(__assign_all__.at(__assign_all__.size() - 1));

    return __q_1;
}

void shift___m__() {} // this shit is constant.

std::vector < char > shift___q__(std::vector < char > &Q, std::vector < char > & __assign_all__) {
    Q.clear();
    for (int i = (int)(__assign_all__.size() - 1); i >= 4; --i) {
        Q.push_back(__assign_all__.at(i - 1));
    }
    return Q;
}

std::vector < char > shift___a__(std::vector < char > &A, std::vector < char > & __assign_all__) {
    A.clear();
    for (int i = 0; i < (int)((__assign_all__.size() / 2) - 1); i++) {
        A.push_back(__assign_all__.at(i));
    }
    A.insert(A.begin(), __assign_all__.at(0));
    return A;
}

int main(int args, char ** argv) {
    std::cout << "Enter number to calculate: ";
    int num_M, num_Q;
    std::cin >> num_M;
    std::cin >> num_Q;
    copy_M = to_binary(num_M);
    copy_Q = to_binary(num_Q);
    check(copy_M);
    check(copy_Q);
    for (int j = 0; j < 4; j++) {
        Q.push_back((copy_Q[j]));
        A.push_back((zero));
        M.push_back((copy_M[j]));
    }
    if(num_M < 0){
        reverse(Q);
        int temp = from_str_to_int(copy_M);
        to_compliment(temp);
    }
    if(num_Q < 0){

    }
    assign_all(A, Q, __assign_all__);
    print(__assign_all__);
    std::cout << "num_1 in bin: " << copy_M << std::endl;
    std::cout << "num_2 in bin: " << copy_Q << std::endl;

}
