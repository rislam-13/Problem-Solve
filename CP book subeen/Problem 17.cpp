#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, i;
    cin>>n;

    string num1, num2, temp;

    while(n--)
    {
        cin>>num1>>num2;

        if(num1[0]!=num2[0] && num1[0]!=num2[1] && num1[1]!=num2[0] && num1[1]!=num2[1])
        {
            cout<<"N"<<endl;
            continue;
        }

        i=0;

        if(num1[0]==num2[0] || num1[0]==num2[1])
        {
            temp[0]=num1[0];
            i=1;
        }
        if(num1[1]==num2[0] || num1[1]==num2[1])
        {
            if(i==1)
            {
                if(num1[1]!=temp[0])
                {
                    temp[1]=num1[1];
                    i=2;
                }
            }
            else
            {
                temp[0]=num1[1];
                i=1;
            }
        }

        if(i==2)
        {
            if(temp[0]>temp[1])
                cout<<temp[1]<<temp[0];
            else
                cout<<temp[0]<<temp[1];
        }
        else
            cout<<temp[0];

        cout<<endl;
    }

    return 0;
}
