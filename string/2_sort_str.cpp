#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s= "dadsdffjksdf";
    sort(s.begin(),s.end());
    //reverse function for string
    reverse(s.begin(),s.end());
    cout<<s;

}