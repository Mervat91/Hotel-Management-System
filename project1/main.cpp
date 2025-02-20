#include <iostream>
#include <string>
using namespace std;
struct Customer {
    string name;
    int nights;
};


  struct Hotel {
    double pricePerNight;
};

  string products_arr[200];
   int quantities[200];
   int index=0;
   void Add_products(){
   if(index>=200) {
       cout<<"Stock is Full!"<<endl;
       return;
}
      cout<<"Enter food name: ";
       cin>>products_arr[index];
       cout<<"Enter quantity: ";
       cin>>quantities[index];
            index++;
            cout<<"Food item added successfully!\n";
}
   void Show_product(){
   for(int i=0;i<index;i++) {
        cout<<products_arr[i]<<" Quantity: "<< quantities[i]<<endl;
   }
}
   void Select_product(){
       string product;
       int amount;
       cout<<"New item: ";
       cin>>product;
       cout<<"New quantity: ";
       cin>>amount;
       for(int i=0;i<index;i++){
            if(products_arr[i]==product){
                cout<<"New quantity: ";
                if(quantities[i]>=amount){
                    quantities[i]-=amount;
                cout<<" You took "<<amount<<" of "<<product<<endl;
                }else{
                    cout<<"Not enough quantity avliable!\n";
                }

       }}
       cout<<"Food item not found!\n";
   }

   int main() {


   int a,qtr,rate;
   int Choose;
   string username, password;
    int usertype , total , totalinvoices ,roomNumber , stock;
    bool validInput = false;
    string welcomeMessage = "Welcome";


        while(!validInput){
        cout << "Enter user_type (1 for Admin, 2 for Customer): ";
        cin >> usertype ;
        switch (usertype){
        case 1:

            welcomeMessage += " Admin!";
    cout << welcomeMessage << endl;
    cout << "Message: " << welcomeMessage << endl;                //ÿ»«⁄… «‘⁄«—  ⁄—Ì› ··„” Œœ„

     do{
   cout<<"1.Add food "<<
   endl<<"2.Show stock "<<
   endl<<"3.Select food "<<
   endl<<"4.Exist "<<
   endl<<"Choose: ";
   cin>>Choose;
   if(Choose==1){
        Add_products();
   }else if(Choose==2){
       Show_product();
   }else if(Choose==3){
       Select_product();
   }else if(Choose==4){
       cout<<"Exist";
       break;
   }else{
       cout<<"Invalid number";
   }
   } while(Choose!=4);
    validInput = true;
        break;

        case 2:
              cout << "Enter user_name:";        //«·„” Œœ„ ÌœŒ· «”„Â
        cin >> username;
        cout << "Enter password:";         //«·„” Œœ„ ÌœŒ· ﬂ·„… „—Ê— Œ«’Â »Â
        cin >> password;
             validInput = true;
            welcomeMessage += " Customer!";
            cout << welcomeMessage << endl;
            cout << "Message: " << welcomeMessage << endl;

            break;
        default:
            cout << "Invalid user type! Please try again" << endl;
            break;
            }
            }


    bool room1 = false,
         room2 = false,
         room3 = false,
         room4 = false,
         room5 = false;
    int choice;

    do {
            cout << endl;
        cout << "1.View Available Rooms" ;
        cout << endl;
        cout << "2.Book a Room" ;
        cout << endl;
        cout << "3.View Reserved Rooms" ;
        cout << endl;
        cout << "4.Menu";
        cout << endl;
        cout << "5.Exit";
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

            if      (roomNumber == 1 ) room1 = true;
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
            cout << "Message: Customer book room " << endl;              //„⁄—›… «·€—› «·„ÕÃÊ“Â ⁄·Ì ÂÌ∆… «‘⁄«—
        }

        else if (choice == 3) {
            cout << "Reserved Rooms: ";
            if (room1==true ) cout << " 1 ";
            if (room2==true) cout << " 2 ";
            if (room3==true) cout << " 3 ";
            if (room4==true) cout << " 4 ";
            if (room5==true) cout << " 5 ";

            cout << endl;
            if  (room1 ==false &&
                 room2 ==false &&
                 room3 ==false &&
                 room4 ==false &&
                 room5 ==false) cout << "No reserved rooms.";

        }

        else if (choice == 4) {

            cout << " Menu \nselect your drink \n1.Coffee \n2.Tea \n3.Milk shake \n4.Juice \n5.Water \n6.Soda \n7.Ice Cream"<<endl;
            cout << " Menu \nselect your food\n8.Pizza \n9.Pasta \10.Salad \n11.Soup \n12.Sandwiches \n13.Burger \n14.Cookie"<<endl;
            cout << "\nEnter The number: ";
             cin >> a;
             switch (a)
             {
            case 1:
                    cout << "you have selected Coffee.\n Enter the quantity:";
                     cin >> qtr;// ﬂ„ÌÂ
                     rate = 5; //”⁄—
                     total = qtr *rate; // «·«Ã„«·Ì =ﬂ„Ì… * ⁄œœ
                         cout << "Total amount :" << total;
                   break;
            case 2:
                        cout <<"\nyou have selected Tea.\n Enter the quantity :";
                     cin >> qtr; //ﬂ„ÌÂ
                     rate = 10; //”⁄—
                     total = qtr * rate; //«·≈Ã„«·Ì =ﬂ„ÌÂ * ”⁄—
                         cout << "Total amount :" << total;
                    break;
            case 3:
                          cout <<"\nyou have selected Milk shake.\n Enter the quantity :";
                     cin >> qtr;
                     rate = 55;
                     total = qtr * rate;
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
                     cin >> qtr; //ﬂ„Ì…
                     rate = 25; //”⁄—
                     total = qtr *rate;//«·«Ã„«·Ì =
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

             }}


      else if (choice == 5 ) {

                 cout << "Exiting system..." << endl;
                 break;
         }

         else{
            cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 5);

     cout << endl;

    Customer customer;
    Hotel hotel;

    cout << "Enter number of nights: ";
    cin >> customer.nights;

    hotel.pricePerNight = 70 ;
    double totalinvoice = customer.nights * hotel.pricePerNight;



    cout << "Number of Nights: " << customer.nights << endl;
    cout << "Total Invoice: " << totalinvoice  << endl;


return 0;
}
