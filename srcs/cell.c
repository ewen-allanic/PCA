#include "cell.h"

int cell_analyse(s_cell * cell) {
  // strtok();
  const char * separators = " ";

  char * strWord = strtok(/*str*/, separators);
  while (strWord != NULL) {
    // Si c'est une valeur
    if(sscanf(strWord, "%lf", &cell->val) == 1) {
      return 0;
    }

    // Si c'est une référence
    if (sscanf(strWord, "%[A-Z]%d", &col, &ligne) == 2) {
      
    }

    // Compare avec les opérateurs

    // Token suivant
    strWord = strtok(NULL, separators);
  }

  return;
}

double cell_evaluate(s_cell * cell) {
  return;
}
