#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100], str2[100];
    cin>>str;

    int i,j;

    int length=strlen(str);

    for(i=0; i<length; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str2[i]=str[i]+('a'-'A');
        }
        else
        {
            str2[i]=str[i];
        }
    }
    str2[i]='\0';

    for(j=0; j<length; j++)
    {
        if(str2[j]== 'A' || str2[j]== 'E' || str2[j]== 'I' || str2[j]== 'O' || str2[j]== 'U' || str2[j]== 'Y' || str2[j]== 'a' || str2[j]== 'e' || str2[j]== 'i' || str2[j]== 'o' || str2[j]== 'u' || str2[j]== 'y')
        {
            continue;
        }
        else
        {
            cout<<"."<<str2[j];
        }

        if(str2[j]=='\0')
            break;
    }

    return 0;
}
