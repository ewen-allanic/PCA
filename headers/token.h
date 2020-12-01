typedef struct token {
  enum {VALUE, REF, OPERATOR} type;
  union {
    double cst;
    s_cell * ref;
    void (*operator)(pile_t * eval);
  } value;
} s_token;
