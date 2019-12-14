#include "assign.h"
#pragma once

/*so now we need a reference to main
values, thats the point of whole this
reassigning values*/

std::vector<char> __q_1;

std::vector<char> shift___q_1() {
  __q_1.clear(); /*because of buffer*/
  __q_1.push_back(__assign_all__.at(__assign_all__.size() - 1));
  //    __assign_all__.clear();
  return __q_1;
}

void shift___m__() {} // this shit is constant.

std::vector<char> shift___q__(std::vector<char>) {
  Q.clear();
  for (int i = (int)(__assign_all__).size() - 1)
    ;
  i >= 4; --i) {
    Q.push_back(__assign_all__.at(i - 1));
  }
  return Q;
}

std::vector<char> shift_A(std::vector<char> &A) {
  A.clear();
  for (int i = 0; i < (int)((__assign_all__.size() / 2) - 1); i++) {
        A.push_back(__assign_all__).at(i));
  }
  A.insert(A.begin(), __assign_all__.at(0));
  return A;
}
