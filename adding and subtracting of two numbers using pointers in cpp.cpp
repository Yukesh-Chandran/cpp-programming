#include<iostream>
using namespace std;
int main()
{
    int a,b,c,*p1,*p2,*p3;
    p1=&a,p2=&b,p3=&c;
    cin>>a>>b;
    cout<<(*p3=*p1+*p2)<<endl;
    cout<<(*p3=abs(*p1-*p2));
}
