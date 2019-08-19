#include <iostream>

class Man {
private:
    double speed = 0;
    double l = 0;
public:
    Man(double speed, double l) {
        this->speed = speed;
        this->l = l;
    }

    void dropSpeed() {
        speed = speed / 2;
    }

    void setDistance(double d) {
        this->l = d;
    }


    double getSpeed() {
        return this->speed;
    }

    double getP1() {
        return this->l;
    }
};

int main() {
    double to = 1;
    double time = 0;
    Man man1 = Man(1.75, 14.0);
    Man man2 = Man(1.8, 0.0);
    while (true) {
        if (man1.getP1() + man1.getSpeed() < man2.getP1() + man2.getSpeed()) {
//            drop the speed
            man1.dropSpeed();
            man2.dropSpeed();
            std::cout << "drop the speed" << std::endl;
            to = to / 2.0;
        } else if (man1.getP1() == man2.getP1()) {
            break;
        } else {
            man1.setDistance(man1.getP1() + man1.getSpeed());
            man2.setDistance(man2.getP1() + man2.getSpeed());
            time += to;
        }
    }
    std::cout << time << '\n';
    std::cout << man2.getP1() << '\n';

    return 0;

}
