#include<iostream>
#include<string>
#include<cctype>
using namespace std;


// 'A'=65 'a'=97 '0'=48
int main(){
    string s= "heLLo WorLD";
    cout<<"before "<<s<<endl;
    for (int i = 0; i <s.size(); i++)
    {
        if (s[i]>='A'&& s[i]<='Z')
        {
            s[i]+=32;// or s[i]=tolower(s[i])
        }
        else if (s[i]>='a'&& s[i]<='z')
        {
            s[i]-=32;// or s[i]=toupper(s[i])
        }
        
        
    }
    
    cout<<s;
}