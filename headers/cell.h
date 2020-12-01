typedef struct cell {
  char * string;
  double value;
  s_token token;
  
} s_cell;

int cell_analyse(s_cell * cell);
double cell_evaluate(s_cell * cell);
