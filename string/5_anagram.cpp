#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main(){
    string s1="karan";
    string s2="arank";

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if (s1==s2)
    {
        std::cout<<"yes";
    }else{
        std::cout<<"no";
    }
    
}