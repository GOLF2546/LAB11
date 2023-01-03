//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;

int main (){
    string textline;
	ifstream score("score.txt");
    float n = 0;
    float sum = 0,mean =0;
    float total = 0;
    while(getline(score,textline)){
        n++;
        sum += atof(textline.c_str());
        total += pow(atof(textline.c_str()),2);
    }
    mean = sum/n;
    cout << total << endl;
    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt(((1/n)*total)-pow(mean,2));
    }