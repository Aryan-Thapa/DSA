#include<iostream>
using namespace std;
float circlearea(float radius)
{
    float area=3.14*radius*radius;
    return area;
}
int main()
{
    float r;
    cout<<"enter radius of the circle"<<endl;
    cin>>r;
    float a;
    a=circlearea(r);
    cout<<"Area of the the circle is "<<a<<endl;
    return 0;

}