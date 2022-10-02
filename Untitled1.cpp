#include<iostream>
#include<fstream> // use for file handling operation
#include<iomanip> // use for floating point value

using namespace std;

void mainMenu();

class Management
{
    public:
        Management()
        {
            mainMenu();
        }

};

class Details
{
    public:
        static string name,gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information()
        {
            cout<<"\nEnter the customer ID:";
            cin>>cId;
            cout<<"\nEnter the name :";
            cin>>name;
            cout<<"\nEnter the age :";
            cin>>age;
            cout<<"\n Address :";
            cin>>add;
            cout<<"\n Gender :";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;
        }

};

// to use details in other class also
int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charge;

        void flights()
        {
            string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};

            for(int a=0;a<6;a++)
            {
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Airlines!"<<endl;
            cout<<"Press the number of the country of which you want to book the flight:";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    {
                        cout<<"_______________Welcome to Dubai Emirates__4___________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. DUB - 498"<<endl;
                        cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
                        cout<<"2. DUB - 678"<<endl;
                        cout<<"\t08-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
                        cout<<"3. DUB - 558"<<endl;
                        cout<<"\t08-01-2022 11:00AM 11hrs Rs. 9000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;
                        if(choice1==1)
                        {
                            charge=14000;
                            cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==2)
                        {
                            charge=10000;
                            cout<<"\nYou have successfully booked the flight DUB - 678"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==3)
                        {
                            charge=9000;
                            cout<<"\nYou have successfully booked the flight DUB - 558"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }

                    }

                    case 2:
                    {
                        cout<<"_______________Welcome to Canadian Airlines_____________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. CA - 198"<<endl;
                        cout<<"\t09-01-2022 2:00AM 15hrs Rs. 34000"<<endl;
                        cout<<"2. CA - 378"<<endl;
                        cout<<"\t011-01-2022 3:00AM 12hrs Rs. 29000"<<endl;
                        cout<<"3. CA - 478"<<endl;
                        cout<<"\t014-01-2022 12:00AM 21hrs Rs. 40000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;
                        if(choice1==1)
                        {
                            charge=34000;
                            cout<<"\nYou have successfully booked the flight CA - 198"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==2)
                        {
                            charge=29000;
                            cout<<"\nYou have successfully booked the flight CA - 378"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==3)
                        {
                            charge=40000;
                            cout<<"\nYou have successfully booked the flight CA - 478"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }

                    }

                    case 3:
                    {
                        cout<<"_______________Welcome to UK Airways_____________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. UK - 798"<<endl;
                        cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;


                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;
                        if(choice1==1)
                        {
                            charge=44000;
                            cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }

                    }

                    case 4:
                    {
                        cout<<"_______________Welcome to US Airways______________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. US - 588"<<endl;
                        cout<<"\t19-02-2022 9:00AM 23hrs Rs. 36000"<<endl;
                        cout<<"2. US - 178"<<endl;
                        cout<<"\t22-02-2022 4:00AM 22hrs Rs. 39000"<<endl;
                        cout<<"3. US - 338"<<endl;
                        cout<<"\t023-01-2022 11:00AM 21hrs Rs. 38000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;
                        if(choice1==1)
                        {
                            charge=36000;
                            cout<<"\nYou have successfully booked the flight US - 588"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==2)
                        {
                            charge=39000;
                            cout<<"\nYou have successfully booked the flight US - 178"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==3)
                        {
                            charge=38000;
                            cout<<"\nYou have successfully booked the flight US - 338"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }

                    }


                    case 5:
                    {
                        cout<<"_______________Welcome to Australian Airlines___________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. AS - 718"<<endl;
                        cout<<"\t12-01-2022 10:00AM 14hrs Rs. 40000"<<endl;
                        cout<<"2. AS - 148"<<endl;
                        cout<<"\t09-01-2022 3:00AM 12hrs Rs. 38000"<<endl;
                        cout<<"3. AS - 690"<<endl;
                        cout<<"\t11-01-2022 2:00AM 11hrs Rs. 41000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;
                        if(choice1==1)
                        {
                            charge=40000;
                            cout<<"\nYou have successfully booked the flight AS - 718"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==2)
                        {
                            charge=38000;
                            cout<<"\nYou have successfully booked the flight AS - 148"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==3)
                        {
                            charge=41000;
                            cout<<"\nYou have successfully booked the flight DUB - 690"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }

                    }


                    case 6:
                    {
                        cout<<"_______________Welcome to European Airlines___________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;

                        cout<<"1. EU - 778"<<endl;
                        cout<<"\t02-01-2022 2:00AM 18hrs Rs. 36000"<<endl;
                        cout<<"2. EU - 958"<<endl;
                        cout<<"\t03-01-2022 6:00AM 19hrs Rs. 37000"<<endl;
                        cout<<"3. EU - 508"<<endl;
                        cout<<"\t12-01-2022 11:00AM 11hrs Rs. 31000"<<endl;

                        cout<<"\nSelect the flight you want to book :";
                        cin>>choice1;
                        if(choice1==1)
                        {
                            charge=36000;
                            cout<<"\nYou have successfully booked the flight EU - 778"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1==2)
                        {
                            charge=370000;
                            cout<<"\nYou have successfully booked the flight EU - 958"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==3)
                        {
                            charge=31000;
                            cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                            cout<<"Invalid input, shifting to the previous menu"<<endl;
                            flights();
                        }

                        cout<<"Press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }

                    }

                    default:
                        {
                            cout<<"Invalid input, Shifting you to the main menu !"<<endl;
                            mainMenu();
                            break;
                        }


            }

        }

};

