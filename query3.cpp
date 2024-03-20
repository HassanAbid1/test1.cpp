#include <iostream>
using namespace std;

int main(){
    // initializing the array
    int numbers[6];
    cout<<"Enter 6 numbers: "<<endl;
   
    // declaring the varibale for storing max number from array
    int max=0;

    //using while loop for storing values in array
    int j=0;
    while(j<6){
        cin>>numbers[j];
        j++;
    }

    //using for loop to find max number
   for(int i=1; i<6; i++){
    //conditional statement for max number
    if(numbers[i]>max){
        max=numbers[i];
    }
   }

// result
   cout<<"Greater number is: "<<max<<endl;
}