#include <iostream>
#include "House.cpp"
#include "Living.cpp"
#include "Bedroom.cpp"
#include "Bathroom.cpp"
#include "Kitchen.cpp"

using namespace std;

int main()
{  
   
    House h1;
    Living l1;
    Bedroom b1;
    Bathroom bat1;
    Kitchen k1;

    IRoom* r1 = &l1;
    IRoom* r2 = &b1;
    IRoom* r3 = &bat1;
    IRoom* r4 = &k1;
    h1.addRoom(r1);
    h1.addRoom(r2);
    h1.addRoom(r3);
    h1.addRoom(r4);

    h1.collectRoomData();
    h1.viewRoomData();

    
}
