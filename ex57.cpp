#include <iostream>
#include <math.h>

using namespace std;

double Leng (double x1, double y1, double x2, double y2) {
    double ab = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    return ab;
}

double Perim (double ab, double bc, double ac) {
    double P;
    P = ab + bc + ac;
    return P;
}

int main()
{
    double ab, ac, ad, x1, x2, x3, y1, y2, y3, P;
    
    cout<<"Type number 1: " << endl;
    cin >> x1;
    cout << "Type number 2: " << endl;
    cin >> x2;
    cout << "Type number 3: " << endl;
    cin >> y1;
    cout << "Type number 4: " << endl;
    cin >> y2;
    ab = Leng(x1, x2, y1, y2);
    cout << "First length of line is equal: " << ab << endl;
    cout<<"Type number 1: " << endl;
    cin >> x1;
    cout << "Type number 2: " << endl;
    cin >> x2;
    cout << "Type number 3: " << endl;
    cin >> y1;
    cout << "Type number 4: " << endl;
    cin >> y2;
    ac = Leng(x1, x2, y1, y2);
    cout << "Second length of line is equal: " << ad << endl;
    cout<<"Type number 1: " << endl;
    cin >> x1;
    cout << "Type number 2: " << endl;
    cin >> x2;
    cout << "Type number 3: " << endl;
    cin >> y1;
    cout << "Type number 4: " << endl;
    cin >> y2;
    ad = Leng(x1, x2, y1, y2);
    cout << "Third length of line is equal: " << ad << endl;
    P = Perim(ab, ac, ad);
    cout << "Perimetr of triangle is equal: " << P << endl;
    
    
    

    return 0;
}
