#include <iostream>
using namespace std;

class Property
{
protected:
    int propertyID[100];
    string property_type[100];
    string location[100];
    double price[100];
    string contact[100];
    int PropertyCount = 0;

public:
    void AddProperty()
    {
        while (PropertyCount < 2000)
        {
            cout << "Enter Property ID :: ";
            cin >> propertyID[PropertyCount];
            cout << "Enter Property Type :: ";
            cin.ignore();
            getline(cin, property_type[PropertyCount]);
            cout << "Enter Location :: ";
            getline(cin, location[PropertyCount]);
            cout << "Enter Price: $";
            cin >> price[PropertyCount];
            cout << "Enter contact no. ::";
            cin >> contact[PropertyCount];
            PropertyCount++;

            char more;
            cout << "Do you want to add another property? (y/n) :: ";
            cin >> more;

            while (more != 'y' && more != 'Y' && more != 'n' && more != 'N')
            {
                cout << "Invalid input. Please enter (y/n) :: ";
                cin >> more;
            }

            if (more != 'y' && more != 'Y')
            {
                break;
            }
        }
        cout << endl;
        cout << "| Your details have been stored! |" << endl;
    }

    void DisplayProperty()
    {
        if (PropertyCount == 0)
        {
            cout << PropertyCount << endl;
            cout << "| No properties to display. |" << endl;
            return;
        }
        for (int i = 0; i < PropertyCount; i++)
        {
            cout << endl;
            cout << "|------------------------" << endl;
            cout << "| ---> Property ID :: " << propertyID[i] << endl;
            cout << "| ---> Property type :: " << property_type[i] << endl;
            cout << "| ---> Location :: " << location[i] << endl;
            cout << "| ---> Price: $" << price[i] << endl;
            cout << "| ---> Contact Number :: " << contact[i] << endl;
            cout << "|------------------------" << endl;
        }
    }
};

class User
{
protected:
    int id;
    string UserName;
    string Password;

public:
    virtual void login() = 0;
};

class Seller : virtual public User
{
protected:
    Property *property;

public:
    Seller() {}
    Seller(Property *prop) : property(prop) {}

    void SellerLogin(string sellername[], string sellerpassword[], int seller_count)
    {
        cout << endl;
        cout << "Seller Login:" << endl;
        cout << "Enter UserName: ";
        cin >> UserName;
        cout << "Enter Password: ";
        cin >> Password;

        bool valid = false;
        for (int i = 0; i < seller_count; i++)
        {
            while (sellername[i] != UserName && sellerpassword[i] != Password)
            {
                cout << "Invalid credentials. Please try again." << endl;
                cout << "Enter UserName: ";
                cin >> UserName;
                cout << "Enter Password: ";
                cin >> Password;
            }

            if (sellername[i] == UserName && sellerpassword[i] == Password)
            {
                valid = true;
                break;
            }
        }

        if (valid)
        {
            cout << "| Login Successful! |" << endl;
            char condition;
            cout << "Do you want to add property for sale? (y/n): ";
            cin >> condition;

            while (condition != 'y' && condition != 'Y' && condition != 'n' && condition != 'N')
            {
                cout << "Invalid input. Please enter (y/n): ";
                cin >> condition;
            }

            if (condition == 'y' || condition == 'Y')
            {
                system("cls");
                property->AddProperty();
            }
            else
            {
                cout << "| Thank you for visiting! |" << endl;
            }
        }
    }
};

class Buyer : virtual public User, virtual public Property
{
protected:
    Property *property;
    string NewBuyerName[100];
    string NewBuyerPassword[100];
    int buyer_count = 0;

public:
    Buyer(Property *prop) : property(prop) {}

    void BuyerSignUp()
    {
        while (true)
        {
            cout << endl;
            cout << "Enter New Buyer Name: ";
            cin.ignore();
            getline(cin, NewBuyerName[buyer_count]);
            cout << "Enter New Buyer Password: ";
            cin >> NewBuyerPassword[buyer_count];
            buyer_count++;
            cout << endl;
            cout << "Do you want to create another account? (y/n): ";
            char condition;
            cin >> condition;

            while (condition != 'y' && condition != 'Y' && condition != 'n' && condition != 'N')
            {
                cout << "Invalid input. Please enter (y/n): ";
                cin >> condition;
            }

            if (condition != 'y' && condition != 'Y')
            {
                cout << "Your details of Buyer SignUp have been stored you can login now with your Buyer details!" << endl;
                cout << endl;
                break;
            }
        }
    }

    void login() override
    {
        cout << endl;
        cout << "Buyer Login:" << endl;
        cout << "Enter UserName: ";
        cin >> UserName;
        cout << "Enter Password: ";
        cin >> Password;
        bool valid = false;
        for (int i = 0; i < buyer_count; i++)
        {
            if (NewBuyerName[i] == UserName && NewBuyerPassword[i] == Password)
            {
                valid = true;
                cout << endl;
                cout << "Welcome " << NewBuyerName[i] << "!" << endl;
                cout << endl;
                cout << "Do you want to check properties for sale? (y/n): ";
                char buyer_condition;
                cin >> buyer_condition;

                while (buyer_condition != 'y' && buyer_condition != 'Y' && buyer_condition != 'n' && buyer_condition != 'N')
                {
                    cout << "Invalid input. Please enter (y/n): ";
                    cin >> buyer_condition;
                }

                if (buyer_condition == 'y' || buyer_condition == 'Y')
                {
                    system("cls");
                    property->DisplayProperty();
                }
                else
                {
                    cout << endl;
                    cout << "Thank you for visiting!" << endl;
                }
                break;
            }
        }

        if (!valid)
        {
            cout << endl;
            cout << "Invalid UserName or Password! Try again." << endl;
            login();
        }
    }
};

