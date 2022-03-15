#include <iostream>

extern void printer(int array[3][10]);
extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main(){
  std::string courses[4] = {"OOP","SNM","CLC","ADS"};
  std::string students[2] = {"Matthew","Patrick"};
  int report_card[][4] = {{88,73,96,64},{72,54,61,53}};
  int nstudents = 2;
  print_class(courses,students,report_card,nstudents);
}
