#include <iostream>

void printer(int array[3][10]){
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 10; j++){
      std::cout << array[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
  std::cout << "Report Card | " << courses[0] << " | " << courses[1] << " | " << courses[2] << " | " << courses[3] << std::endl;

  for (int i = 0; i < nstudents; i++){
    std::cout << students[i] << "    ";
    for (int j = 0; j < 4; j++){
      std::cout << "    " << report_card[i][j];
    }
    std::cout << std::endl;
  }

}

