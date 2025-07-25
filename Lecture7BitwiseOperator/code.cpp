// Bitwise operators
// scope of a variable
// Data type modifiers


#include <iostream>
using namespace std;

int main(){

    // bitwise operators
    // bitwise &
    // take both binary forms and add it, everything is 0 only 1+1=1
    int a = 4;
    int b = 12;
    // cout << (a & b) << endl;

    // bitwise | or
    // take both binary forms and add it, only 0+0=0, everything is 1
    int c = 5;
    int d = 8;
    // cout << (c | d) << endl;

    // bitwise XOR ^
    // if bits are same --> 0
    // if bits are different --> 1

    int x = 5;
    int y = 8;
    // cout << (x ^ y) << endl;

    // bitwise left shift <<
    // shift every bit to left by given number
    // (4 << 1) == 1000 == 8
    // cout << (10 << 1) << endl; // 20
    // cout << (10 << 2) << endl; // 40
    // trick  a * 2 pow b

    // bitwise right shift >>
    // cout << (10 >> 1) << endl; // 5
    // cout << (8 >> 2) << endl; // 2
    // trick a/2powb


    // HW
    // cout << (6 & 10) << endl;
    // cout << (6 | 10) << endl;
    // cout << (6 ^ 10) << endl;
    // cout << (10 << 2) << endl;
    // cout << (10 >> 1) << endl;


    // OPERATOR PRECEDENCE
    // in an expression a+b-c*d, what will executed first?
    // the precedence 
    // cout << (8+10-5*4) << endl; // -2

    // Scope (local vs Global)
    // the reach of the variable
    // scope and global


    // Data Type modifiers
    // can extend of minimize the capacity of the data type
    // the size of data type can vary system to system
    // In some system int can be allocated 2 bytes of storage
    cout << sizeof(int) << endl; // 4 bytes
    cout << sizeof(long int) << endl; // 4 bytes
    cout << sizeof(short int) << endl; // 2 bytes
    cout << sizeof(long long int) << endl; // 8 bytes
    cout << sizeof(signed int) << endl; // 4 bytes, by default it is signed, meaning it can store both +ve & -ve values
    cout << sizeof(unsigned int) << endl; // 4 bytes, can only store +ve values
    
}

// 1 - Figure out if a number is power of 2 (without any loop)
// 2 - WAF to reverse an integer n. if int n = 125, ans = 521