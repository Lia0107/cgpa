#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(void)
{
    int code, num, opt;
    float total_price = 0;//subtotal of the products
    char ask;
    float km, delivery_price;
    delivery_price = 50;
    float price[4] = { 100,350,400,637.5 };
start:
    cout << "What option do you want to choose:\nOption 1: Product Details & Purchase Product\nOption 2: Calculate the delivery charges\nOption 3: Calculate total pay amount\nOption 4: Exit\nOption: ";
    cin >> opt;
    switch (opt)
    {
    case 1:

    retry:
        cout << "Product Code" << "\t" << "|Product Description|" << "\t\t" << "|Retail Price(RM)|" << "\t\t\t" << "|Special Discount|" << endl;
        cout << "----------------|-------------------|-----------|----------------|----------------------|----------------|" << endl;
        cout << "101" << "\t\t" << "|Wall Scrapper      |" << "\t\t" << "|      100       |" << "\t\t\t" << "|      -         |" << endl;
        cout << "202" << "\t\t" << "|Tiles Waxes        |" << "\t\t" << "|      350       |" << "\t\t\t" << "|      -         |" << endl;
        cout << "303" << "\t\t" << "|Mud/Tar Remover    |" << "\t\t" << "|      500       |" << "\t\t\t" << "|  20% Discount  |" << endl;
        cout << "404" << "\t\t" << "|Dry Blower         |" << "\t\t" << "|      850       |" << "\t\t\t" << "|  25% Discount  |" << endl;

        cout << "Enter the product code you would like to puchase: ";cin >> code;
        switch (code)
        {
        case 101:
            cout << "Enter the quantity you want to buy: ";cin >> num;
            total_price += price[0] * num;
            cout << "Do you want to buy something else ? \nPlease key in(y/n)\n(y=yes/n=no): ";cin >> ask;
            if (ask == 'y')
            {
                system("cls");
                goto retry;
            }
            if (ask == 'n')
            {
                goto end;
            }
            else
            {
                cout << "\nDo you want to try again ? \nPlease key in(y/n)\n(y=yes/n=no): ";cin >> ask;
                if (ask == 'y')
                {
                    goto retry;
                }
                if (ask == 'n')
                {
                    goto end;
                }
                else
                {
                    cout << "You've leave the system";
                }
            }
            break;
        case 202:
            cout << "Enter the quantity you want to buy: ";cin >> num;
            total_price += price[1] * num;
            cout << "Do you want to buy something else ? \nPlease key in(y/n)\n(y=yes/n=no): ";cin >> ask;
            if (ask == 'y')
            {
                system("cls");
                goto retry;
            }
            if (ask == 'n')
            {
                goto end;
            }
            else
            {
                cout << "\nDo you want to try again ? \nPlease key in(y/n): ";cin >> ask;
                if (ask == 'y')
                {
                    goto retry;
                }
                if (ask == 'n')
                {
                    goto end;
                }
                else
                {
                    cout << "You've leave the system";
                }
            }
            break;
        case 303:
            cout << "Enter the quantity you want to buy: ";cin >> num;
            total_price += price[2] * num;
            cout << "Do you want to buy something else ? \nPlease key in(y/n)\n(y=yes/n=no): ";cin >> ask;
            if (ask == 'y')
            {
                system("cls");
                goto retry;
            }
            if (ask == 'n')
            {
                goto end;
            }
            else
            {
                cout << "\nDo you want to try again ? \nPlease key in(y/n): ";cin >> ask;
                if (ask == 'y')
                {
                    goto retry;
                }
                if (ask == 'n')
                {
                    goto end;
                }
                else
                {
                    cout << "You've leave the system";
                }
            }
            break;
        case 404:
            cout << "Enter the quantity you want to buy: ";cin >> num;
            total_price += price[3] * num;
            cout << "Do you want to buy something else ? \nPlease key in(y/n)\n(y=yes/n=no):  ";cin >> ask;
            if (ask == 'y')
            {
                system("cls");
                goto retry;
            }
            if (ask == 'n')
            {
                goto end;
            }
            else
            {
                cout << "\nDo you want to try again ? \nPlease key in(y/n): ";cin >> ask;
                if (ask == 'y')
                {
                    goto retry;
                }
                if (ask == 'n')
                {
                    goto end;
                }
                else
                {
                    cout << "You've leave the system";
                }
            }
            break;
        default:cout << "invalid input";
            cout << "\nDo you want to try again ? \nPlease key in(y/n): ";cin >> ask;
            if (ask == 'y')
            {
                goto retry;
            }
            if (ask == 'n')
            {
                goto end;
            }
            else
            {
                cout << "You've leave the system";
            }
            break;

        }
        break;
    case 2:

        cout << "The delivery distance:";
        cin >> km;

        if (km <= 30)
        {
            delivery_price = 50;
        }

        else if (km <= 100)
        {
            delivery_price = 50 + ((km - 30) * 3);
        }
        else
        {
            cout << "It exceeded delivery distance" << endl;
            cout << "Do you want to enter again?(Y/N) : ";cin >> ask;
            if (ask == 'Y')
            {
                goto retry;
            }
            else
            {
                cout << "WELCOME!!!!";
                break;
            }

            break;
        }
        cout << "Your delivery fee is: " << delivery_price << "\nDistance(" << km << "Km)\n";
        cout << "Do you want to purchase now? please enter option 1:  \nIf you want to leave,Please enter 4\nOption: ";
        cin >> opt;
        if (opt == 1)
        {
            goto start;
        }
        else
        {
            cout << "You've leave the system";
        }
        break;
    case 3:
    {
        cout << "If you want to buy, please enter (1)/If you want to leave,please enter 2: ";
        cin >> opt;

        if (opt == 1)
        {
            goto retry;
        }

        else
        {
            cout << "Welcome you've leave the website";
        }
    }
    break;

    case 4:
    {
        cout << "Welcome, you've leave the website";
    }
    break;

    default:
    {
        cout << "Invalid enter\nDo you want to try again?: (y/n)";
        cin >> ask;
        if (ask == 'y')
        {
            goto start;
        }
        else
        {
            cout << "you've leave the system";
        }

    }
    break;

end:
    system("cls");
    cout << "Your total price is :" << total_price;
ctn:
    cout << "\nThe delivery distance:";
    cin >> km;

    if (km <= 30)
    {
        delivery_price = 50;
    }

    else if (km <= 100)
    {
        delivery_price = 50 + ((km - 30) * 3);
    }
    else
    {
        cout << "It exceeded delivery distance" << endl;
        cout << "Do you want to enter your delivery distance again?(Y/N) : ";cin >> ask;
        if (ask == 'Y')
        {
            goto ctn;
        }
        else
        {
            cout << "WELCOME!!!!";
            break;
        }
    }
    cout << "Your delivery fee is: " << delivery_price << "\nDistance(" << km << "Km)\n";
    cout << "Do you want to pay now? Please enter option 3:  \nIf you want to leave,Please enter 4\nOption: ";
    cin >> opt;
    if (opt == 3)
    {
        float total_bill = total_price + delivery_price;
        float a = 110, b = 100;
        float grand_total = (total_price + delivery_price) * a / b;
        cout << "WELCOME!!\n";
        cout << "Your subtotal price is :" << total_price; //subtotal
        cout << "\nYour delivery fee is: " << delivery_price << "\nDistance(" << km << "Km)\n";//delivery fee
        cout << "\nYour total bill is: " << total_bill;//total bill= product + delivery fee
        cout << "\nYour grand total is: " << grand_total;
    }
    else
    {
        cout << "WELCOME!!!";
    }
    }
}
