#include <iostream>
#include<string>
using namespace std;

bool compareString(string a, string b) {
        if(a.length() != b.length())
                return false;


                for(int i=0; i<a.length(); i++) {
                        if(a[i] != b[i]) {
                                return false;
                        }
                }

        return true;
}

int main() {
        // //string create
        // string str;
        // cout<<"Enter a string"<<endl;
        // //input
        // getline(cin, str);
        // //print
        // cout << "Your strings is: " << str <<endl;
        // cout << "length of the string is: "<< str.length() << endl;
        // cout << "isEmpty: " << str.empty() << endl;
        // str.push_back('A');
        // cout<<"after applying pushback operation "<< str << endl;
        // str.pop_back();
        // cout<<"after applying pop back " << str << endl;
        // cout<<"Substr function returns: " << str.substr(1, 20) << endl;
        // cout << str << endl;
        //output
// Enter a string
// Hi my name is Aryan Thapa
// Your strings is: Hi my name is Aryan Thapa
// length of the string is: 25
// isEmpty: 0
// after applying pushback operation Hi my name is Aryan ThapaA
// after applying pop back Hi my name is Aryan Thapa
// Substr function returns: i my name is Aryan T
// Hi my name is Aryan Thapa
/* string a = "Love";
string b = "Love";
//if returned values are 
// 0	They compare equal
// <0	Either the value of the first character that does not match is lower in the compared string, or all compared characters match but the compared string is shorter.
// >0	Either the value of the first character that does not match is greater in the compared string, or all compared characters match but the compared string is longer.
if(a.compare(b) == 0) 
{
cout << " a and b are exactly same strings" << endl;
}
else 
{
    cout << "a and b are not same" << endl;
}
string x = "bbbb";
string y = "bbbbb";
cout << x.compare(y) << endl; */
//find function
string sentence = "hello Jee kaise ho saare";
string target = "saare";
cout << sentence.find(" ") << endl;
if(sentence.find(target) == string::npos) {
    cout << "Not Found" << endl;
} 

        // string str = "This is my First Message";
        // string word = "Babbar";

        // str.replace(11, 5 , "Second");
        // cout << str << endl;

        // string str = "ABCDEFGHIJKLMNOPQRST";
        // str.erase(10,10);
        // cout << str;


  return 0;
}