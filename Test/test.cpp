#include <iostream>
using namespace std;
int main()
{
    int n = 5; // Number of rows

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            if (i == n || j == n) {
                std::cout << j << " ";
            } else {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    }

}