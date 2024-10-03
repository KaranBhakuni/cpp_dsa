// retun the first duplicate character for which second index is minimal
#include<iostream>
#include<string>
#include<map>

int main(){

    string s = "WelcomeHome";
    map<char,int>mp;
    char c ='';
    for (int i = 0; i < s.size(); i++)
    {

        if (mp.count(s[i])>0)
        {
            count<<s[i];
            break;
        }
        else{
            c=s[i];
            mp[c]=mp[c]+1;
        }

    }

}