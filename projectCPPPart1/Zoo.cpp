#include "Zoo.h"






void Zoo::addAnimal(Animal& animal) {
    for (int i =0; i<cagesCount; i++){
        if(strcmp(cages[i]->getType(), typeid(animal).name()))
            cout << "This cage type already exists";
    }
}
void Zoo::removeAnimal(int serialNumber) {

}
void Zoo::addEmployee(Employee& employee) {

}
void Zoo::removeEmployee(int employeeNumber) {

}
void Zoo::show() const {

}
void Zoo::addCage(int type) {

}
void Zoo::showAllAnimals()const {

}
void Zoo::showAllEmployees()const {

}
void Zoo::feedAllAnimals() {

}
