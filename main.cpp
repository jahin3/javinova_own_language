#include <bits/stdc++.h>
#include "Compiler_Project.h"
using namespace std;

int main()
{
    string cmd;
    cout << "===== Jahinova Language  =====" << endl;

    while (true)
    {
        cout << "\n>> ";
        cin >> cmd;

        if (cmd == "EXIT")
            break;

        // Arithmetic
        if (cmd == "NovaAdd")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaAdd(a, b) << endl;
        }
        else if (cmd == "NovaSub")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaSub(a, b) << endl;
        }
        else if (cmd == "NovaMul")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaMul(a, b) << endl;
        }
        else if (cmd == "NovaDiv")
        {
            double a, b;
            cin >> a >> b;
            cout << NovaDiv(a, b) << endl;
        }
        else if (cmd == "NovaMod")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaMod(a, b) << endl;
        }
        else if (cmd == "NovaPow")
        {
            double a, b;
            cin >> a >> b;
            cout << NovaPow(a, b) << endl;
        }
        else if (cmd == "NovaRoot")
        {
            double a;
            cin >> a;
            cout << NovaRoot(a) << endl;
        }
        else if (cmd == "NovaAbs")
        {
            int a;
            cin >> a;
            cout << NovaAbs(a) << endl;
        }

        // Avg (array)
        else if (cmd == "NovaAvg")
        {
            int n;
            cin >> n;
            int arr[100];
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            cout << NovaAvg(arr, n) << endl;
        }

        // Logical
        else if (cmd == "NovaAnd")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaAnd(a, b) << endl;
        }
        else if (cmd == "NovaOr")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaOr(a, b) << endl;
        }
        else if (cmd == "NovaNot")
        {
            int a;
            cin >> a;
            cout << NovaNot(a) << endl;
        }

        // Comparison
        else if (cmd == "NovaMax")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaMax(a, b) << endl;
        }
        else if (cmd == "NovaMin")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaMin(a, b) << endl;
        }
        else if (cmd == "NovaEq")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaEq(a, b) << endl;
        }
        else if (cmd == "NovaNeq")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaNeq(a, b) << endl;
        }
        else if (cmd == "NovaGreater")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaGreater(a, b) << endl;
        }
        else if (cmd == "NovaLess")
        {
            int a, b;
            cin >> a >> b;
            cout << NovaLess(a, b) << endl;
        }

        // Utility
        else if (cmd == "NovaInc")
        {
            int a;
            cin >> a;
            cout << NovaInc(a) << endl;
        }
        else if (cmd == "NovaDec")
        {
            int a;
            cin >> a;
            cout << NovaDec(a) << endl;
        }
        else if (cmd == "NovaReverse")
        {
            int n;
            cin >> n;
            int arr[100];
            for (int i = 0; i < n; i++)
                cin >> arr[i];

            NovaReverse(arr, n);

            cout << "Reversed: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else if (cmd == "NovaLoop")
        {
            int n;
            cin >> n;
            cout << NovaLoop(n) << endl;
        }
        else if (cmd == "NovaReturn")
        {
            int a;
            cin >> a;
            cout << NovaReturn(a) << endl;
        }
        else if (cmd == "NovaPrint")
        {
            int a;
            cin >> a;
            NovaPrint(a);
        }
        else if (cmd == "NovaList")
        {
            int n;
            cin >> n;
            int arr[100];
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            NovaList(arr, n);
        }

        else
        {
            cout << "Unknown command!" << endl;
        }
    }

    cout << "\n===== End of Jahinova Execution =====" << endl;
    return 0;
}