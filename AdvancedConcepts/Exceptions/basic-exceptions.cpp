//Name basic-exceptions.cpp

#include <iostream>
using namespace std;

void useMightGoWrong()
{
    mightGoWrong();
}

void mightGoWrong()
{
    bool error1 = false;
    bool error2 = true;

    if (error1)
    {
        throw "Something went wrong!";
    }

    if (error2)
    {
        throw string("Something else went wrong!");
    }
}

int main()
{
    try
    {
        useMightGoWrong();
    }
    catch (int e)
    {
        cout << "Error code: " << e << endl;
    }
    catch (char const *e)
    {
        cout << "Error Message: " << e << endl;
    }
    catch (string &e)
    {
        cout << "String Error Message: " << e << endl;
    }

    cout << "still running!" << endl;
    return 0;
}