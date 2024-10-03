#include<iostream>
#include<string>
using namespace std;
int main(){

    string s = "kadu space chhin .. yo bta";
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==' ')
        {
            count++;
        }
        
    }
    cout<<count;    


}