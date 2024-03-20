#include <iostream>
using namespace std;
int main(){
    int numbers[6]={6, 4, 5, 6, 8, 7};
    int sum=0;
     
     for (int i=0; i<6; i++){
        sum = sum+numbers[i];
     }
     cout<<"The sum of all numbers present in array is: "<<sum<<endl;
}