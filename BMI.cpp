// Ph?n include và khai báo s? d?ng thu vi?n
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Khai báo và nh?p vào các giá tr? d?u vào
    double bmi, kg, h;	
    cin >> kg>> h;
    //BEGIN TODO
    bmi=kg/(h*h);
    if (bmi < 18.5)
        cout<<"Co th? b?n G?y và nguy co phát b?nh Th?p";
        else if (bmi <= 25)
            cout<<"Co th? b?n Bình thu?ng và nguy co phát b?nh Trung bình";
            else if (bmi <= 30)
                cout<<"Co th? b?n Hoi béo và nguy co phát b?nh Cao";
                    else if (bmi <= 35)
                        cout<<"Co th? b?n Béo phì c?p d? 1 và nguy co phát b?nh Hoi cao";
                            else if (bmi <= 40)
                                cout<<"Co th? b?n Béo phì c?p d? 2 và nguy co phát b?nh Cao";
                                    else cout<<"Co th? b?n Béo phì c?p d? 3 và nguy co phát b?nh C?c cao";

    //END TODO
    return 0;
}
