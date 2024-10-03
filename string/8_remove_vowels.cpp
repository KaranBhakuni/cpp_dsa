#include<iostream>
#include<string>

using namespace std;



int main(){
    string s= "heLLo WorLD";
    string ans="";

    for (int i = 0; i <s.size(); i++)
    {
        if(!(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'))
        {
            ans+=s[i];
        }

        
        
    }
    
    cout<<ans;
}