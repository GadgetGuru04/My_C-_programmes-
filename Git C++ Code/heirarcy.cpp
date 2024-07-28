#include<iostream>

using namespace std;
class audioplayer{
    public:
    void play(){
        cout<<"Playing Audio";
    }
};
class videoplayer{
    public:
    void play(){
        cout<<"Playing Video";
    }
};
class multimediaplayer: public audioplayer,public videoplayer{
    public:
    void display(){
        videoplayer::play();
        //play();
    }
};
int main(){
    multimediaplayer m;
    m.display();
}

