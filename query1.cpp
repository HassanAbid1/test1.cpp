#include <iostream>
using namespace std;

int main(){
//initializing an array
int numbers[10];
   // for saving 10 numbers in array using for loop
    cout<<"Enter 10 numbers: "<<endl;
    for(int i=0; i<10; i++){
        cin>>numbers[i];
    }

  // for printing reverse order
  cout<<"Reverse order is:"<<endl;
    for(int i=10-1; i>=0; i--){
        cout<<numbers[i]<<endl;
    }
}