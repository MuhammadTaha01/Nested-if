#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st value: ";
    cin>>a;
    cout<<"Enter 2nd value: ";
    cin>>b;
    cout<<"Enter 3rd value: ";
    cin>>c;

    if(a==b)
    {
        if(b==c)
            cout<<"2nd and 3rd values are equal";
        else
            cout<<"1st and 2nd values are equal";
    }

    else if(b==c)
    {
        if(c==a)
            cout<<"3rd and 1st values are equal";
        else
            cout<<"2nd and 3rd values are equal";
    }

    else if(c==a)
    {
        if(a==c)
        cout<<"1st and 3rd values are equal";
        else
            cout<<"3rd and 1st values are equal";
    }

    else
        cout<<"Not equal";


    return 0;
}
