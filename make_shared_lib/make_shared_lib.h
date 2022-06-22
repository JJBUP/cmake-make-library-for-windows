//
// Created by ubuntu on 6/22/22.
//

#ifndef TEST_MAKE_LIB_MAKE_SHARED_LIB_H
#define TEST_MAKE_LIB_MAKE_SHARED_LIB_H
#include<iostream>
namespace shared_lib{
    __declspec(dllexport)void out_print();
}
#endif //TEST_MAKE_LIB_MAKE_SHARED_LIB_H
