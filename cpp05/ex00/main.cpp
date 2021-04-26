#include "Bureaucrat.hpp"

//Highest grade is 1 and lowest grade is 150!!

int main()
{
  Bureaucrat *bob = new Bureaucrat("Bob", 42);
  std::cout << *bob;
  Bureaucrat *bob1 = new Bureaucrat("Bob1", 150);
  std::cout << *bob1;
  Bureaucrat *bob2 = new Bureaucrat("Bob2", 1);
  std::cout << *bob2;
  Bureaucrat *Jack = new Bureaucrat("Jack", 170); //Invalid grades are set to lowest grade 150
  std::cout << *Jack;
  Bureaucrat *John = new Bureaucrat("John", 0); //Invalid grades are set to lowest grade 150
  std::cout << *John;
  Bureaucrat *Georges = new Bureaucrat("Georges", -19); //Invalid grades are set to lowest grade 150
  std::cout << *Georges;

  std::cout << "Decrementing bob's grade 111 times" << std::endl;
  for (int i = 0; i < 100; i++)
    bob->decGrade();
  std::cout << *bob;
  std::cout << "Incrementing bob's grade 150times" << std::endl;
  for (int i = 0; i < 150; i++)
    bob->incGrade();
  std::cout << *bob;

  delete bob;
  delete bob1;
  delete bob2;
  delete Jack;
  delete John;
  delete Georges;
}
