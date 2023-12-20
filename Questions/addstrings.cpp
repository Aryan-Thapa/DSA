#include<iostream>
using namespace std;
#include<string>
void reversestr(string &s,int i,int j)
{
    if(i>=j)
    {
        return;
    }
    swap(s[i],s[j]);
    reversestr(s,i+1,j-1);
}
string addStrings(string num1, string num2,int n1,int n2) 
{
        int sum=0;
        int carry=0;
        string ans="";
        // n1=num1.size();
        // n2=num2.size();
        while(n1>=0 && n2>=0)
        {
            sum=carry+(num1[n1]-'0')+(num2[n2]-'0');
            carry=sum%10;
            ans.push_back(sum);
        }
        while(n1>=0)
        {
            sum=carry+(num1[n1]-'0');
            carry=sum%10;
            ans.push_back(sum);
        }
        while(n2>=0)
        {
            sum=carry+(num2[n2]-'0');
            carry=sum%10;
            ans.push_back(sum);
        }
        addStrings(num1,num2,n1-1,n2-1);
        reversestr(ans,0,ans.size()-1);
        return ans;
}
    

int main()
{
    string num1="11";
    string num2="123";
    
    addStrings(num1,num2,num1.size(),num2.size());
}