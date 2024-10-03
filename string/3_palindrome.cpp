#include<bits/stdc++.h>
using namespace std;
void palindrome(string s){
    int i;
    int j;
    i = 0;
    j = s.size()-1;
    for (int i = 0; i < s.size()/2; i++)
    {
        if (s[i]!=s[j])
        {
            cout<<"not a palindrome";
            return;
        }
        j--;
    }
    cout<<"palindrome";
    
}
int main(){
    string s="karan";
    palindrome(s);
}

/*
short cut 

string original=s;
reverse(s.begin(),s.end());
if(original==s) palidrome
*/