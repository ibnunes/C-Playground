#include <stdio.h>

#define ALUNOS 35
#define TURMAS 12

typedef unsigned short nota;

int aprovados(nota [ALUNOS][TURMAS]);
int melhorDaTurma(nota [ALUNOS][TURMAS], int);
int turmaMaisAprovados(nota [ALUNOS][TURMAS]);

int main(void) {
   nota aval[ALUNOS][TURMAS];
   /* whatever... */

   // quantos aprovados
   printf("Houve %d positivas.\n", aprovados(aval));

   // melhor nota de cada turma
   for (int t = 0; t < TURMAS; t++)
      printf("Melhor da turma %d = %hu\n", t, melhorDaTurma(aval, t));

   // turma com mais aprovados
   printf("A turma %d teve mais aprovados.\n", turmaMaisAprovados(aval));

   return 0;
}

int aprovados(nota aval[ALUNOS][TURMAS]) {
   int aprov = 0;
   for (int t = 0; t < TURMAS; t++)
      for (int a = 0; a < ALUNOS; a++)
         if (aval[a][t] >= 10)
            aprov++;
   return aprov;
}

int melhorDaTurma(nota aval[ALUNOS][TURMAS], int turma) {
   nota melhor = 0;
   for (int a = 0; a < ALUNOS; a++)
      if (aval[a][turma] > melhor)
         melhor = aval[a][turma];
   return melhor;
}

int turmaMaisAprovados(nota aval[ALUNOS][TURMAS]) {
   int turma = 0;
   int aprovTurma = 0;
   int aprovMelhor = 0;
   for (int t = 0; t < TURMAS; t++) {
      aprovTurma = 0;
      for (int a = 0; a < ALUNOS; a++) {
         if (aval[a][t] >= 10)
            aprovTurma++;
      }
      if (aprovTurma > aprovMelhor) {
         aprovMelhor = aprovTurma;
         turma = t;
      }
   }
   return turma;
}
