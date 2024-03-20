#include <iostream>
using namespace std;

int main(){
    int numbers[3];
    cout<<"Enter 3 numbers: "<<endl;
    for(int i=0; i<3; i++){
        cin>>numbers[i];
    }
    for(int i=0; i<3; i+=2){
        if(numbers[i]%2==0){
            cout<<numbers[i]<<" ";
        }
    }
    cout<<"No even numbers";
}