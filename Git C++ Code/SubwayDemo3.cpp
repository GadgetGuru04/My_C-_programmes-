#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Line
{
public:
    string name;
    struct StationStruct
    {
        string name;
        int numberOfPlatforms;
        string isAccessible;
    };

    StationStruct stations[50];
    int currentNoOfStations;

    Line()
    {
        this->name = "N.A.";
        for (int i = 0; i < 50; i++)
        {
            this->stations[i].name = "N.A.";
            this->stations[i].numberOfPlatforms = 0;
            this->stations[i].isAccessible = "N.A.";
        }
        this->currentNoOfStations = 0;
    }

    void setData(string name)
    {
        this->name = name;
        for (int i = 0; i < 50; i++)
        {
            this->stations[i].name = "N.A.";
            this->stations[i].numberOfPlatforms = 0;
            this->stations[i].isAccessible = "N.A.";
        }
        this->currentNoOfStations = 0;
    }

    void displayStations()
    {
        int i = 0;

        while (this->stations[i].name != "N.A.")
        {
            for (int j = 0; j < 5 && this->stations[i].name != "N.A."; j++)
            {
                cout << setw(18) << this->stations[i++].name << "  ";
            }
            cout << endl;
        }
    }

    void addStation(string stationName, int stationPlatformsNo, string stationDisabledFriendly)
    {

        this->stations[currentNoOfStations].name = stationName;
        this->stations[currentNoOfStations].numberOfPlatforms = stationPlatformsNo;
        this->stations[currentNoOfStations].isAccessible = stationDisabledFriendly;
        currentNoOfStations++;
    }

    void removeStation(string stationName)
    {
        int i = 0;

        while (this->stations[i].name != stationName)
            i++;

        this->stations[i].name = "N.A.";
        for (int j = i; j < currentNoOfStations; j++)
        {
            this->stations[j] = this->stations[j + 1];
        }
        currentNoOfStations--;
    }

    string accessLineName()
    {
        return this->name;
    }
} Line[50];

class SubwaySystem
{
public:
    string lines[50];
    int currentNoOfLines;

    void addLine(string lineName)
    {
        for (int i = 0; i < 50; i++)
        {
            if (Line[i].name == lineName)
            {
                cout << endl
                     << "Line with this Name already Exists !" << endl;
                return;
            }
        }

        int i = 0;
        while (Line[i].accessLineName() != "N.A.")
            i++;

        Line[i].setData(lineName);
        cout << endl
             << "Line Added Successfully !" << endl;
    }

    void removeLine(string lineName)
    {
        int i = 0;
        while (lineName != Line[i].accessLineName())
        {
            i++;
            if (Line[i].accessLineName() == "N.A.")
            {
                cout << endl
                     << "Line Not Found !" << endl;
                return;
            }
        }
        for (; Line[i + 1].accessLineName() != "N.A."; i++)
        {
            Line[i] = Line[i + 1];
        }
        if (Line[i + 1].accessLineName() == "N.A.")
            Line[i] = Line[i + 1];

        currentNoOfLines--;
    }

} SubwaySystem;

void displayAllLines()
{
    int i = 0;
    int count = 1;
    while (Line[i].accessLineName() != "N.A.")
    {
        for (int j = 0; j < 5 && Line[i].accessLineName() != "N.A."; j++)
        {
            cout << endl
                 << count++ << "." << Line[i].accessLineName() << endl
                 << "(";
            for (int j = 0; j < 50; j++)
            {
                if (Line[i].stations[j].name == "N.A.")
                    break;
                cout << "["
                     << " Station Name : " << Line[i].stations[j].name << endl
                     << "No. of Platforms : " << Line[i].stations[j].numberOfPlatforms
                     << endl
                     << "Is Accessible by Disabled Persons? : " << Line[i].stations[j].isAccessible
                     << " ]"
                     << "," << endl
                     << endl;
            }
            cout << ") ";
            i++;
        }
    }
}

void displayAll()
{
    cout << endl;
    displayAllLines();
    cout << endl;
}

