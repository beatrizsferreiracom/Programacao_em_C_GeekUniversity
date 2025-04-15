//Tipos Booleanos - Verdadeiro ou Falso

/*A linguagem C não posui tipo boolean, mas reconhece 0 como falso (false)
e qualquer valor diferente de 0 como verdadeiro (true)*/

int main(){

    int booleano = 1;

    if(booleano){
        printf("Verdadeiro");
    }
    else{
        printf("Falso");
    }

    return 0;
}