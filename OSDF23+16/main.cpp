#include <iostream>
#include<cstring>

using namespace std;

void reverse(char*duma, char*amad);

int main()
{
    char word[30], drow[30];
    int w_length, i;
    for(;;)
    {
        cout<<"\n Enter a word: \n";
        cin>>word;
        w_length = strlen(word);

        if(w_length !=1)
        {
            reverse(word, drow);
            cout<<drow;
        }
        else
        {
            cout<<endl;
            break;
        }

    }
    return 0;
}


void reverse(char*duma, char*amad)
{
    int n = strlen(duma);
    for(int i = 0; i<n; i++)
    {
        amad[i]=duma[n-i-1];
    }
    amad[n]='\0';
}
