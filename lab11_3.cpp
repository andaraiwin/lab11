#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;


double FindMean(int x, double y){
    double Mean = (1.0/x)*y;
    return Mean;
}



int main()
{
    int count = 0, i = 0;
    double sum = 0, SD_Sum = 0;
    double data[83] = {};
    

    string textLine;

	ifstream source("score.txt");
    while (getline(source, textLine)){
        cin >> data[i];
        sum += atof(textLine.c_str());
        SD_Sum += pow(atof(textLine.c_str()), 2);
        count++;
        i++;
    }

    double Mean2, SD;
    Mean2 = FindMean(count, sum);


    SD = sqrt(((1.0/count)*SD_Sum) - pow(Mean2, 2));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Mean2 << "\n";
    cout << "Standard deviation = " << SD << "\n";

    return 0;
}
