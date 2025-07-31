//NAME: PALAK SONI
//PRN: 24070123069
//Class: ENTC A3
//Problem statement:- Write a code which takes a string as input from user and display it out.


#include <iostream>
using namespace std;
int main() {

    string str1;
    string str2;
    cout<<"Enter the string:"<<endl;
    cin>>str1;
    
    cout<<"Enter the string:"<<endl;
    cin>>str2;
    
    string str;
    str= str1+  " " + str2;
    cout<<"The concatenated string is: "<<str;
    
    return 0;
}


/*
Output:-
Enter the string:
Palak
Enter the string:
Soni
The concatenated string is: Palak Soni
*/
