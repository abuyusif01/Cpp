#include <bits/stdc++.h>

std::string to_binary(int& x) {
    std::string y{};
    while (x > 0) {
        if (x % 2 == 0)
            y.insert(y.begin(), '0');
        else
            y.insert(y.begin(), '1');
        x >>= 1;
    }
    return y;
}

std::string to_compliment(std::string& x) {
    return x;
}

std::string reverse(std::string& x) {
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '0') {
            x[i] = '1';
        } else {
            x[i] = '0';
        }
    }
    return x;
}

int main(int args, char** argv) {}
