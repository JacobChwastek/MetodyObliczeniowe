//
// Created by jakubchwastek on 25.02.2020.
//

#include <iostream>
#include <cmath>


using namespace std;

double FuncXd(double x);


int main(int argc, char **argv){

    for (double i = -30; i <9 ; ++i) {

        cout<<FuncXd(i)<<endl;


    }

}

double FuncXd(double y)
{
    double  x = pow(10,y);
    return (1 - exp(-x)/x);


}