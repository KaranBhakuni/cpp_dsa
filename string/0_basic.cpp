
#include<iostream>
#include<string>
using namespace std;
int main(){

    char c = 'a';
    // char array ... just like c , in cpp char array are null terminated 
    char arr[4]={'a','b','c','d'};
    for (int i = 0; arr[i]!='\0'; i++)  // or arr[i] != '\0'
    {
        cout<<arr[i]<<" ";
    }
    cout<<"hello";
    cout<<arr[4];
    cout<<"word"<<endl;
    // space acts as termination of input while using cin in cpp for input of char or string
    // char arr2[10];
    // cin>> arr2;
    // cout<<arr2;

    // to use string we have to include <strings> header file in cpp
    // same problem here
    string s= " ";
    // cin>> s;
    // cout<< s<<endl;
    
    //to input whole sentence in cpp , we use getline(cin,string_variable)
    getline(cin,s);
    // cout<<s<<endl;
    for (int i = 0;  s[i] != '\0'; i++)  // or i<s.size()
    {
        cout<<s[i]<<" ";
    }


//#include<cctype>--> toupper(),tolower() are defined here



// 'A'=65 'a'=97 '0'=48
// or s[i]=tolower(s[i])
// or s[i]=toupper(s[i])

}