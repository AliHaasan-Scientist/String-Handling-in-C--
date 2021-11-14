#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    char string[n+1];
    cin>>string;
    bool checker = true;
    for (int i = 0; i < n; i++)
    {
        if (string[i] != string[n - 1 - i])
        {
             checker = false;
        }
    }
    if (checker==true)
    {
        cout<<"Number is  palindrom";

    }
    else{
        cout<<"Not palindrom";
    }

    return 0;
}
