#include <iostream>
using namespace std;

int main(){
    //initializing an array
    int numbers[3]={0,2,1};

    //declaring a variable to store zero count
    int zerocount=0;

    //using forloop to find zero in array
    for(int i=0; i<3; i++){
        //using conditional statement
         if(numbers[i]==0){
            zerocount++;
         }
    }

    //reult
    cout<<"Zeros count: "<<zerocount;
}