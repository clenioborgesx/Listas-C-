typedef struct matriz Matriz;
void libera (Matriz* mat);
Matriz* cria (int m, int n);
float acessa (Matriz* mat, int i, int j);
void atribui (Matriz* mat, int i, int j, float v);
int linhas (Matriz* mat);
int colunas (Matriz* mat);