#include <iostream>
using namespace std;

class Zwierze
{
public:
    Zwierze() { cout << "Zwierze stworzone" << endl; };
    ~Zwierze(){ cout << "Zwierze zniszczone" << endl; };
};

int main()
{
    cout << "Konstr Destr\n";
    Zwierze zwierze;

    return EXIT_SUCCESS;
}
