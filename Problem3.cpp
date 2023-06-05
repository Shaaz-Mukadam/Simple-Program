//Write a program that the entered the program is alphabet is capital or small
#include<iostream>
using namespace std;
int main() {
 int alp;
 cin>>alp;

 if(alp > 'a' && alp < 'z'){
    cout<<"Entered alhpabet is small letter";
 }
 else{
    cout<<"Entered alphabet is capital in letter";
 }
}
