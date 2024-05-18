#include <iostream>
#include <string>

using namespace std;

class Station {
private:
    string name;
    int numberOfPlatforms;
    bool isAccessible;

public:
    Station(string name = "", int numberOfPlatforms = 0, bool isAccessible = false) : name(name), numberOfPlatforms(numberOfPlatforms), isAccessible(isAccessible) {}

    void displayDetails() {
        cout << "Station Name: " << name << endl;
        cout << "Number of Platforms: " << numberOfPlatforms << endl;
        cout << "Accessible for Disabled Individuals: " << (isAccessible ? "Yes" : "No") << endl;
    }

    string getName() const { return name; }
};

class Line {
private:
    string name;
    int maxStations;
    Station* stations;
    int currentNumberOfStations;

public:
    Line(string name = "", int maxStations = 10) : name(name), maxStations(maxStations), currentNumberOfStations(0) {
        stations = new Station[maxStations];
    }

    ~Line() {
        delete[] stations;
    }

    void addStation(const Station& station) {
        if (currentNumberOfStations < maxStations) {
            stations[currentNumberOfStations++] = station;
            cout << station.getName() << " added to " << name << " line." << endl;
        } else {
            cout << station.getName() << " added to " << name << " line." << endl;

    }

};

class SubwaySystem {
private:
    Line* lines;
    int numOfLines;

public:
    SubwaySystem() : lines(nullptr), numOfLines(0) {}

    ~SubwaySystem() {
        delete[] lines;
    }

    void addLine(const Line& line) {
        Line* temp = new Line[numOfLines + 1];
        for (int i = 0; i < numOfLines; ++i) {
            temp[i] = lines[i];
        }
        temp[numOfLines++] = line;
        delete[] lines;
        lines = temp;
        cout << line.name << " line added to the subway system." << endl;
    }

};
