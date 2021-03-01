//Money.h
#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> 

using namespace std;
class Money
{
    int k500, k200, k100, k50, k20, k10, k5, k2, k1;
    double m50, m25;

public:
    double getk500() const { return k500; };
    double getk200() const { return k200; };
    double getk100() const { return k100; };
    double getk50() const { return k50; };
    double getk20() const { return k20; };
    double getk10() const { return k10; };
    double getk5() const { return k5; };
    double getk2() const { return k2; };
    double getk1() const { return k1; };
    double getm50() const { return m50; };
    double getm25() const { return m25; };

    void setk500(int value);
    void setk200(int value);
    void setk100(int value);
    void setk50(int value);
    void setk20(int value);
    void setk10(int value);
    void setk5(int value);
    void setk2(int value);
    void setk1(int value);
    void setm50(double value);
    void setm25(double value);

    string toString() const;
    void Read();
    void Display() const;
    bool Init(int k500, int k200, int k100, int k50, int k20, int k10, int k5, int k2, int k1, double m50, double m25);
    void Add(Money&);
    void Sub(Money&);
    void Dob(Money&, double N);
};

