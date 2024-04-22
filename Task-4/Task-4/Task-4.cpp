#include <iostream>

using namespace std;

class Point {
private:
    int x, y, z;
public:
    Point(int xCoord = 0, int yCoord = 0, int zCoord = 0) : x(xCoord), y(yCoord), z(zCoord) {}
    Point(const Point& other) : x(other.x), y(other.y), z(other.z) {}
    int getX() const { return x; }
    int getY() const { return y; }
    int getZ() const { return z; }
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
    void setZ(int newZ) { z = newZ; }
};

int main() {
    Point p1(1, 2, 3);
    Point p2(4, 5, 6);
    Point p3(7, 8, 9);
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ", " << p1.getZ() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ", " << p2.getZ() << ")" << endl;
    cout << "Point 3: (" << p3.getX() << ", " << p3.getY() << ", " << p3.getZ() << ")" << endl;
    p1.setX(10);
    p1.setY(11);
    p1.setZ(12);
    cout << "Point 1 (after mutation): (" << p1.getX() << ", " << p1.getY() << ", " << p1.getZ() << ")" << endl;
    Point p4 = p1;
    p4.setX(p4.getX() + 1);
    p4.setY(p4.getY() + 2);
    p4.setZ(p4.getZ() + 3);
    cout << "Point 4 (assigned from Point 1 with adjustments): (" << p4.getX() << ", " << p4.getY() << ", " << p4.getZ() << ")" << endl;
    return 0;
}
