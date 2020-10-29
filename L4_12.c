#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int matricula;
  float n1;
  float n2;
  float n3;
} tAluno;

tAluno LeAluno();
float Media(tAluno aluno);
tAluno MaiorMedia(tAluno aluno,tAluno aluno_maior_media);
void ImprimirAluno(tAluno aluno_maior_media);

int main(){
  float media_geral = 0, media_maior = -10000;
  tAluno aluno, aluno_maior_media;
  aluno_maior_media.n1 = -10, aluno_maior_media.n2 = -10, aluno_maior_media.n3 = -10;
  int n, i = 1;
  scanf("%d", &n);
  for( i; i <= n; i++ ){
    aluno = LeAluno();
    media_geral += Media(aluno);
    aluno_maior_media = MaiorMedia(aluno, aluno_maior_media);
  }
  printf("Maior media: mat:%d n1:%.2f n2:%.2f n3:%.2f\n", aluno_maior_media.matricula, aluno_maior_media.n1, aluno_maior_media.n2, aluno_maior_media.n3);
  printf("Media geral: %.2f", (media_geral/n));
  return 0;
}

tAluno LeAluno(){
  tAluno aluno;
  scanf("%d %f %f %f", &aluno.matricula, &aluno.n1, &aluno.n2, &aluno.n3);
  return aluno;
}

float Media(tAluno aluno){
  float media = ((aluno.n1+aluno.n2+aluno.n3)/3);
  return media;
}

tAluno MaiorMedia(tAluno aluno,tAluno aluno_maior_media){
  if (Media(aluno) > Media(aluno_maior_media)){
    return aluno;
  }else{
    return aluno_maior_media;
  }
}