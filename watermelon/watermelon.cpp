#include <iostream>
using namespace std;
int main()
{
    int killo;
    cout << "please enter the weight of the watermelon"<<endl;
    cin >> killo;
    if (killo % 2 == 0)
    {
        cout << "they  are going to split it in half " << endl;
        int i;
        for (i = 0; i <= 10; i++)
        {
            int secondwight;
            if (i % 2 == 0) {
                secondwight = killo - i;
                if (i >= secondwight) {
                    break;
                }cout << i << secondwight << endl;

            }
            else {
                cout << "they are not going to split it in half " << endl;
            }

            return 0;
        }
        } 
             

    } 


