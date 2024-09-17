#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


class Recruit
{
    public:
    // all constructors + destructor
    Recruit();
    Recruit(string FirstName, string LastName, string Position, string City, string State, string Highschool, string Height, int Weight, int Stars, int Grade, string School );
    Recruit(const Recruit & player);
    ~Recruit();

    // all gets and sets
    string getFirstName();
    string getLastName();
    string getPosition();
    string getCity();
    string getState();
    string getHighschool();
    string getHeight();
    int getWeight();
    int getStars();
    int getGrade();
    string getSchool();

    void setFirstName(string firstname);
    void setLastName(string lastname);
    void setPosition(string position);
    void setCity(string city);
    void setState(string state);
    void setHighschool(string highschool);
    void setHeight(string height);
    void setWeight(int weight);
    void setStars(int stars);
    void setGrade(int grade);
    void setSchool(string school);

    void read();
    void print();
    void read_txt(ifstream &input);
    void print_txt(ofstream &output);

    private:
    string FirstName;
    string LastName;
    string Position;
    string City;
    string State;
    string Highschool;
    string Height;
    int Weight;
    int Stars;
    int Grade;
    string School;
};
