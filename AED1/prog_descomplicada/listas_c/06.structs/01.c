#include <stdio.h>

typedef struct {
        int hora;
        int minutos;
        int segundos;
    } Horarios;

    typedef struct {
        int dia;
        int mes;
        int ano;
    } Data;

    typedef struct { 
        Data data;
        Horarios horario;
        char texto[100];
    } Compromisso;
