#include "cell.h"

int cell_analyse(s_cell * cell) {
  // strtok();
  const char * separators = " ";

  char * strWord = strtok(/*str*/, separators);
  while (strWord != NULL) {
    // Si c'est une valeur
    sscanf(strWord, "%lf", &cell->val);

    // Si c'est une référence
    sscanf(strWord, "%[A-Z]%d", &col, &ligne);

    // Compare avec les opérateurs

    // Token suivant
    strWord = strtok(NULL, separators);
  }

  return;
}

double cell_evaluate(s_cell * cell) {
  return;
}
