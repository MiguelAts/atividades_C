int main(int argc, char const *argv[])
{
    float notas[10];
    float soma=0.0, media;
    int i, cont=0;

    for(i = 0; i < 10; i++) {
        printf("Informe as notas dos alunos %d:", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/10.0;
    for(i = 0; i < 10; i++) {
        if(notas[i] > media) {
            cont++;
        }
    }
    printf("Número de alunos com nota acima da média: %d\n", cont);

    return 0;
}
