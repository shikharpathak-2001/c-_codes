#include <iostream>
using namespace std; 
class  cuboid{
public:
cuboid(double l = 2.0, double b = 2.0, double h = 2.0) { length = l; breadth = b; height = h;
}
double Volume() {
return length * breadth * height;
}
int compare(cuboid cuboid) {
return this->Volume() > cuboid.Volume();
}
private:
double length; double breadth; double height;
};
int main() {
cuboid cuboid1(9.0, 7.4, 2.1);
cuboid cuboid2(9.2, 1.5, 2.0);
if(cuboid1.compare(cuboid2)) {
cout << "cuboid1 is bigger than cuboid2 " <<endl;
} else {

cout << "cuboid2 is equal to or larger than cuboid1" <<endl;

}
return 0;

}
