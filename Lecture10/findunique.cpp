
#include <iostream>
#include <vector>
using namespace std;
int findunique(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;

}
int main()
{
    int n;
    cout<<"Enter number of elements in your array"<<endl;
    cin>>n;
    vector<int>arr1(n);
    cout<<"Enter Array elements"<<endl;
    for(int i=0;i<arr1.size();i++)
    {
        cin>>arr1[i];
    }
    int ue=findunique(arr1);
    cout<<"Unique Element in your array is : "<<ue<<endl;
  
}
//UNique Element

	// int n;
	// cout << "Enter the size of array " << endl;
	// cin >> n;


	// vector<int> arr(n);
	// cout << "Enter the elements " << endl;
	// //taking input
	// for(int i=0; i<arr.size(); i++) {
	// 	cin >> arr[i];
	// }

	// int uniqueElement = findUnique(arr);

	// cout << "Unique Element is  " << uniqueElement << endl;
