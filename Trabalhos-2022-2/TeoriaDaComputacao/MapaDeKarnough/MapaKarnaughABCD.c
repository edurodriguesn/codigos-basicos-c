#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a,b,c,k=0,karnoughtres[4][4],linha,coluna,s[16];
    char expressao[20],SAIDA[100];
    FILE *file;
    file=fopen("tabelaverdade.txt","r");
    if (file==NULL)
        printf("Problema na leitura do arquivo\n");
    while(!feof(file))
	{	
		fgets(SAIDA,100,file);	
        s[linha]=atoi(SAIDA);
		linha++;     
    }
    for(linha=0;linha<2;linha++)
    {
        for(coluna=0;coluna<4;coluna++)
        {
            if(coluna<2)
            {
                karnoughtres[linha][coluna]=s[k];
                k++;
            }
            else
            {
                k++;
                karnoughtres[linha][coluna]=s[k];
                k-=2;
            }
        }
        k+=4;
    }
    for(linha=3;linha>=2;linha--)
    {
        for(coluna=0;coluna<4;coluna++)
        {
            if(coluna<2)
            {
                karnoughtres[linha][coluna]=s[k];
                k++;
            }
            else
            {
                k++;
                karnoughtres[linha][coluna]=s[k];
                k-=2;
            }
        }
        k+=4;
    }
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=3;j++)
            printf("%d ",karnoughtres[i][j]);
        printf("\n");
    }
    return 0;
}