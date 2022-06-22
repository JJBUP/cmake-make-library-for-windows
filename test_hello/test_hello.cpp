//
// Created by ubuntu on 6/22/22.
//
#include <make_static_lib.h>
#include <make_shared_lib.h>
#include <iostream>
int main(){
    static_lib::out_print();
    shared_lib::out_print();
    return 0;
}
