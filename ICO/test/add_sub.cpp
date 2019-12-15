#include <bits/stdc++.h>
using std::string;
using std::cout;
using std::endl;
#define space std::cout<<"\n"

std::string reverse(std::string & x) { // same as the rest functions
    for (int i = 0; i < (int) x.size(); i++) {
        if (x[i] == '0') {
            x[i] = '1';
        } else {
            x[i] = '0';
        }
    }
    return x;
}

string to_compliment(string &a){ 
    string result = "";
    reverse(a);
    string b ="1";
    int s = 0;
    int i = a.size() - 1, j = b.size() - 1; 
    while (i >= 0 || j >= 0 || s == 1){
        s += ((i >= 0)? a[i] - '0': 0); 
        s += ((j >= 0)? b[j] - '0': 0); 
        result = char(s % 2 + '0') + result; 
        s /= 2; 
        i--; j--; 
    }
    return result;
}
string sub(string &x){
    return x;
}

string add(string &a, string &b){
    string result = "";
    int s = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1){
        s += ((i >= 0)? a[i] - '0': 0);
        s += ((j >= 0)? b[j] - '0': 0);
        result = char(s % 2 + '0') + result;
        s /= 2;
        i--; j--;
    }
    return result;
}

std:: string to_binary(int & x) { // no need to comment this, everyone can understand
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

void check(std::string &x){
    int i =0;
    while((i <4-x.size()+1)&&x.size()< 4){
        x.insert(0, "0");
    };

}

#define echo(x) std::cout<<x
int main(){
    using namespace std;
    cout<<"Select type of operation: ";
    int operation;
    space;
    echo("Option 0. = Addition of binaries\n");
    echo("Option 1. = Subtraction of binaries: ");
    cin>>operation;
    space;
    space;
    if(operation ==0){
        echo("Enter Two Interger Numbers: ");
        string bin_1, bin_2;
        int bin_1_str, bin_2_str;
        cin>>bin_1;
        cin>>bin_2;
        bin_1_str = std::stoi(bin_1);
        bin_2_str = std::stoi(bin_2);
        bin_1 = to_binary(bin_1_str);
        bin_2 = to_binary(bin_2_str);
        check(bin_1);
        check(bin_2);
        echo(bin_1+"\n");
        echo(bin_2);
        echo("num_1 + num_2: "+add(bin_1,bin_2));
    }
    if(operation ==1){
        echo("Enter Two Interger Numbers: ");
        int bin_1, bin_2;
        string bin_1_str, bin_2_str;
        cin>>bin_1_str;
        cin>>bin_2_str;

        bin_1=std::stoi(bin_1_str);
        bin_2=std::stoi(bin_2_str);
        bin_1_str = to_binary(bin_1);

        check(bin_1_str);
        bin_2_str = to_binary(bin_2);
        check(bin_2_str);
        bin_2_str = to_compliment(bin_2_str);
        string result = add(bin_1_str,bin_2_str);
        if(result.size()>4){
            echo("Note! Overflow of last_num");
        }
        echo("num_1 - num_2 is: "+result);
    }
    return 0;
}
