#include <iostream>
#include<math.h>
using namespace std;
int convertBinaryToDecimal(string n)
{
    //TODO
    int a, De=0, b;
    
    a=n.length();
    for (int i=a-1; i>=0; i--){
       if (n[i]=='1')
            {
                b=pow(2,a-1-i);
                De += b;
            }
    }
    return De;
}
int main()
{
    string n;
    cin >> n;
    cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal";
    return 0;
}
