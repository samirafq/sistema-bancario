typedef struct contabancaria ContaBancaria;
ContaBancaria* adiciona_conta(void);
//void remover_conta(ContaBancaria *conta);
void imprime_conta(ContaBancaria* conta);
Lista* buscar_conta(int elemento, Lista* l);
/*Lista* consultar_conta_ativa(int elemento, Lista* l);
void consultar_quantitativo_de_agencias(char agencia, char cliente, char data_de_abertura, float saldo, char status, int numeroa);
void sair_conta(char agencia, char cliente, char data_de_abertura, float saldo, char status, int numero);
void salvarArquivo(char **agencia, char *cliente, char** data_de_abertura, float *saldo, char **status, unsigned int* numero, int cont);*/
