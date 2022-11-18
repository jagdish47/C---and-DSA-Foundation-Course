// given the age of person you have to chech weather person is eligible for vote or not
#include <iostream>
using namespace std;

string eligibleForVote(int age)
{
    if (age < 18)
    {
        return "NOTE ELIGIBLE FOR VOTE";
    }
    else
    {
        return "ELIGIBLE FOR VOTE";
    }
}

int main()
{
    int age;
    cout << "enter your age : ";
    cin >> age;

    cout << eligibleForVote(age) << endl;

    return 0;
}