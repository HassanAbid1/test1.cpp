#include <iostream>
using namespace std;
int main(){
   // initializing array
    int numbers[6]={6, 4, 5, 6, 8, 7};

    // declaring a variable for storing sum of all numbers
    int sum=0;

     // using for loop 
     for (int i=0; i<6; i++){
        sum = sum+numbers[i];
     }

     // result
     cout<<"The sum of all numbers present in array is: "<<sum<<endl;
}