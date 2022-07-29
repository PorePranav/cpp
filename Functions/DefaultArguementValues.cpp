#include <iostream>
using namespace std;

double calc_cost(double base_cost, double tax_rate=0.06);

int main(){
    double cost {0};

    cost = calc_cost(200.0)  ;
    cout<<"Cost with 6% tax is "<<cost<<endl;

    cost = calc_cost(200.0, 0.08);
    cout<<"Cost with 8% tax is "<<cost<<endl;  
}

double calc_cost(double base_cost, double tax_rate){
    return base_cost+=(base_cost*tax_rate);
}
