#include <iostream>
using namespace std;

double calc_area_circle(double radius){
    return 3.14*radius*radius;
} 

void area_circle(){

    double radius {};
    cout<<"\nEnter the radius of the circle \t";
    cin>>radius;

    cout<<"The area of circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;

}

double calc_volume_cylinder(double height, double radius){
    return calc_area_circle(radius)*height;
}
void volume_cylinder(){
    double radius {};
    double height {};

    cout<<"\nEnter the radius of the cylinder\t";
    cin>>radius;
    
    cout<<"\nEnter the height of the cylinder\t";
    cin>>height;

    cout<<"Volume of cylinder with radius "<<radius<<" and height "<<height<<" is "<<calc_volume_cylinder(radius, height)<<endl;
}
int main(){

    area_circle();
    volume_cylinder();
    return 0;
}