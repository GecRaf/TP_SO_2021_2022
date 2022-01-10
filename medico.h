#ifndef MEDICO_H
#define MEDICO_H
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <errno.h>

#define SERVER_FIFO "SERVIDOR"
#define CLIENTE_FIFO "CLIENTE[%d]"
#define MEDICO_FIFO "MEDICO [%d]"

char MEDICO_FIFO_FINAL [100];

typedef struct 
{
	pid_t pid;
	char msg[100];
}dataMSGMDC;

typedef struct 
{
	char res[100];
}dataRPLMDC;

typedef struct medico {
	char nome[100];
	char especialidade[100];
}medico;

#endif