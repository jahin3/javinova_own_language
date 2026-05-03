#ifndef COMPILER_PROJECT_H
#define COMPILER_PROJECT_H

#include <bits/stdc++.h>
using namespace std;

// ===============================
//  Arithmetic Operations
// ===============================

int NovaAdd(int a, int b);
int NovaSub(int a, int b);
int NovaMul(int a, int b);
double NovaDiv(double a, double b);
int NovaMod(int a, int b);
double NovaPow(double base, double exp);
double NovaRoot(double a);
int NovaAbs(int a);
double NovaAvg(int arr[], int n);

// ===============================
//  Logical Operations
// ===============================

bool NovaAnd(bool a, bool b);
bool NovaOr(bool a, bool b);
bool NovaNot(bool a);

// ===============================
//  Comparison Operations
// ===============================

int NovaMax(int a, int b);
int NovaMin(int a, int b);
bool NovaEq(int a, int b);
bool NovaNeq(int a, int b);
bool NovaGreater(int a, int b);
bool NovaLess(int a, int b);

// ===============================
//  Utility Functions
// ===============================

int NovaInc(int a);
int NovaDec(int a);
void NovaReverse(int arr[], int n);
int NovaLoop(int n);
int NovaReturn(int a);

// ===============================
//  Input / Output
// ===============================

void NovaPrint(int a);
void NovaList(int arr[], int n);

#endif