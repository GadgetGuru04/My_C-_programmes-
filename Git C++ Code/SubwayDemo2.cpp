#include <iostream>
#include <iomanip>
#include <cstring>

#define MAX 50
#define MAX_STATION 100
#define MAX_LINE 10

using namespace std;

void showAllLines();

int stationsCount = 0, linesCount = 0;

string getInputString() {
    string input;
    char inputChar[MAX];
    cin.ignore();
    cin.getline(inputChar, MAX, '\n');
    for (int i = 0; inputChar[i] != '\0'; i++) {
        input += inputChar[i];
    }
    return input;
}

int getInputInt() {
    int num;
    cin >> num;
    return num;
}

bool getInputBool() {
    string flag;
    cout << "";
    cin >> flag;
    if (flag == "1") {
        return true;
    }
    else {
        return false;
    }
}

void printHeader(int no = 50, char h = '-') {
    for (int i = 0; i < no; i++) {
        cout << h;
    }
    cout << endl;
}

void printStationTopics() {
    cout << left << setw(5) << setfill(' ') << "No." << setw(20) << "Name" << setw(15) << "Platform" << setw(50) << "Accessible for Disabled!" << endl;
}

void printLineTopics() {
    cout << left << setw(5) << setfill(' ') << "No." << setw(20) << "Name" << setw(15) << "Line" << endl;
}

class Station {
    string name;
    int numOfPlatforms;
    bool isAccessible;
public:
    Station() {
        name = "Default Name";
        numOfPlatforms = 0;
        isAccessible = false;
    }
    Station(string name, int platforms, bool accessible) {
        this->name = name;
        numOfPlatforms = platforms;
        isAccessible = accessible;
    }

    void setName(string name) {
        this->name = name;
        cout << "Name set Successfully" << endl;
    }

    string getName() {
        return name;
    }

    void setNumOfPlatforms(int platforms) {
        numOfPlatforms = platforms;
    }

    void setAccessibility(bool accessible) {
        isAccessible = accessible;
    }

    void showDetails(int no) {
        cout << left << setw(5) << no + 1 << setw(20) << name << setw(15) << numOfPlatforms << setw(20) << isAccessible << endl;
    }
} subStation[MAX_STATION];

void createStation() {
    string name;
    int numOFPLatforms;
    bool accessible;
    cout << "Enter the name of the station: ";
    name = getInputString();
    subStation[stationsCount].setName(name);
    cout << "Enter the number of platforms in " << name << ": ";
    numOFPLatforms = getInputInt();
    subStation[stationsCount].setNumOfPlatforms(numOFPLatforms);
    cout << "Is " << name << " accessible for disabled people? (1/0): ";
    accessible = getInputBool();
    subStation[stationsCount].setAccessibility(accessible);
    stationsCount++;
}

class Line {
    string name;
    Station* stations[MAX_STATION];
    int currentStation = 0;
public:
    int numOfStations() {
        return currentStation;
    }
    void setName() {
        cout << "Enter the name of the line: ";
        name = getInputString();
    }
    bool checkStation(Station arg) {
        for (int i = 0; i < currentStation; i++) {
            if (arg.getName() == (stations[i]->getName())) {
                return true;
            }
        }
        return false;
    }

    void addStation(Station* station) {
        if (currentStation < MAX_STATION) {
            stations[currentStation] = station;
            currentStation++;
        }
        else {
            cout << "Line is full!" << endl;
            cout << "Please remove some stations before adding newer ones." << endl;
        }
    }

    void removeStations(Station* station) {
        int found = 0;
        for (int i = 0; i < currentStation; i++) {
            if (stations[i]->getName() == station->getName()) {
                found = 1;
                currentStation--;
            }
            station[i] = station[i + found];
        }
        cout << station->getName() << " removed from " << name << endl;
    }

    void removeStation(int index) {
        if (index <= currentStation) {
            for (int i = index - 1; i < currentStation; i++) {
                stations[i] = stations[i + 1];
            }
            currentStation--;
        }
    }

    void showDetails(int no) {
        printHeader(40);
        cout << left << setw(3) << no + 1 << setw(20) << name << setw(15) << currentStation << endl;
    }

    void showStationsInfo() {
        printHeader(50);
        printStationTopics();
        printHeader(50);
        for (int i = 0; i < currentStation; i++) {
            stations[i]->showDetails(i);
        }
        printHeader(50);
    }
} subLines[MAX_LINE];

void createLine() {
    if (linesCount >= MAX_LINE) {
        cout << "Maximum number of lines reached!" << endl;
    }
    else {
        subLines[linesCount].setName();
        linesCount++;
    }
}

