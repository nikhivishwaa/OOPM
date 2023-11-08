#include<iostream>
using namespace std;

class Vehicle{
    public:
        int year;
        string make, model;
        void start(){
            cout<<"Started";
        }
        void stop(){
            cout<<"Stopped";
        }
        void setVehicle(int y, string mk, string m){
            year = y;
            make = mk;
            model = y;
        }
        void displayVehicle(){
            cout<<"Details : "<<model<<" "<<year<<" "<<make<<endl;
        }
};

class Car:public Vehicle{
    public:
        int num_doors;
        string fuel_type;
        Car(int y, string mk, string m, string ft, int nd){
            fuel_type = ft;
            num_doors = nd;
            setVehicle(y, mk, m);
        }
        void display(){
            cout<<"Your Car Specification : "<<endl;
            displayVehicle();
            cout<<"No. of Doors: "<<num_doors<<endl; 
            cout<<"Fuel Type: "<<fuel_type<<endl; 
        }
};
class Truck:public Vehicle{
    public:
        int load_capacity;
        string transmission_type;
        Truck(int y, string mk, string m, string tt, int lc){
            load_capacity = lc;
            transmission_type = tt;
            setVehicle(y, mk, m);
        }
        void display(){
            cout<<"Your Truck Specification : "<<endl;
            displayVehicle();
            cout<<"Load Capacity: "<<load_capacity<<" Tons"<<endl; 
            cout<<"Transmission Type: "<<transmission_type<<endl; 
        }
};
class Motorcycle:public Vehicle{
    public:
        int top_speed;
        string engine_type;
        Motorcycle(int y, string mk, string m, string et, int ts){
            top_speed = ts;
            engine_type = et;
            setVehicle(y, mk, m);
        }
        void display(){
            cout<<"Your Motorcycle Specification : "<<endl;
            displayVehicle();
            cout<<"Top Speed: "<<top_speed<<" KM/H"<<endl; 
            cout<<"Engine Type: "<<engine_type<<endl; 
        }
};

int main(){
    Car alto(2006, "India", "C7G0878", "Petrol", 4);
    Motorcycle KTM(2021, "Jerman", "KC10NM5", "2 Stroke", 225);
    Truck Dumpher(2018, "India", "ASL7GRG45", "Synchromash", 30);
    alto.start();
    alto.display();
    alto.stop();

    KTM.start();
    KTM.display();
    KTM.stop();

    Dumpher.start();
    Dumpher.display();
    Dumpher.stop();

    return 0;
}