#include <iostream>
using namespace std;

int main(){
    // initializing the array
    int numbers[3];
    //taking user input
    cout<<"Enter 3 numbers: "<<endl;

    //using forloop for storing the numbers in array
    for(int i=0; i<3; i++){
        cin>>numbers[i];
    }
    //using forloop to print even numbers
    for(int i=0; i<3; i+=2){
        if(numbers[i]%2==0){
            cout<<numbers[i]<<" ";
        }
    }
    //else statement
    cout<<"No even numbers";
}