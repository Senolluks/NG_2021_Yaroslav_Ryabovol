#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, D, x1, x2;
    cout << "�B�r�u�t�y���u 3 ���y���|�p:" << endl;
    cin >> a >> b >> c;

    D = b^2 - 4 * a * c;

    if(D > 0){
       x1 = ((-b) + sqrt(D)) / (2 * a);
      cout << "x1=" << x1 << endl;
       x2 = ((-b) - sqrt(D)) / (2 * a);
      cout << "x2= "<< x2 << endl;

    }
    if(D < 0){
        cout << "�K�����~�u�z �~�u��!";
    }

    if(D == 0){
       x1= -(b / (2 * a));
      cout << "x1- " << x1 << endl;

    }


    return 0;
}
