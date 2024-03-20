#include <iostream>
using namespace std;
int main(){
    int numbers[]={3, 4, 5, 6, 8, 7};
    int sum=0;
     int size=sizeof(numbers)/sizeof(numbers[0]);
     for (int i=0; i<size; i++){
        sum = sum+numbers[i];
     }
     cout<<"The sum of all numbers present in array is: "<<sum<<endl;
}