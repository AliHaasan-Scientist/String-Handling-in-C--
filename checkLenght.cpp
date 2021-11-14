#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  
    int n;

    cin >> n;
    cin.ignore();
    char string[n];
    cin.getline(string, n);
    cin.ignore();
    int curr = 0, i = 0;
    int max = 0;
    int st=0, maxst=0;
    while (1)
    {
        if (string[i] == ' ' || string[i] == '\0')
        {
            if (curr > max)
            {
                max = curr;
                maxst=st;
            }
            curr = 0;
            st=i+1;
        }
else
        curr++;
        if (string[i] == '\0')
        break;
            i++;
    }
    cout << max<<endl;
    for (int i = 0; i < max; i++)
    {
        cout<<string[i+maxst];
    }
    
}