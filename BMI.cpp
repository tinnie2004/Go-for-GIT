// Ph?n include v� khai b�o s? d?ng thu vi?n
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Khai b�o v� nh?p v�o c�c gi� tr? d?u v�o
    double bmi, kg, h;	
    cin >> kg>> h;
    //BEGIN TODO
    bmi=kg/(h*h);
    if (bmi < 18.5)
        cout<<"Co th? b?n G?y v� nguy co ph�t b?nh Th?p";
        else if (bmi <= 25)
            cout<<"Co th? b?n B�nh thu?ng v� nguy co ph�t b?nh Trung b�nh";
            else if (bmi <= 30)
                cout<<"Co th? b?n Hoi b�o v� nguy co ph�t b?nh Cao";
                    else if (bmi <= 35)
                        cout<<"Co th? b?n B�o ph� c?p d? 1 v� nguy co ph�t b?nh Hoi cao";
                            else if (bmi <= 40)
                                cout<<"Co th? b?n B�o ph� c?p d? 2 v� nguy co ph�t b?nh Cao";
                                    else cout<<"Co th? b?n B�o ph� c?p d? 3 v� nguy co ph�t b?nh C?c cao";

    //END TODO
    return 0;
}
