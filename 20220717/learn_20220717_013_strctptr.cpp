//
// Created by 86451 on 2022/7/17.
//
#include "iostream"
#include "cmath"

struct polar{
    double distance;
    double angel;
};

struct rect{
    double x;
    double y;
};

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main(){
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y){
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
}

void show_polar(const polar * pda){
    using namespace std;
    const double Red_to_deg = 57.29577951;
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angel * Red_to_deg;
    cout << " degress\n";
}

void rect_to_polar(const rect * pxy, polar * pda){
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angel = atan2(pxy->y, pxy->x);
}