class subwaySystem {
    Line* lines[MAX_LINE];
    int currentNumberOfLines;
public:
    int numberOfLines() {
        return currentNumberOfLines;
    }
    void removeStationFromLine() {
        int lineCode, stationCode;
        showAllLines();
        cout << "Choose which line you want to remove a station from: ";
        cin >> lineCode;
        if (lineCode <= linesCount) {
            subLines[lineCode - 1].showStationsInfo();
            cout << "Choose which station you want to remove: ";
            cin >> stationCode;
            if (stationCode <= subLines[lineCode - 1].numOfStations()) {
                subLines[lineCode - 1].removeStation(stationCode);
            }
            else {
                cout << "Please enter a valid Station Code" << endl;
            }
        }
        else {
            cout << "Please enter a valid line number" << endl;
        }
    }
} subway;

void showAllStations() {
    printHeader();
    printStationTopics();
    printHeader();
    for (int i = 0; i < stationsCount; i++) {
        subStation[i].showDetails(i);
        cout << endl;
    }
    printHeader();
}

void showAllLines() {
    printHeader(50);
    printLineTopics();
    printHeader(50);
    for (int i = 0; i < linesCount; i++) {
        subLines[i].showDetails(i);
        cout << endl;
    }
    printHeader(50);
}

void showStationsOnline() {
    int lineNum;
    showAllLines();
    cout << "Choose which line you want to check: ";
    cin >> lineNum;
    subLines[lineNum - 1].showStationsInfo();
}

void addStationToLine() {
    int chooseLine, chooseStation;
    showAllLines();
    cout << "Choose which line you want to add a station to: ";
    cin >> chooseLine;
    showAllStations();
    cout << "Choose which station you want to add: ";
    cin >> chooseStation;
    subLines[chooseLine - 1].addStation(&subStation[chooseStation - 1]);
}

void removeStation() {
    int index;
    showAllStations();
    cout << "which station do you want to remove: " << endl;
    cin >> index;
    for (int i = 0; i < linesCount; i++) {
        if (subLines[i].checkStation(subStation[index])) {
            subLines[i].removeStations(&subStation[index]);
            break;
        }
    }
    for (int i = index; i < stationsCount; i++) {
        subStation[i] = subStation[i + 1];
    }
    stationsCount--;
}

void removeLine() {
    int index;
    showAllLines();
    cout << "Which line do you want to remove?";
    cin >> index;
    if (index > MAX_LINE || index > linesCount) {
        cout << "Number of lines in the system are " << linesCount << endl;
        cout << "Please enter a valid line number" << endl;
        return;
    }
    for (int i = index - 1; i < linesCount; i++) {
        subLines[i] = subLines[i + 1];
    }
    linesCount--;
    cout << "line removed Successfully!" << endl;
}

void Error(string name) {
    cout << "Error: " << name << " is not a valid option" << endl;
}

int main() {
    int ch = 1;
    cout << right << setw(50) << "Welcome to Subway Station" << endl;
    while (ch != 0) {
        cout << "\n\n" << endl;
        cout << "Choose your operation" << endl;
        cout << "1. Add a new Station" << endl;
        cout << "2. Create a new line" << endl;
        cout << "3. Add a station to a line" << endl;
        cout << "4. Remove station from a line" << endl;
        cout << "5. Show all stations on line" << endl;
        cout << "6. Show all lines" << endl;
        cout << "7. Show all stations" << endl;
        cout << "8. Remove station" << endl;
        cout << "9. Remove line" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: {
            createStation();
        } break;

        case 2: {
            createLine();
        } break;

        case 3: {
            if (stationsCount == 0 || linesCount == 0) {
                Error("a station and a line");
                break;
            }
            addStationToLine();
        } break;

        case 4: {
            if (stationsCount == 0 || linesCount == 0) {
                Error("a station and a line");
                break;
            }
            subway.removeStationFromLine();
        } break;

        case 5: {
            if (stationsCount == 0 || linesCount == 0) {
                Error("a line");
                break;
            }
            showStationsOnline();
        } break;

        case 6: {
            if (stationsCount == 0 || linesCount == 0) {
                Error("a line");
                break;
            }
            showAllLines();
        } break;

        case 7: {
            if (stationsCount == 0 || linesCount == 0) {
                Error("a station");
                break;
            }
            showAllStations();
        } break;

        case 8: {
            if (stationsCount == 0 || linesCount == 0) {
                Error("a station");
                break;
            }
            removeStation();
        } break;

        case 9: {
            if (stationsCount == 0 || linesCount == 0) {
                Error("a line");
                break;
            }
            removeLine();
        } break;

        case 0: {
            cout << "Thanks for using my program. Have a Nice Day!" << endl;
        } break;

        default: {
            cout << "Invalid choice! Please enter again." << endl;
        } break;
        }
    }

    return 0;
}
