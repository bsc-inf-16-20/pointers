#include<iostream>
using namespace std;

int main(){
    int x = 3;

    //the value of x is increaased before the vale of x is assigned by y
    // hence the value assigned to y is the value of x after incread
    int y = ++x;

    cout<<"x: " << x << endl; //x will be 4
    cout<<"y: " << y << endl; // y will be 4

    return 0;
}