float registration::charge;
int registration::choice;

class ticket : public registration,Details
{
    public:
        void bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"__________XYZ Airlines____________"<<endl;
                outf<<"____________Ticket______________"<<endl;
                outf<<"________________________________"<<endl;

                outf<<"Customer ID:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                outf<<"\tDescription"<<endl<<endl;

                if(registration::choice==1)
                {
                    destination="Dubai";
                }

                else if(registration::choice==2)
                {
                    destination="Canada";
                }

                else if(registration::choice==3)
                {
                    destination="UK";
                }

                else if(registration::choice==4)
                {
                    destination="USA";
                }

                else if(registration::choice==5)
                {
                    destination="Australia";
                }

                else if(registration::choice==6)
                {
                    destination="Europe";
                }

                cout<<"Destination\t\t"<<destination<<endl;
                cout<<"Flight cost :\t\t"<<registration::charge<<endl;

            }
            outf.close();

        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }

};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t         VIP Airlines\n"<<endl;
    cout<<"\t_________Main Menu__________"<<endl;

    cout<<"\t_________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration        \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges         \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t|" <<endl;
    cout<<"\t_________________________________________"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
            {
                cout<<"_________Customers_________\n"<<endl;
                d.information();
                cout<<"Press 1 to go back to Main menu ";
                cin>>back;

                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
                break;
            }

        case 2:
            {
                cout<<"______Book a flight using this system_______\n"<<endl;
                r.flights();
                break;
            }

        case 3:
            {
                cout<<"_____GET YOUR TICKET_____\n"<<endl;
                t.bill();

                cout<<"Your ticket is printed , you can collect it \n"<<endl;
                cout<<"Press 1 to display your ticket ";
                cin>>back;

                    if(back==1)
                    {
                        t.dispBill();
                        cout<<"Press any key to go back to main menu:";
                        cin>>back;
                        if(back==1)
                        {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                    else
                    {
                        mainMenu();
                    }
                    break;
            }

        case 4:
            {
                cout<<"\n\n\t________Thank-You_______"<<endl;
                break;
            }

        default:
            {
                cout<<"Invalid input, Please try again!\n"<<endl;
                mainMenu();
                break;
            }
    }

}

int main()
{

    Management Mobj;
    return 0;

}
