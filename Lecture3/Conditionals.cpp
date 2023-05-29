#include <iostream>
using namespace std;
int main()
{
    // int score;
    // cout << "Enter the score" << endl;
    // cin >> score;
    // if(score<300)
    // {
    //     cout << "India wins" << endl;
    // }
    // else
    // {
    //     cout << "Australia win" << endl;

    // }
    int marks;
    cout<<"enter your marks"<<endl;
    cin>>marks;
    if(marks>=90)
    {
        cout<<"A grade"<<endl;
    }
    else if(marks>=80)
    {
        cout<<"B grade"<<endl;
    }
    else if(marks>=60)
    {
        cout<<"c grade"<<endl;
    }
    else if(marks>=40)
    {
        cout<<"d grade"<<endl;
    }
    else
    {
        cout<<"f grade"<<endl;
    }

}