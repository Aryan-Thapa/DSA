#include <iostream>
#include <limits.h>
using namespace std;
int keypresses(string &input)
{
    int currdisplay=0;
    int i=0;
    int count=0;
    while(i<input.size())
    {
        if(input[i]=='0' && input[i+1]=='0' && i+1<input.size())
        {
            currdisplay=currdisplay * 100;
            i=i+2;
            count++;
        }
        else if(input[i]-'0'<=9)
        {
            currdisplay= currdisplay * 10+ input[i];
            count++;
            i++;
        }
    }
    return count;
}
int main()
{
    string input="60004";
    int ans=keypresses(input);
    cout<<"answer is "<<ans;
}