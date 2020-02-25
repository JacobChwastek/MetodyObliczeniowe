
#include <typeinfo>
#include <string>
using namespace std;

template <typename T>
class MyMath
{
private:
public:
    void machineEpsilon(T EPS)
    {
        T prevEps;
        int M = 0;
        while ((1 + EPS) > 1)
        {
            prevEps = EPS;
            M++;
            EPS /= 2;
        }
        cout << "Epsilon maszynowy dla " << typeid(prevEps).name() << " is: " << prevEps << endl;
        cout << "Mantysa:" << M << endl;
    }

    static void getFloatInfo()
    {
        int m_f = 0; // bit count for float
        float e_f;   // float epsilon
                     // FLOAT
        e_f = 1.f;
        while ((.5f * e_f + 1.f) > 1)
        {
            e_f *= .5f;
            m_f++;
        }
        cout << "Liczba bitow mantysy dla typu float: " << m_f << endl
             << "epsilon dla typu float: " << e_f << endl
             << "epsilon biblioteczny: " << FLT_EPSILON << endl
             << endl;
    }
    static void getDoubleInfo()
    {
        int m_d = 0; // bit count for double
        double e_d;  // double epsilon

        // DOUBLE:
        e_d = 1;
        while ((.5 * e_d + 1) > 1)
        {
            e_d *= .5D;
            m_d++;
        }
        cout << "Liczba bitow mantysy dla typu double: " << m_d << endl
             << "epsilon dla typu double: " << e_d << endl
             << "epsilon biblioteczny: " << DBL_EPSILON << endl
             << endl;
    }
};