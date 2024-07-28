#include <iostream>
#include <exception>
using namespace std;

class CustomException : public exception {
    private:
        const char* message;
    public:
        CustomException(const char* msg) {
            message = msg;
        }

        const char* getMessage() {
            return message;
        }
};

int main() {
    try {
        throw CustomException("Custom exception occurred");
    }
    catch (CustomException& customEx) {
        cout <<  customEx.getMessage();
    }

    return 0;
}