class Admin : public Seller, public Buyer, virtual public Property
{
private:
    Property *property;
    string AdminUserName = "admin";
    string AdminPassword = "admin";
    string sellername[100];
    string sellerpassword[100];
    int seller_count = 0;

public:
    Admin(Property *prop) : Seller(prop), Buyer(prop) {}

    void SellerSignUp()
    {
        while (true)
        {
            cout << endl;
            cout << "Enter New Seller Name: ";
            cin.ignore();
            getline(cin, sellername[seller_count]);
            cout << "Enter New Seller Password: ";
            getline(cin, sellerpassword[seller_count]);
            seller_count++;
            cout << endl;
            cout << "Seller Added successfully!" << endl;
            cout << endl;
            char more;
            cout << "Do you want to add more sellers? (y/n): ";
            cin >> more;

            while (more != 'y' && more != 'Y' && more != 'n' && more != 'N')
            {
                cout << "Invalid input. Please enter (y/n): ";
                cin >> more;
            }

            if (more == 'n' || more == 'N')
            {
                break;
            }
        }
        cout << endl;
        cout << "Your details have been stored now you can login with your seller details!" << endl;
    }

    void DisplaySellers()
    {
        if (seller_count == 0)
        {
            cout << "No sellers to display." << endl;
            return;
        }
        for (int i = 0; i < seller_count; i++)
        {
            cout << "Seller Name: " << sellername[i] << endl;
            cout << "Seller Password: " << sellerpassword[i] << endl;
        }
    }

    void login() override
    {
        cout << "Admin Login:" << endl;
        cout << "Enter UserName: ";
        cin >> UserName;
        cout << "Enter Password: ";
        cin >> Password;
        while (AdminUserName != UserName || AdminPassword != Password)
        {
            cout << "Invalid UserName or Password!" << endl;
            cout << "Enter UserName: ";
            cin >> UserName;
            cout << "Enter Password: ";
            cin >> Password;
        }
        if (UserName == AdminUserName && Password == AdminPassword)
        {
            cout << endl;
            cout << "Welcome *Admin* Login Successful!" << endl;
            cout << endl;
            int condition;
            cout << "Enter 1 to add seller :: " << endl;
            cout << "Enter 2 to add property :: " << endl;
            cout << "Enter 3 to view property :: " << endl;
            cout << "Enter 4 to view sellers :: " << endl;
            cout << endl;
            cout << "Enter your choice :: ";
            cin >> condition;
            switch (condition)
            {
            case 1:
                SellerSignUp();
                break;
            case 2:
                AddProperty();
                break;
            case 3:
                DisplayProperty();
                break;
            case 4:
                DisplaySellers();
                break;
            default:
                cout << "Invalid Option! Try Again!" << endl;
            }
        }
    }

    void sellerLogin()
    {
        Seller::SellerLogin(sellername, sellerpassword, seller_count);
    }
};

int main()
{
    cout << endl;
    cout << "\t -------> WELCOME TO REAL ESTATE MANAGEMENT SYSTEM <-------" << endl;
    cout << endl;

    Property property;
    int condition = 0;

    Buyer buy1(&property);
    Admin admin(&property);

    while (condition != 4)
    {
        cout << "\t \t \t|----------------------------|" << endl;
        cout << "\t \t \t| Press 1 for Buyer Options! |" << endl;
        cout << "\t \t \t| Press 2 for Seller Options!|" << endl;
        cout << "\t \t \t| Press 3 for Admin Options! |" << endl;
        cout << "\t \t \t| Press 4 to EXIT!           |" << endl;
        cout << "\t \t \t|----------------------------|" << endl;
        cout << endl;
        cout << "Enter Your Choice :: ";
        cin >> condition;

        while (condition != 1 && condition != 2 && condition != 3 && condition != 4)
        {
            cout << endl;
            cout << "Invalid Option! Please try again :: ";
            cin >> condition;
        }

        switch (condition)
        {
        case 1:
            system("CLS");
            cout << "Press 1 for Buyer Sign Up and Press 2 For Buyer Login :: ";
            cin >> condition;
            switch (condition)
            {
            case 1:
                buy1.BuyerSignUp();
                break;
            case 2:
                buy1.login();
                break;
            }
            break;
        case 2:
            system("CLS");
            cout << "Press 1 For Seller Sign Up and Press 2 For Seller Login :: ";
            cin >> condition;

            switch (condition)
            {
            case 1:
                admin.SellerSignUp();
                break;
            case 2:
                admin.sellerLogin();
                break;
            }
            break;
        case 3:
            system("CLS");
            admin.login();
            break;
        case 4:
            system("CLS");
            cout << endl;
            cout << "Exiting Real Estate Management system!" << endl;
            cout << endl;
            break;
        default:
            cout << "Invalid option! Try again!" << endl;
        }
    }

    return 0;
}