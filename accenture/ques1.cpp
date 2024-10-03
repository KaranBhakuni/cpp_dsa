// if word is greater than 10 character long then return ifs first char then char count then last char 
// if word is small than 10 character then retun it as it is
// eg
// ip="communiction"  ip="organistaion"  ip="hello" 
// op="c9n"            op="o9n"          op=""
// given a string , retun the max odd number , if string doesnt have any odd number then return ""(empty string)
//  ip="52" op="5" ip="4202" op=""
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1; cin>>s1;
    int s_size;
    s_size=s1.size();
    if (s_size <=10)
    {
        // return s;
        cout<<s1;
    }
    string s = "";
    if ( s_size > 10){
        s.push_back(s[0]);
        // string s3="9";
        s.push_back('9');
        s.push_back(s[s_size-1]);
        cout<<s;
        
    }
    


}