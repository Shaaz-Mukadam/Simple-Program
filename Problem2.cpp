//Write a program for leap year or not.
#include<iostream>
using namespace std;
int main() {
    int year;
    cin>>year;

    if(year%4==0){
        cout<<"Entered year is leap year";
    }
    else{
        cout<<"Entered year is not an leap year";
    }
}
