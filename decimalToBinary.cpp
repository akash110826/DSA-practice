// decimal to binary conversion using bit operator.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout << " Enter a decimal number ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;      
           // it gives the last bit of the number  
        ans = (bit * pow(10 , i)) + ans;

        n = n >> 1;
        i++;

    }

    cout << " Binary representation = " << ans << endl;
return 0;
}
    