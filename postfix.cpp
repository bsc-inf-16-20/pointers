#include<iostream>

using namespace std;

int main(){

    int x =3;

    // the value of x is increased after the initial value of x is assigned to y
    //hence the value assigned to y is the value of x before it was inr=creased
    int y = x++;

    cout<<"x : " <<y << endl; // y wil be 4
    cout<<" y : " << x << endl; // x will be 3

    return 0;
}