#include <iostream>
using namespace std;

int main(){
    int numbers[6];
    cout<<"Enter 6 numbers: "<<endl;
    int max=0;
    int j=0;
    while(j<6){
        cin>>numbers[j];
        j++;
    }
   for(int i=1; i<6; i++){
    if(numbers[i]>max){
        max=numbers[i];
    }
   }

   cout<<"Greater number is: "<<max<<endl;
}