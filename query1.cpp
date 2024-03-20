#include <iostream>
using namespace std;

int main(){
//initializing an array
int numbers[12];
   // for saving 10 numbers in array using for loop
    cout<<"Enter 12 numbers: "<<endl;
    for(int i=0; i<12; i++){
        cin>>numbers[i];
    }

  // for printing reverse order
  cout<<"Reverse order is:"<<endl;
    for(int i=12-1; i>=0; i--){
        cout<<numbers[i]<<endl;
    }
}