#include "gtest/gtest.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "mysort.cc"
using namespace std;


TEST(MySort, mysort1) {
    vector <int> v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    cout << "Vector inicial:\n";
    for (int i : v ) cout << i << " ";
    mysort(v); // LLAMADA A TU FUNCIÓN
    cout << endl;
    cout << "Vector ordenado:\n";
    for (int i : v ) cout << i << " ";
    cout << endl;
}

TEST(MySort, mysort2) {
    vector <int> v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(-7);
    v.push_back(-1);
    v.push_back(55);
    v.push_back(-673);
    cout << "Vector inicial:\n";
    for (int i : v ) cout << i << " ";
    mysort(v);// LLAMADA A TU FUNCIÓN
    cout << endl;
    cout << "Vector ordenado:\n";
    for (int i : v ) cout << i << " ";
    cout << endl;
}
