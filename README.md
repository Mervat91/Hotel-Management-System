# Hotel-Management-System
#include <iostream>

using namespace std;

int main() {

    bool room1 = false, room2 = false, room3 = false, room4 = false, room5 = false;
    int choice, roomNumber;

    do {
            cout << endl;
        cout << "1.View Available Rooms" ;
        cout << endl;
        cout << "2.Book a Room" ;
        cout << endl;
        cout << "3.View Reserved Rooms" ;
        cout << endl;
        cout << "4.Exit";
        cout << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            cout << "Available Rooms: ";
             cout << " 1 "<< " 2 "<< " 3 "<< " 4 " << " 5 " << endl;
        }

        else if (choice == 2) {
            cout << "Enter room number to book: ";
            cin >> roomNumber;

            if (roomNumber == 1 ) room1 = true;
            else if (roomNumber == 2 ) room2 = true;
            else if (roomNumber == 3 ) room3 = true;
            else if (roomNumber == 4 ) room4 = true;
            else if (roomNumber == 5 ) room5 = true;
            else {
                    cout << endl;
                cout << "Room " << roomNumber << " is already booked." << endl;
                continue;
            }
            cout << endl;
            cout << "Room " << roomNumber << " has been booked successfully." << endl;
        }

        else if (choice == 3) {
            cout << "Reserved Rooms: ";
            if (room1==true ) cout << " 1 ";
            if (room2==true) cout << " 2 ";
            if (room3==true) cout << " 3 ";
            if (room4==true) cout << " 4 ";
            if (room5==true) cout << " 5 ";
            cout << endl;
            if (room1== false && room2 == false && room3 ==false && room4 ==false&& room5 == false) cout << "No reserved rooms.";

        }
        else if (choice == 4) {
            cout << "Exiting system..." << endl;
        }
        else {
            cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 4);

 return 0 ;
}
