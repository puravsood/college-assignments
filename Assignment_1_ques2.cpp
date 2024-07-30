#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int numbers[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the numbers: ";
        cin>>numbers[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+numbers[i];
    }
    int avg=sum/n;
    cout<<"The Average of the numbers is: "<<avg;
}
