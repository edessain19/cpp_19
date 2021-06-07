#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern bill;
    Bureaucrat bob("Bob", 2);
    Form *f1;
    Form *f2;
    Form *f3;
    Form *f4;

    std::cout << "~~~ Intern creates all the forms ~~~" << std::endl;
    f1 = bill.makeForm("shrubbery creation", "f1");
    std::cout << *f1;
    std::cout << std::endl;
    f2 = bill.makeForm("robotomy request", "f2");
    std::cout << *f2;
    std::cout << std::endl;
    f3 = bill.makeForm("presidential pardon", "f3");
    std::cout << *f3;
    std::cout << std::endl;
    f4 = bill.makeForm("divers", "f4");
    std::cout << std::endl;
    std::cout << "~~~ Sign forms ~~~" << std::endl;
    f1->beSigned(bob);
    f2->beSigned(bob);
    f3->beSigned(bob);
    std::cout << std::endl;


    std::cout << "~~~ Execute forms ~~~" << std::endl;
    bob.executeForm(*f1);
    bob.executeForm(*f2);
    bob.executeForm(*f3);

    delete f1;
    delete f2;
    delete f3;
    delete f4;
}