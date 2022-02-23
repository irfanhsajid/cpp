#include<iostream>
using namespace std;

class MobileUser
{

public :
    void call()
    {
        cout << " Hello !" <<endl;

    }
    virtual void sendMessage () = 0;

};


class Rahim :public MobileUser
{


public:
    void sendMessage()
    {
        cout << "Hi, this is Rahim" <<endl;
    }
};

class Karim :public MobileUser
{


public:
    void sendMessage()
    {
        cout << "Hi, this is Karim" <<endl;
    }
};






int main()
{
    MobileUser* m;

    Rahim r;

    Karim k;

    m = &r;

    m-> sendMessage();

     m = &k;
     m-> sendMessage();
}
