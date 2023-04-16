#include <iostream>
#include <string>


class Pass {
private:
    std::string type;
    double discount;

public:
    Pass(std::string typeValue, double discountValue) {
        type = typeValue;
        discount = discountValue;
    }

    std::string getType() {
        return type;
    }

    double getDiscount() {
        return discount;
    }
};

class Person {
private:
    std::string name;
    int age;
    char gender;
    double weight;

protected:
    Pass pass;

public:
    // Конструктор класса
    Person(std::string nameValue, int ageValue, char genderValue, double weightValue, Pass passValue)
            : pass(passValue) {
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

    // Метод для получения типа объекта
    virtual std::string getType() {
        return "Person";
    }

    // Методы для установки и получения пропуска
    void setPass(Pass newPass) {
        pass = newPass;
    }

    std::string getPassType() {
        return pass.getType();
    }

    double getPassDiscount() {
        return pass.getDiscount();
    }
};


class Teacher : public Person {
private:
    std::string department;

public:
    // Конструктор класса
    Teacher(std::string nameValue, int ageValue, char genderValue, double weightValue, std::string departmentValue,
            Pass passValue)
            : Person(nameValue, ageValue, genderValue, weightValue, passValue) {
        department = departmentValue;
    }

    // Методы для установки и получения кафедры
    void setDepartment(std::string newDepartment) {
        department = newDepartment;
    }

    std::string getDepartment() {
        return department;
    }

    // Метод для получения типа объекта
    std::string getType() override {
        return "Teacher";
    }
};


class Scientist : public Person {
private:
    std::string fieldOfResearch;

public:
    // Конструктор класса
    Scientist(std::string nameValue, int ageValue, char genderValue, double weightValue,
              std::string fieldOfResearchValue, Pass passValue)
            : Person(nameValue, ageValue, genderValue, weightValue, passValue) {
        fieldOfResearch = fieldOfResearchValue;
    }

    // Методы для установки и получения области исследования
    void setFieldOfResearch(std::string newFieldOfResearch) {
        fieldOfResearch = newFieldOfResearch;
    }

    std::string getFieldOfResearch() {
        return fieldOfResearch;
    }

    // Метод для получения типа объекта
    std::string getType() override {
        return "Scientist";
    }
};


class Engineer : public Person {
private:
    std::string engineeringField;

public:
    // Конструктор класса
    Engineer(std::string nameValue, int ageValue, char genderValue, double weightValue,
             std::string engineeringFieldValue, Pass passValue)
            : Person(nameValue, ageValue, genderValue, weightValue, passValue) {
            engineeringField = engineeringFieldValue;
    }

    // Методы для установки и получения области инженерной деятельности
    void setEngineeringField(std::string newEngineeringField) {
        engineeringField = newEngineeringField;
    }

    std::string getEngineeringField() {
        return engineeringField;
    }

    // Метод для получения типа объекта
    std::string getType() override {
        return "Engineer";
    }
};


class Student : public Person {
private:
    int yearOfStudy;

public:
    // Конструктор класса
    Student(std::string nameValue, int ageValue, char genderValue, double weightValue, Pass passValue)
            : Person(nameValue, ageValue, genderValue, weightValue, passValue) {
        yearOfStudy = 0;
    }

    // Методы для установки и получения года обучения
    void setYearOfStudy(int year) {
        yearOfStudy = year;
    }

    int getYearOfStudy() {
        return yearOfStudy;
    }

