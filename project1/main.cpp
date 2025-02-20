#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;    // اسم العميل

    int nights;     // عدد الليالي التي سيقيم فيها العميل
};

struct Hotel {

    double pricePerNight; // السعر لكل ليلة
};

string products_arr[200];   // مصفوفة لتخزين أسماء المنتجات

int quantities[200];

int index = 0;

void Add_products() {

    if (index <= 200) {  // إذا كانت المخازن ممتلئة

        cout << "Stock is Full!" << endl;   // طباعة رسالة أن المخزون ممتلئ

        return;  // العودة من الدالة
    }
    cout << "Enter food name: ";   // طلب اسم الطعام من المستخدم

    cin >> products_arr[index];   // تخزين اسم الطعام في المصفوفة

    cout << "Enter quantity: ";    // طلب كمية الطعام من المستخدم

    cin >> quantities[index];     // تخزين الكمية في المصفوفة

    index++;                      // زيادة عدد المنتجات المدخلة

    cout << "Food item added successfully!\n";   //طباعة رسالة تم اضافة الطعام بنجاح
}

void Show_product() {

    for (int i = 0; i < index; i++) {

    cout << products_arr[i] << " Quantity: " << quantities[i] << endl;  // عرض اسم المنتج وكميته

}
}

void Select_product() {

    string product;   // متغير لتخزين اسم المنتج الذي يختاره المستخدم

    int amount;       // متغير لتخزين الكمية المطلوبة

    cout << "New item: ";   // طلب اسم المنتج

    cin >> product;         // إدخال اسم المنتج

    cout << "New quantity: ";   // طلب الكمية المطلوبة

    cin >> amount;            // إدخال الكمية

    for (int i = 0; i < index; i++) {

        if (products_arr[i] == product) {  // إذا كان المنتج موجودًا

            cout << "New quantity: ";   // طلب الكمية

        if (quantities[i] >= amount) {  // إذا كانت الكمية في المخزون كافية

            quantities[i] -= amount;  // تقليل الكمية من المخزون

            cout << " You took " << amount << " of " << product << endl;

            } else {  // اذا كانت الكمية غير كافية

            cout << "Not enough quantity available!\n";   // طباعة رسالة خطا
            }
}
}
    cout << "Food item not found!\n";  //    اذا لم يكن المنتج موجود في المخزون
}

