#include <bits/stdc++.h>

std::vector<int>fine;
std::vector<int>_add_;

std::string to_binary( int &x ){ //no need to comment this, everyone can understand
    std::string y{};
    while( x > 0 ) {
        if( x % 2 == 0 ) y.insert( y.begin( ), '0' );
        else y.insert( y.begin( ), '1' );
        x >>= 1;
    }
    return y;
}

std::vector<int>to_compliment(int& bn1){ //by name you understand it
    int bn2=1;
    int i=0, r=0;
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
        _add_.push_back(sum[i--]);
    }
    return _add_;
}

int main(int args, char** argv){
    int x =11101101;
    std::vector<int>test = to_compliment(x);
    for (int i=0; i<(int)test.size(); i++){
        std::cout<<test.at(i)<<" ";
    }
}