    // Метод для получения типа объекта
    std::string getType() override {
        return "Student";
    }
};


int main() {
    Pass pass1("Teacher", 0.15);
    Pass pass2("Scientist", 0.10);
    Pass pass3("Engineer", 0.05);
    Pass pass4("Student", 0);

    Teacher teacher1("Bob", 45, 'M', 80, "Mathematics", pass1);
    std::cout << teacher1.getType() << std::endl;
    std::cout << "Name: " << teacher1.getName() << std::endl;
    std::cout << "Age: " << teacher1.getAge() << std::endl;
    std::cout << "Gender: " << teacher1.getGender() << std::endl;
    std::cout << "Weight: " << teacher1.getWeight() << std::endl;
    std::cout << "Department: " << teacher1.getDepartment() << std::endl;
    std::cout << "Pass type: " << teacher1.getPassType() << std::endl;
    std::cout << "Pass discount: " << teacher1.getPassDiscount() << std::endl << std::endl;

    Teacher teacher2("Pol", 35, 'M', 71.5, "Physics", pass1);
    std::cout << teacher2.getType() << std::endl;
    std::cout << "Name: " << teacher2.getName() << std::endl;
    std::cout << "Age: " << teacher2.getAge() << std::endl;
    std::cout << "Gender: " << teacher2.getGender() << std::endl;
    std::cout << "Weight: " << teacher2.getWeight() << std::endl;
    std::cout << "Department: " << teacher2.getDepartment() << std::endl;
    teacher2.setAge(36);
    std::cout << "New age: " << teacher2.getAge() << std::endl;
    std::cout << "Pass type: " << teacher2.getPassType() << std::endl;
    std::cout << "Pass discount: " << teacher2.getPassDiscount() << std::endl << std::endl;

    Scientist scientist1("Leo", 25, 'M', 76.3, "Biology", pass2);
    std::cout << scientist1.getType() << std::endl;
    std::cout << "Name: " << scientist1.getName() << std::endl;
    std::cout << "Age: " << scientist1.getAge() << std::endl;
    std::cout << "Gender: " << scientist1.getGender() << std::endl;
    std::cout << "Weight: " << scientist1.getWeight() << std::endl;
    std::cout << "FieldOfResearch: " << scientist1.getFieldOfResearch() << std::endl;
    std::cout << "Pass type: " << scientist1.getPassType() << std::endl;
    std::cout << "Pass discount: " << scientist1.getPassDiscount() << std::endl << std::endl;

    Engineer engineer1("Kevin", 24, 'M', 72.7, "Programming technology", pass3);
    std::cout << engineer1.getType() << std::endl;
    std::cout << "Name: " << engineer1.getName() << std::endl;
    std::cout << "Age: " << engineer1.getAge() << std::endl;
    std::cout << "Gender: " << engineer1.getGender() << std::endl;
    std::cout << "Weight: " << engineer1.getWeight() << std::endl;
    std::cout << "Department: " << engineer1.getEngineeringField() << std::endl;
    std::cout << "Pass type: " << engineer1.getPassType() << std::endl;
    std::cout << "Pass discount: " << engineer1.getPassDiscount() << std::endl << std::endl;

    Student student1("Stan", 19, 'M', 71, pass4);
    std::cout << student1.getType() << std::endl;
    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "Age: " << student1.getAge() << std::endl;
    std::cout << "Gender: " << student1.getGender() << std::endl;
    std::cout << "Weight: " << student1.getWeight() << std::endl;
    student1.setYearOfStudy(1);
    std::cout << "Year of study: " << student1.getYearOfStudy() << std::endl;
    std::cout << "Pass type: " << student1.getPassType() << std::endl;
    std::cout << "Pass discount: " << student1.getPassDiscount() << std::endl << std::endl;

    Student student2("Adam", 18, 'M', 70, pass4);
    std::cout << student2.getType() << std::endl;
    std::cout << "Name: " << student2.getName() << std::endl;
    std::cout << "Age: " << student2.getAge() << std::endl;
    std::cout << "Gender: " << student2.getGender() << std::endl;
    std::cout << "Weight: " << student2.getWeight() << std::endl;
    std::cout << "Year of study: " << student2.getYearOfStudy() << std::endl;
    std::cout << "Pass type: " << student2.getPassType() << std::endl;
    std::cout << "Pass discount: " << student2.getPassDiscount() << std::endl << std::endl;

    return 1;
}

