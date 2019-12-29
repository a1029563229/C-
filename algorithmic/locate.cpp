//
// Created by Macxdouble on 2019/12/30.
//

#include "locate.h"

class DataType {};

//int main() {
//
//}

int locate(int A[10], int k) {
    int i = 1;
    while((i <= 10) && (A[i] != k)) i++;
    if (i <= 10) return(i);
    else return (0);
}