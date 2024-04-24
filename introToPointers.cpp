#include<iostream>

using namespace std;

int main(){

    //declare pointers and initialising it 
    // so that it does not store random address

    int* pPointer = nullptr;

    int integeVar = 5;
    // assign pointer to addresss of object
    pPointer = &integeVar;

    //output the value of integerVar
    cout<<"integerVar: " <<integeVar <<endl;

    //output the address of integerVar
     cout<<" the address of integerVar is: " << &integeVar <<endl;

    //output the address assigned to the pPointer
    cout<<"pPointer: "<<pPointer <<endl;

    //output the address of pPointer
    cout<<"address of pPoinyter" <<&pPointer<<endl;

    return 0;


}