#include<stdio.h>

    void main()

        {
            float TP=1441981744;
            float TWPer=48.4;
            float TLPer=85.95,TMLPer=80.95,TWLPer=62.84;

            float TWP=TP*TWPer/100;
            float TMP=TP-TWP;

            float TLM=TMP*TMLPer/100;
            float TLW=TWP*TWLPer/100;
            float TL=TP*TLPer/100;

            float TILM=TMP-TLM;
            float TILW=TWP-TLW;

            printf("Total number of Literate people in India is around\t : %.2f\n",TL);

            printf("Total Male Population of India is around\t\t : %.2f\n",TMP);

            printf("Total number of Literate Males in India is around\t : %.2f\n",TLM);

            printf("Total number of Illiterate Males in India is around\t : %.2f\n",TILM);

            printf("Total Female Population of India is around\t\t : %.2f\n",TWP);

            printf("Total number of Literate Females in India is around\t : %.2f\n",TLW);

            printf("Total number of Illiterate Females in India is around\t : %.2f\n",TILW);

            printf("Total number of Literate people in India is around\t : %.2f\n",TLM+TLW);

            printf("Total number of Illiterate people in India is around\t : %.2f\n",TILM+TILW);

            printf("\n");

            printf("Total Literacy gap between Male & Female is around\t : %.2f\n",TLM-TLW);

            printf("\n");
            printf("\n");

            printf("\t\t Total Male\t Total Female\n");

            printf("\n");

            printf("Population\t %.2f\t %.2f\n",TMP,TWP);

            printf("Literate\t %.2f\t %.2f\n",TLM,TLW);

            printf("Illiterate\t %.2f\t %.2f\n",TILM,TILW);
        }
