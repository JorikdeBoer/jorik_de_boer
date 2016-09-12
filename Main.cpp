/*	Excercise 2.3.cpp
Written on 12-09-2016 by Jorik
This program calculates the molecular weight of two different salts. */

#include <iostream>
using namespace std;

void terminateProgram()
{
    cout << "Press any character and <ENTER> to continue" << endl;
    char chAnyChar;
    cin >> chAnyChar;
    return;
}

void writeOutput(double dWeight)
{
    cout << "The molecular weight is " << dWeight << " g/mol"
        << endl;
    return;
}

int main()
{
    // declaration of atomic weights
    const double dWeightC = 12.011, dWeightH = 1.008,
        dWeightN = 14.007, dWeightNa = 22.999,
        dWeightO = 15.999, dWeightP = 30.973,
        dWeightS = 32.065;
    // calculation of molecular weight of
    // trisodium salt of ATP (C10H13N5Na3O13P3)
    double dC10H13N5Na3O13P3 =
        10 * dWeightC + 13 * dWeightH + 5 * dWeightN +
        3 * dWeightNa + 13 * dWeightO + 3 * dWeightP;
    writeOutput(dWeighttrisodiumsaltofATP);
    // calculation of molecular weight of
    // Sildenafil citrate (C28H38N6O11S)
    double dC28H38N6O11S =
        28 * dWeightC + 38 * dWeightH + 6 * dWeightN +
        11 * dWeightO + 1 * dWeightS;
    writeOutput(dWeightSildenafilCitrate);
    //terminateProgram();
    terminateProgram();
}
