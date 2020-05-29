#include <iostream>

class Dog {
private:
    std::string dog_name;

public:
    Dog(std::string name) : dog_name(name) {};
    std::string GetName() { return dog_name; }
};

Dog* roxy;

static Dog& CreateDogRef(std::string name) {
    Dog dog(name);
    return dog;
}

void PrintRoxyName()
{
    if (roxy) {
        std::cout << roxy->GetName() << std::endl;
    }
}

int main() {
    roxy = &(CreateDogRef("Roxy")); // creates ref and ref gets deleted
    PrintRoxyName();
    return 0;
}
