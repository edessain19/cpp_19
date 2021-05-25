#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
  Form *paper = new Form("paperwork", 57, 23);
  std::cout << *paper;
  std::cout << std::endl;
  Form *paper1 = new Form("paperwork1", 157, 23);
  std::cout << *paper1;
  std::cout << std::endl;
  Form *paper2 = new Form("paperwork2", 23, 0);
  std::cout << *paper2;
  std::cout << std::endl;
  Form *paper3 = new Form("paperwork3", 444, 0);
  std::cout << *paper3;
  std::cout << std::endl;
  Bureaucrat *bob = new Bureaucrat("Bob", 57);
  std::cout << *bob;
  std::cout << std::endl;
  Bureaucrat *Jack = new Bureaucrat("Jack", 145);
  std::cout << *Jack;
  std::cout << std::endl;

  paper->beSigned(*Jack);
  std::cout << *paper;
  std::cout << std::endl;
  paper->beSigned(*bob);
  std::cout << *paper;
  std::cout << std::endl;

  delete paper;
  delete paper1;
  delete paper2;
  delete paper3;
  delete bob;
  delete Jack;
}
