#include<iostream>

using namespace std;

int main(){
    int dimension;

    //promptin the user to enter the dimension of the array
    do{
        cout<<"Enter the dimesion of the 2D array: " <<endl;
        cin>> dimension;
        if(dimension > 3){
            cout<<"Dimension exceeds 3. Please enter a valid dimension.\n ";
        } 
    }
    while (dimension > 3);
    //Dynamically allocatte a 2D array of doubles
    double ** dynamicArray = new double *[dimension];
    for (int i =0; i < dimension ; ++i){
        dynamicArray[i] = new double[dimension];
    }
    // assign values to each element of the array
    for (int i =0; i< dimension; ++i){
        for (int j = 0; j < dimension; ++j){
            cout<<"Enter value for element[" << i << "]["<< j <<"]:";
            cin>> dynamicArray[i][j];
        }
    }

    // output the value of each element of the array
    cout<< "Array elements : \n";
    for (int i = 0; i < dimension; ++i){
        for (int j =0; j < dimension; ++j){
        cout<< dynamicArray[i][j] <<" "; 
        }
        cout << endl;
    }

    // free dynamically allocated memory
    for (int i = 0; i < dimension; ++i){
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;
    
    return 0;
}