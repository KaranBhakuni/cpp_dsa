#include<bits/stdc++.h>

using namespace std;

int main(){

    string s= "how are you?";
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==' ')
        {
            count++;
        }
        
    }
    cout<<"no of words is "<<count+1;
    return 0;
}