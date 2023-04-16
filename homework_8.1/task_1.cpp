#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    char gender;
    double weight;

public:
    // Конструктор класса
    Person(std::string nameValue, int ageValue, char genderValue, double weightValue) {
        name = nameValue;
        age = ageValue;
        gender = genderValue;
        weight = weightValue;
    }

    // Методы для установки и получения имени
    void setName(std::string newName) {
        name = newName;
    }

    std::string getName() {
        return name;
    }

    // Метод для изменения возраста
    void setAge(int newAge) {
        age = newAge;
    }

    int getAge() {
        return age;
    }

    char getGender() {
        return gender;
    }

    // Метод для изменения веса
    void setWeight(double newWeight) {
        weight = newWeight;
    }

    double getWeight() {
        return weight;
    }
};


class Student : public Person {
private:
    int yearOfStudy;

public:
    // Конструктор класса
    Student(std::string nameValue, int ageValue, char genderValue, double weightValue)
            : Person(nameValue, ageValue, genderValue, weightValue)
    {
        yearOfStudy = 0;
    }

    // Методы для установки и получения года обучения
    void setYearOfStudy(int year) {
        yearOfStudy = year;
    }

    int getYearOfStudy() {
        return yearOfStudy;
    }
};

int main() {
    Person person1("John", 35, 'M', 70.5);
    std::cout << "Name: " << person1.getName() << std::endl;
    std::cout << "Age: " << person1.getAge() << std::endl;
    std::cout << "Gender: " << person1.getGender() << std::endl;
    std::cout << "Weight: " << person1.getWeight() << std::endl;

    person1.setAge(40);
    person1.setWeight(75.0);
    std::cout << "New age: " << person1.getAge() << std::endl;
    std::cout << "New weight: " << person1.getWeight() << std::endl;

    Student student1("Bob", 18, 'M', 71);
    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "Age: " << student1.getAge() << std::endl;
    std::cout << "Gender: " << student1.getGender() << std::endl;
    std::cout << "Weight: " << student1.getWeight() << std::endl;

    student1.setYearOfStudy(1);
    std::cout << "Year of study: " << student1.getYearOfStudy() << std::endl;

    return 1;
}
