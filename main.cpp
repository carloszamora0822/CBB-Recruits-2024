#include "recruit.h"
#include <vector>
using namespace std;

int main()
{
    int recruits;
    vector<Recruit> recruitdatabase;
    cout << "How many recruits are you creating?" << endl;
    cin >> recruits;
    cout << "Welcome to ESPN's Recruit DB, where you will be adding "<< recruits << " to our database "<< endl<<  "for coaches, recruiters, and fans all over the world can see." << endl;

    for(int i = 0; i < recruits; i++)
    {
        Recruit recruits;
        recruits.read();
        recruitdatabase.push_back(recruits);
    }

    for(size_t v = 0; v < recruitdatabase.size(); v++)
    {
        cout << endl << v + 1 << ".";
        recruitdatabase[v].print();
    }

    return 0;

}
