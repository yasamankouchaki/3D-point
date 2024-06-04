//3D point structure
#include <iostream>
#include <cmath>
using namespace std;
class Point3D{
public:
    float x, y, z;
    Point3D(float _x, float _y, float _z):x(_x),y(_y),z(_z){}
    void getPoint(){
        cout << "Enter the x coordinate: ";
        cin >> x;
        cout << "Enter the y coordinate: ";
        cin >> y;
        cout << "Enter the z coordinate: ";
        cin >> z;
    }
    float distance(Point3D p){
        return sqrt(pow(x-p.x,2)+pow(y-p.y,2)+pow(z-p.z,2));
    }
    bool isOnSamePlane(Point3D p){
        return z == p.z;
    }
};

int main(){
    Point3D point1(0,0,0);
    Point3D point2(0,0,0);
    point1.getPoint();
    point2.getPoint();
    float dist=point1.distance(point2);
    cout << "Distance between the two points is:"<<dist<<endl;
    if(point1.isOnSamePlane(point2)){
       cout << "The two points are on the same plane" <<endl;
    } else {
       cout << "The two points are not on the same plane" <<endl;
    }
    return 0;
}

