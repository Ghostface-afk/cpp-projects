#include <iostream>
using namespace std;

class RestaurantOrder {
public:
    void placeOrder(string itemName) {
        cout << "Your order: " << itemName << " has been received." << endl;
    }

    void placeOrder(string itemName, int quantity) {
        cout << "Your order for " << quantity << " " << itemName << "(s) has been received." << endl;
    }

    void placeOrder(string itemName, int quantity, bool takeout) {
        cout << "Your order for " << quantity << " " << itemName << "(s) has been received. Takeout: " << (takeout ? "Yes" : "No") << endl;
    }
};

int main() {
    RestaurantOrder RO;

    RO.placeOrder("Hawaiian Pizza");
    RO.placeOrder("Hawaiian Pizza", 4);
    RO.placeOrder("Hawaiian Pizza", 4, true);
    return 0;
}