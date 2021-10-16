#include<iostream>

using namespace std;

int main()

{

    int z=1;

    for(int a=1;a<=5;a++)

    {  

        for(int b=4;b>=a;b--)

        {

            cout<<" "; 

        }

        for(int k=0;k<z;k++)

        {

            cout<<"*";

        }

        cout<<endl;

        z=z+2;

    }

}
