#include <iostream>
using namespace std;

void count_numbers(int array[4][4]){

  // setup
  int score[10] = {0,0,0,0,0,0,0,0,0,0};

  // gather data
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (array[i][j] < 10){
      score[array[i][j]] += 1;

      }
    }
    }

  // print data
  for (int i = 0; i < 10; i++){
    cout << i << ":" << score[i] << ";";
  }
  cout << endl;
}
