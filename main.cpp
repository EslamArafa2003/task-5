#include <iostream>
#include <string>

class Person {
private:
  std::string name;
  int age;

public:
  Person(std::string name, int age) : name(name), age(age) {}
  std::string getName() const { return name; }
  void setName(std::string name) { this->name = name; }
  int getAge() const { return age; }
  void setAge(int age) { this->age = age; }
};

class Employee : public Person {
private:
  double salary;
  std::string rank;
  std::string job;

public:
  Employee(std::string name, int age, double salary, std::string rank,
           std::string job)
      : Person(name, age), salary(salary), rank(rank), job(job) {}

  // Getters and setters
  double getSalary() const { return salary; }
  void setSalary(double salary) { this->salary = salary; }
  std::string getRank() const { return rank; }
  void setRank(std::string rank) { this->rank = rank; }
  std::string getJob() const { return job; }
  void setJob(std::string job) { this->job = job; }
};

int main() {
  Employee emp("John Doe", 30, 50000, "Manager", "Engineering");
  std::cout << "Name: " << emp.getName() << std::endl;
  std::cout << "Age: " << emp.getAge() << std::endl;
  std::cout << "Salary: $" << emp.getSalary() << std::endl;
  std::cout << "Rank: " << emp.getRank() << std::endl;
  std::cout << "Job: " << emp.getJob() << std::endl;

  return 0;
}
