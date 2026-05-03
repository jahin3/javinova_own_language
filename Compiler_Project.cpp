#include "Compiler_Project.h"

// Arithmetic
int NovaAdd(int a, int b) { return a + b; }
int NovaSub(int a, int b) { return a - b; }
int NovaMul(int a, int b) { return a * b; }

double NovaDiv(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int NovaMod(int a, int b) { return a % b; }

double NovaPow(double base, double exp) { return pow(base, exp); }
double NovaRoot(double a) { return sqrt(a); }

int NovaAbs(int a) { return abs(a); }

double NovaAvg(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return (double)sum / n;
}

// Logical
bool NovaAnd(bool a, bool b) { return a && b; }
bool NovaOr(bool a, bool b) { return a || b; }
bool NovaNot(bool a) { return !a; }

// Comparison
int NovaMax(int a, int b) { return max(a, b); }
int NovaMin(int a, int b) { return min(a, b); }

bool NovaEq(int a, int b) { return a == b; }
bool NovaNeq(int a, int b) { return a != b; }
bool NovaGreater(int a, int b) { return a > b; }
bool NovaLess(int a, int b) { return a < b; }

// Utility
int NovaInc(int a) { return a + 1; }
int NovaDec(int a) { return a - 1; }

void NovaReverse(int arr[], int n)
{
    reverse(arr, arr + n);
}

int NovaLoop(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int NovaReturn(int a) { return a; }

void NovaPrint(int a)
{
    cout << "NovaPrint:            " << a << endl;
}

void NovaList(int arr[], int n)
{
    cout << "NovaList:             ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}