
#include<iostream>
using namespace std;

class Car
{
    char* model;
    char* country;
    char* color;
    int year;
    double price;
public:
    Car()
    {
        model = nullptr;
        country = nullptr;
        color = nullptr;
        year = 0;
        price = 0;
    }
    Car(const char* Model, const char* Country, const char* Color, int Year, double Price)
    {
        model = new char[strlen(Model) + 1];
        strcpy(model, Model);
        country = new char[strlen(Country) + 1];
        strcpy(country, Country);
        color = new char[strlen(Color) + 1];
        strcpy(color, Color);
        year = Year;
        price = Price;
    }
    Car(const Car& obj)
    {
        model = new char[strlen(obj.model) + 1];
        strcpy(model, obj.model);
        country = new char[strlen(obj.country) + 1];
        strcpy(country, obj.country);
        color = new char[strlen(obj.color) + 1];
        strcpy(color, obj.color);
        year = obj.year;
        price = obj.price;
        cout << "Constructor\n" << endl;;
    }
    void Output()
    {
        cout << "Model: " << model << endl
            << "Strana: " << country << endl
            << "Color: " << color << endl
            << "Year: " << year << endl
            << "Price: " << price << endl << endl;
    }
    ~Car()
    {
        cout << "Destruct\n";
        delete[] model;
        delete[] country;
        delete[] color;
    }
};

int main()
{
    Car a("Porshe", "Germany", "Blue", 2020, 200000);
    a.Output();
    Car b = a;
    b.Output();

}