
#include <bits/stdc++.h>
using namespace std;

class Circle
{
    public:
        double radius;
        
        double compute_area() {
            return 3.14 * radius * radius;
        }
};

int main()
{
    Circle obj;
    
    // accessing public data member outside class
    obj.radius = 5.5;
    
    cout << "Radius is: " << obj.radius << endl;
    cout << "Area is: " << obj.compute_area();
    
    return 0;
}
