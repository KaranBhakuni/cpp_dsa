#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "12345";
    int sum=0;
    for (int i = 0; i < s.size(); i++)
    {
        sum+=s[i]-'0';  // or sum[i]-48, because ascii of '0' is 48
    }
    cout<<sum;
    
}