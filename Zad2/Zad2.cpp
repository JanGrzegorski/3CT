#include <iostream>
using namespace std;
class matematyka {
public:
    static constexpr double PI = 3.14159;
    static int silnia(int n) {
        if (n <= 1) return 1;
        return n * silnia(n - 1);
    }
    static double potega(double podstawa, int wykladnik) {
        double wynik = 1;
        for (size_t i = 1; i < wykladnik; i++)
        {
            wynik = wynik * podstawa;
            return wynik;
        }
    }
};
int main()
{
    cout << "Klasa Statyczna różnica między Klasą klasyczną" << endl;
    matematyka::PI;
    matematyka matematyka;
    cout << matematyka.silnia(4) << endl;
    cout << matematyka::silnia(5) << endl;
    return EXIT_SUCCESS;
}
