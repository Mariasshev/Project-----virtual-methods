#include "Transport.h"
#include "Car.h"
#include "Tram.h"
#include "Motorbike.h"
#include "Plane.h"
#include "Vessel.h"
#include <iostream>
using namespace std;


int main()
{
    Transport* ptr = nullptr;
    int v;
    cout << "1. Car\n2. Plane\n3. Motorbike\n4. Tram\n5. Vessel ->";
    cin >> v;

    switch (v) {
    case 1:
        ptr = new Car();
        break;
    case 2:
        ptr = new Plane();
        break;
    case 3:
        ptr = new Motorbike();
        break;
    case 4:
        ptr = new Tram();
        break;
    case 5:
        ptr = new Vessel();
        break;
    default:
        cout << "Error" << endl;
    }
    
    ptr->Input();
    cout << endl << "Information: " << endl;
    ptr->Print();
    delete ptr;
    return 0;
}