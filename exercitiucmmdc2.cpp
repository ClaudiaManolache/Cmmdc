#include<iostream>

using namespace std;

int a;
int b;

int main()

{
    cout<<"a="; cin>> a;
    cout<<"b="; cin>> b;

if(a==b){cout<<a;}
else {
        while(a!=b){
            if(a>b){a=a-b;}
            if(b>a){b=b-a;}
        }
if(a%b==0) {cout<<endl<<"NU";}
}
return 0;
}
