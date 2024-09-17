#include "recruit.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// constructs/initialize
Recruit::Recruit()
{
    FirstName = "none";
    LastName = "none";
    Position = "none";
    City = "none";
    State = "none";
    Highschool = "none";
    Height = "none";
    Weight = 0;
    Stars = 0;
    Grade = 0;
    School = "none";
}

Recruit::Recruit(string firstname, string lastname, string position, string city, string state, string highschool, string height, int weight, int stars, int grade, string school )
{
    FirstName = firstname;
    LastName = lastname;
    Position = position;
    City = city;
    State = state;
    Highschool = highschool;
    Height = height;
    Weight = weight;
    Stars = stars;
    Grade = grade;
    School = school;
}

// copy
Recruit::Recruit(const Recruit & player)
{
    FirstName = player.FirstName;
    LastName = player.LastName;
    Position = player.Position;
    City = player.City;
    State = player.State;
    Highschool = player.Highschool;
    Height = player.Height;
    Weight = player.Weight;
    Stars = player.Stars;
    Grade = player.Grade;
    School = player.School;
}

// destructs
Recruit::~Recruit()
{
}


string Recruit::getFirstName()
{
    return FirstName;
}

string Recruit::getLastName()
{
    return LastName;
}

string Recruit::getPosition()
{
    return Position;
}

string Recruit::getCity()
{
    return City;
}

string Recruit::getState()
{
    return State;
}

string Recruit::getHighschool()
{
    return Highschool;
}

string Recruit::getHeight()
{
    return Height;
}

int Recruit::getWeight()
{
    return Weight;
}

int Recruit::getStars()
{
    return Stars;
}

int Recruit::getGrade()
{
    return Grade;
}

string Recruit::getSchool()
{
    return School;
}
//---------------------------------------------
// recall: do error checking here
void Recruit::setFirstName(string firstname)
{
    FirstName = firstname;
}

void Recruit::setLastName(string lastname)
{
    LastName = lastname;
}

void Recruit::setPosition(string position)
{
    Position = position;
}

void Recruit::setCity(string city)
{
    City = city;
}

void Recruit::setState(string state)
{
    State = state;
}

void Recruit::setHighschool(string highschool)
{
    Highschool = highschool;
}

void Recruit::setHeight(string height)
{
    Height = height;
}

void Recruit::setWeight(int weight)
{
    if (weight > 360 || weight < 100)
        cout << "Try again!";
    else
        Weight = weight;
}

void Recruit::setStars(int stars)
{
    if (stars > 5 || stars < 0)
        cout << "Try again!";
    else
        Stars = stars;
}

void Recruit::setGrade(int grade)
{
    if (grade > 100 || grade < 0)
        cout << "Try again! ";
    else
        Grade = grade;
}

void Recruit::setSchool(string school)
{
    School = school;
}

// set error checking here too
void Recruit::read()
{
    cout << "Enter first name:  " << endl;
    cin.ignore();
    getline(cin, FirstName);
    setFirstName(FirstName);

    cout << "Enter last name:   " << endl;
    getline(cin, LastName);
    setLastName(LastName);

    cout << "Enter position:    " << endl;
    getline(cin, Position);
    setPosition(Position);

    cout << "Enter city:    " << endl;
    getline(cin, City);
    setCity(City);

    cout << "Enter state:   " << endl;
    getline(cin, State);
    setState(State);

    cout << "Enter high school: " << endl;
    getline(cin, Highschool);
    setHighschool(Highschool);

    cout << "Enter height (#'##\"):  " << endl;
    getline(cin, Height);
    setHeight(Height);

    do
    {
        cout << "Enter weight (100-360 lbs): " << endl;
        cin >> Weight;
        setWeight(Weight);
    } while(Weight < 100 || Weight > 360);

    do 
    {
        cout << "Enter stars (0-5): " << endl;
        cin >> Stars;
        setStars(Stars);
    } while(Stars < 0 || Stars > 5);

    do 
    {
        cout << "Enter grade (0-100): " << endl;
        cin >> Grade;
        setGrade(Grade);
    }while(Grade < 0 || Grade > 100);

    cin.ignore();

    cout << "Enter school: " << endl;
    getline(cin,School);
    setSchool(School);

}

// final print for all the players
void Recruit::print()
{
    cout << endl << "First name: " << FirstName << " "  << LastName
         << endl << "Position: " << Position
         << endl << "Hometown: " << City << ", " << State
         << endl << "Highschool: " << Highschool 
         << endl << "Height: " << Height 
         << endl << "Weight: " << Weight << " lbs"
         << endl << "Stars: " << Stars << "/5"
         << endl << "Grade: " << Grade
         << endl << "School: " << School << endl << endl;

}

void Recruit::read_txt(ifstream &input)
{
    if(input.is_open())
    {
        t
    }
}
