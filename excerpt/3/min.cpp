//
// Created by Macxdouble on 2020/1/2.
//

#include "min.h"
#include "iostream"
using namespace std;
template <typename T>
T min(T a, T b) {
    return a < b ? a : b;
}
//int main() {
//    cout << std::min(1, 10) << "\t"
//    << std::min(2.3, 4.5) << "\t"
//    << std::min('a', 'g') << "\t"
//    << std::min("ABC", "ABD") << endl;
//    return 0;
//}