#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1, num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Before swapping"<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    swap(num1,num2);
    cout<<"After swapping"<<endl;
     cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    
    return 0;

}