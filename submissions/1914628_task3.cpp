#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int height,i,j;
    cout<<"Enter height of isosceles triangle = ";
    cin>>height;
    for(i=0;i<(height);++i)
    {
        for(j=0;j<=(height+i-1);++j)
        {
            if(j<=(height+i-1) && j>=(height-i-1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
