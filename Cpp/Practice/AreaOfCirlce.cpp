#include <iostream>
using namespace std;

float area(float radius){
    float pi=3.14;

    return pi*radius*radius;
}
int main(){
    // cout<<"Hello"<<endl;
    //area of a circle
    float radius;
    cout<<"Enter Radius to calculate Area!"<<endl;
    cin>>radius;
    float result= area(radius);
    cout<<result<<endl;
    return 0;
}