int main()
{
    string lineName, stationName, stationDisabledFriendly;
    int stationPlatformsNo, numberOfPlatform, ctr = 10, ctrline = 10;
    bool isAccessible;
    cout << endl
         << endl
         << "*********************************************************************" << endl
         << "Practical Assignment - 2 " << endl
         << "OOPs WITH C++" << endl
         << "NAME : ADIL DYER" << endl
         << "ENROLLMENT NO: 04" << endl
         << "*********************************************************************" << endl;

    while (ctr != 0)
    {
        cout << endl;
        cout << "Welcome to the Subway Management System" << endl;
        cout << setw(4) << left << "1." << setw(25) << left << "Manage Lines" << endl;
        cout << setw(4) << left << "2." << setw(25) << left << "Display All Lines and Stations" << endl;
        cout << setw(4) << left << "0." << setw(25) << left << "EXIT" << endl;
        cout << "\n\nEnter the corrosponding number : ";
        cin >> ctr;

        switch (ctr)
        {
        case 1:
            cout << setw(4) << left << "1." << setw(25) << left << "Add New Line" << endl;
            cout << setw(4) << left << "2." << setw(25) << left << "Remove Line" << endl;
            cout << setw(4) << left << "3." << setw(25) << left << "Add Station To a Line" << endl;
            cout << setw(4) << left << "4." << setw(25) << left << "Remove station from a line" << endl;
            cout << setw(4) << left << "5." << setw(25) << left << "List all the stations on a line" << endl;
            cout << setw(4) << left << "6." << setw(25) << left << "List all the lines in the system" << endl;
            cout << setw(4) << left << "0." << setw(25) << left << "Go Back to previous menu" << endl;
            cout << "\n\nEnter the corrosponding number : ";
            cin >> ctrline;

            switch (ctrline)
            {
            case 1:

                cout << "Please enter the name for new line : ";
                cin >> lineName;
                SubwaySystem.addLine(lineName);
                break;

            case 2:

                cout << "Please enter the name for the line to be removed : ";
                cin >> lineName;
                SubwaySystem.removeLine(lineName);

                break;

            case 3:

                cout << "Please enter the Name for the line in which station is to be added : ";
                cin >> lineName;
                for (int i = 0; i < 50; i++)
                {
                    if (Line[i].accessLineName() == lineName)
                    {
                        cout << "Please enter the Name , No. of Platforms, Status of is Disabled Friendly Station(Y/N) for the station to be added : ";
                        cin >> stationName >> stationPlatformsNo >> stationDisabledFriendly;
                        Line[i].addStation(stationName, stationPlatformsNo, stationDisabledFriendly);
                        break;
                    }
                    else if (i == 49)
                    {
                        cout << endl;
                        cout << "Please enter a valid line name." << endl;
                    }
                }

                break;

            case 4:

                cout << "Please enter the Name for the line from which station is to be removed : ";
                cin >> lineName;
                for (int i = 0; i < 50; i++)
                {
                    if (Line[i].accessLineName() == lineName)
                    {
                        cout << "Please enter the Name for the station to be removed : ";
                        cin >> stationName;
                        for (int i = 0; i < 50; i++)
                        {
                            if (Line[i].name == lineName)
                                Line[i].removeStation(stationName);
                        }
                    }
                    else if (i == 49)
                    {
                        cout << endl;
                        cout << "Please enter a valid line name." << endl;
                    }
                }

                break;

            case 5:

                cout << "Please enter the name of the line : ";
                cin >> lineName;
                cout << endl
                     << "//////////////////////" << endl;
                for (int i = 0; i < 50; i++)
                {
                    if (Line[i].name == lineName)
                        Line[i].displayStations();
                }
                cout << endl
                     << "//////////////////////" << endl;
                break;

            case 6:
                cout << endl
                     << "//////////////////////" << endl;
                displayAllLines();
                cout << endl
                     << "//////////////////////" << endl;
                break;

            case 0:
                break;

            default:
                cout << "Incorrect Input. Please try again" << endl;
                ctr = 0;
                ctrline = 10;
                break;
            }

            break;

        case 2:

            displayAll();
            break;

        case 0:
            ctr = 0;
            break;

        default:
            cout << "Incorrect Input. Please try again." << endl;
            break;
        }
    }

    return 0;
}
