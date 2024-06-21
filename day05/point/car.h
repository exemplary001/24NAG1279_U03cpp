#include <iostream>
using namespace std;

class Car {
private:
    float petrol;
    float mileage;
    float distance;
public:
    Car() : petrol(0), mileage(0), distance(0) {}
    
    void FillPetrol(float litres)
    {
        petrol += litres;
    }

    void SetMileage(float kmpl)
    {
        mileage = kmpl;
    }

    void DriveCar(float km)
    {
        if (petrol == 0)
        {
            cout<<"No petrol in car. Fill petrol"<<endl;
            return;
        }
        if (mileage == 0)
        {
            cout<<"Mileage not set. Set Mileage"<<endl;
            return;
        }

        int possibleDistance = petrol * mileage;
        if (km <= possibleDistance)
        {
            distance += km;
            petrol -= km / mileage;
        }
        else
        {
            distance += possibleDistance;
            petrol = 0;
        }
    }

    void Display()
    {
        cout<<"Distance the car has travellled: "<<distance<<" km"<<endl;
        cout<<"Petrol left in the car: "<<petrol<<" litres"<<endl;
        if (mileage > 0)
            cout<<"Number of km that can be driven based on petrol remaining: "<<petrol * mileage<<" km"<<endl;
        else
            cout<<"Number of km that can be driven based on petrol remaining: 0 km"<<endl;
    }
};