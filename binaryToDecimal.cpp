#include<iostream>
using namespace std;

int main(){
    int n;
    int m = 0;
    int ans = 0;
    cout << " Enter the binary number ";
    cin >> n;
    while (n != 0)
    {
        int rem = n % 10;
        ans = ans + rem*pow(2,m);
        m++;
        n /= 10; 
    }
    cout << ans << endl ;

    return 0;
    

}