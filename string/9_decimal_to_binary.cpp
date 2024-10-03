#include<iostream>
#include<string>
using namespace std;

int main(){
    int rem=0;
    int num=3;
    int bi=0;
    int copy=num;
    int base=1;
    while (copy!=0)
    {
        rem=copy%2;
        copy=copy/2;
        bi=bi+rem*base;
        base=base*10;
    }
    cout<<bi;

    return 0;
}