int main() {

    int a, qtr, rate;

    int Choose , paymentMethod;

    string username, password;

    int usertype, total, totalinvoices, roomNumber, stock;

    bool validInput = false;

    string welcomeMessage = "Welcome";

    while (!validInput) {

        cout << "Enter user_type (1 for Admin, 2 for Customer): ";

        cin >> usertype;

        switch (usertype) {

        case 1:   // اذا كان نوع المستخدم هو Admin

            welcomeMessage += " Admin!";

            cout << welcomeMessage << endl;

            cout << "Message: " << welcomeMessage << endl;   // طباعة رسالة الترحيب

            do {
                cout << "1.Add food "<<

                endl << "2.Show stock "<<

                endl << "3.Select food "<<

                endl << "4.Exit " <<

                endl << "Choose: ";

                cin >> Choose;  // ادخال الاختيار

                if (Choose == 1) {  // اذا كان الاختيار هو إضافة منتج

                    Add_products();   // استدعاء دالة إضافة المنتجات

                } else if (Choose == 2) {  // اذا كان الاختيار هو عرض المخزون

                    Show_product();  // استدعاء دالة عرض المنتجات

                } else if (Choose == 3) {  // اذا كان الاختيار هو اختيار منتج

                    Select_product();  // استدعاء دالة اختيار المنتج

                } else if (Choose == 4) {  // اذا كان الاختيار هو الخروج

                    cout << "Exit";

                    break;  // الخروج من الحلقة

                } else {  // اذا كان الاختيار غير صحيح

                    cout << "Invalid number";  // طباعة رسالة خطا

                }
            } while (Choose != 4);

            validInput = true;

            break;

        case 2:   // اذا كان نوع المستخدم هو Custome

            cout << "Enter user name:";  // طلب اسم المستخدم

            cin >> username;   // ادخال اسم المستخدم

            cout << "Enter password:";  // طلب كلمة المرور

            cin >> password;   // ادخال كلمة المرور

            validInput = true;

            welcomeMessage += " Customer!";

            cout << welcomeMessage << endl;

            cout << "Message: " << welcomeMessage << endl;  // طباعة رسالة الترحيب

            break;

        default:  // اذا كان الإدخال غير صحيح
            cout << "Invalid user type! Please try again" << endl;  // طباعة رسالة خطا

            break;
        }
    }

    bool room1 = false, room2 = false, room3 = false, room4 = false, room5 = false;
    int choice;

    do {
        cout << endl;
        cout << "1.View Available Rooms";  // عرض خيار عرض الغرف المتاحة
        cout << endl;
        cout << "2.Book a Room";   // عرض خيار حجز غرفة
        cout << endl;
        cout << "3.View Reserved Rooms";   // عرض خيار عرض الغرف المحجوزة
        cout << endl;
        cout << "4.Menu";   // عرض خيار قائمة الطعام
        cout << endl;
        cout << "5.Exit";   // عرض خيار الخروج
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;  // ادخال الخيار

        cout << endl;

        if (choice == 1) {  // اذا كان الخيار هو عرض الغرف المتاحة

            cout << "Available Rooms: ";
            cout << " 1 " << " 2 " << " 3 " << " 4 " << " 5 " << endl;   // طباعة الغرف المتاحة
        }

        else if (choice == 2) {  // اذا كان الخيار هو حجز غرفة
            cout << "Enter room number to book: ";
            cin >> roomNumber;  // ادخال رقم الغرفة

            if      (roomNumber == 1) room1 = true;
            else if (roomNumber == 2) room2 = true;
            else if (roomNumber == 3) room3 = true;
            else if (roomNumber == 4) room4 = true;
            else if (roomNumber == 5) room5 = true;
            else {
                cout << endl;

                cout << "Room " << roomNumber << " is already booked." << endl;  // طباعة رسالة ان الغرفة محجوزة

                continue;
            }
              Customer customer;
    Hotel hotel;

    cout << "Enter number of nights: ";  // طلب عدد الليالي من العميل
    cin >> customer.nights;  // إدخال عدد الليالي

cout << "Choose payment method (1: Cash, 2: Visa): ";  //تحديد طريقة االدفع
cin >> paymentMethod;

switch (paymentMethod) {

    case 1:   //اذا كان الخيار هو Cash

        break;

    case 2:  //اذا كان الخيار هو Visa


        break;

    default:    //اذا كان الاختيار غير صحيح

        cout << "Unknown payment method!" << "\n";
}

    hotel.pricePerNight = 70;  // تحديد السعر لكل ليلة
    double totalinvoice = customer.nights * hotel.pricePerNight;  // حساب الفاتورة الإجمالية

    cout << "Total Invoice: " << totalinvoice << endl;  // طباعة إجمالي الفاتورة


            cout << endl;

            cout << "Room " << roomNumber << " has been booked successfully." << endl;  // طباعة رسالة تاكيد الحجز
            cout << "Message: Customer booked room " << roomNumber << endl;  //اشعار بحجز الغرفة
            cout << "Message: Payment Method: Visa" << "\n";

        }

        else if (choice == 3) {  // اذا كان الخيار هو عرض الغرف المحجوزة
            cout << "Reserved Rooms: ";  // طباعة الغرف المحجوزة
            if (room1 == true) cout << " 1 ";
            if (room2 == true) cout << " 2 ";
            if (room3 == true) cout << " 3 ";
            if (room4 == true) cout << " 4 ";
            if (room5 == true) cout << " 5 ";
            cout << endl;

            if (room1 == false &&
                room2 == false &&
                room3 == false &&
                room4 == false &&
                room5 == false) cout << "No reserved rooms.";  // اذا لم تكن هناك غرف محجوزة
        }

        else if (choice == 4) {  // اذا كن الخيار هو عرض قائمة الطعام
            cout << " Menu \nselect your drink \n1.Coffee \n2.Tea \n3.Milk shake \n4.Juice \n5.Water \n6.Soda \n7.Ice Cream" << endl;
            cout << " Menu \nselect your food\n8.Pizza \n9.Pasta \n10.Salad \n11.Soup \n12.Sandwiches \n13.Burger \n14.Cookie" << endl;
            cout << "\nEnter The number: ";   // طلب اختيار الطعام او الشراب
            cin >> a;
            switch (a) {
            case 1:   // إذا تم اختيار القهوة
                    cout << "you have selected Coffee.\n Enter the quantity:";
                    cin >> qtr;  // إدخال الكمية
                    rate = 5;  // السعر
                    total = qtr * rate;  // حساب الإجمالي
                    cout << "Total amount :" << total;
                    break;

            case 2:    // إذا تم اختيار الشاي
                    cout << "\nyou have selected Tea.\n Enter the quantity :";
                    cin >> qtr;  // إدخال الكمية
                    rate = 10;  //السعر
                    total = qtr * rate;  // حساب الإجمالي
                    cout << "Total amount :" << total;
                    break;

            case 3:   // إذا تم اختيار الميلك شيك
                    cout << "\nyou have selected Milk shake.\n Enter the quantity :";
                    cin >> qtr;  // إدخال الكمية
                    rate = 55;  //السعر
                    total = qtr * rate;  // حساب الإجمالي
                    cout << "Total amount :" << total;
                    break;
            case 4:
                         cout <<"\nyou have selected Juice.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 40;
                     total = qtr * rate;
                        cout << "Total amount :" << total;
                    break;
            case 5:
                         cout <<"\nyou have selected Water.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 60;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                     break;
            case 6:
                         cout <<"\nyou have selected Soda.\n Enter the quantity :";
                     cin >> qtr; //كمية
                     rate = 25; //سعر
                     total = qtr *rate;//الاجمالي =
                         cout << "Total amount :" << total;
                    break;

            case 7:
                         cout <<"\nyou have selected Ice Cream.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 30;
                     total = qtr *rate;
                         cout << "Total amount :" << total;
                   break;
           case 8:
                   cout <<"\nyou have selected Pizza.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 45;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                    break;
           case 9:
                    cout <<"\nyou have selected Pasta.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 35;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                    break;

          case 10:
                    cout <<"\nyou have selected Salad.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 67;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                    break;
            case 11:
                     cout <<"\nyou have selected Soud.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 44;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                    break;
            case 12:
                     cout <<"\nyou have selected Sandwiches.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 75;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                    break;

            case 13:
                       cout <<"\nyou have Selected Burger.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 43;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                    break;
            case 14:
                        cout <<"\nyou have selected Cookies.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 45;
                     total = qtr * rate;
                         cout << "Total amount :" << total;
                    break;
            default:
                         cout << "sorry unavailable.  ";
                   break;

             }

            }


        else if (choice == 5) {  //اذا كان الخيار هو الخروج
            cout << "Exiting system..." << endl;
            break;  // الخروج من الحلقة
        }

        else {  // اذا كان الاختيار غير صحيح
            cout << "Invalid choice, please try again." << endl;  // طباعة رسالة خطا
        }

    } while (choice != 5);

    cout << endl;


    return 0;
}
