#include <stdio.h>
int main()
{
    int senha=2021, conf_senha=0, op=1, acesso=1;
    float voto=0, cont_voto=0, cont_a=0, cont_b=0, cont_c=0, cont_branco=0, cont_nulo=0, perc_a_univ, perc_b_univ, perc_c_univ, perc_a_valido, perc_b_valido, perc_c_valido, branco, nulo;
    
    printf("\n...Bem-vindo às eleições LOG/DSM - Fatec Osasco 2021...\n\n");
    while(op==1 && acesso==1){
        printf("Digite a senha para votação: ");
        scanf("%d", &conf_senha);
        if(conf_senha==senha){
            printf("\nSenha correta, vamos aos candidatos(as):\n");
        }else{
            printf("\nSenha incorreta, segunda tentativa\n");
            printf("Digite a senha para votação: ");
            scanf("%d", &conf_senha);
            if(conf_senha==senha){
                printf("\nSenha correta, vamos aos candidatos(as):\n");
            }else{
                printf("\nSenha incorreta, terceira e última tentativa\n");
                printf("Digite a senha para votação: ");
                scanf("%d", &conf_senha);
                if(conf_senha==senha){
                    printf("\nSenha correta, vamos aos candidatos(as):\n");
                }else{
                    printf("\nPrograma finalizado");
                    acesso=0;
                }
            }
        }
        if(acesso==1){
        printf("\nCandidatos às eleições da Fatec Osasco");
        printf("\nPara o candidato 'José' vote 11 (onze)");
        printf("\nPara o candidato 'Mateus' vote 22 (vinte e dois)");
        printf("\nPara o candidato 'Willian' vote 33 (trinta e três)");
        printf("\nPara votar 'Branco' vote 0 (zero)\n");
        printf("Seu Voto: ");
        scanf("%f", &voto);
            if(voto==11){
                printf("\nVocê votou no Candidato 'Jose'\n");
                cont_a++;
            }else{
                if(voto==22){
                    printf("\nVocê votou no Candidato 'Mateus'\n");
                    cont_b++;
                }else{
                    if(voto==33){
                        printf("\nVocê votou no Candidato 'Willian'\n");
                        cont_c++;
                    }else{
                        if(voto==00){
                            printf("\nVocê votou Branco\n");
                            cont_branco++;
                        }else{
                            printf("\nVocê votou Nulo\n");
                            cont_nulo++;
                            }
                        }
                    }
                }
            cont_voto++;
            do{
                printf("\nDeseja realizar um novo voto?");
                printf("\nDigite 1(um) para 'SIM'.");
                printf("\nDigite 0(zero para 'NÃO'.\n");
                printf("Sua opção: ");
                scanf("%d", &op);
            }while(op!=1 && op!=0);
    }
}
    if(acesso==1){
    printf("Digite a senha para continuar: ");
        scanf("%d", &conf_senha);
        if(conf_senha==senha){
            printf("\nSenha correta, computando os votos...\n");
        }else{
            printf("\nSenha incorreta, segunda tentativa\n");
            printf("Digite a senha para continuar: ");
            scanf("%d", &conf_senha);
            if(conf_senha==senha){
                printf("\nSenha correta, computando os votos...\n");
            }else{
                printf("\nSenha incorreta, terceira e última tentativa\n");
                printf("Digite a senha para continuar: ");
                scanf("%d", &conf_senha);
                
                if (conf_senha==senha){
                    printf("\nSenha correta, computando os votos...\n");
                }
                else{
                    printf("\nPrograma finalizado");
                    acesso=0;
                }
            }
        }
        if(acesso==1){
            perc_a_univ=(cont_a/cont_voto)*100;
            perc_b_univ=(cont_b/cont_voto)*100;
            perc_c_univ=(cont_c/cont_voto)*100;
            branco=(cont_branco/cont_voto)*100;
            nulo=(cont_nulo/cont_voto)*100;
            perc_a_valido=(cont_a/(cont_voto-(cont_branco+cont_nulo)))*100;
            perc_b_valido=(cont_b/(cont_voto-(cont_branco+cont_nulo)))*100;
            perc_c_valido=(cont_c/(cont_voto-(cont_branco+cont_nulo)))*100;
            
            if((cont_a>=cont_b) && (cont_b>=cont_c)){
                printf("\n\nRESULTADO DAS ELEIÇÕES\n\n");
                printf("\nPORCENTAGEM DO TOTAL DE VOTOS DO UNIVERSO:\n");
                printf("O candidato 'José' foi o primeiro mais votado com %.2f %% do total de votos.\n", perc_a_univ);
                printf("O candidato 'Mateus' foi o segundo mais votado com %.2f %% do total de votos.\n", perc_b_univ);
                printf("O candidato 'Willian' foi o terceiro mais votado com %.2f %% do total de votos.\n", perc_c_univ);
                printf("O percentual de votos Brancos foi de %.2f %%.\n", branco);
                printf("O percentual de votos Nulos foi de %.2f %%.\n", nulo);
                printf("\nPORCENTAGEM DO TOTAL DE VOTOS VÁLIDOS:\n");
                printf("Percentual de votos válidos do candidato 'José': %.2f %%.\n", perc_a_valido);
                printf("Percentual de votos válidos do candidato 'Mateus': %.2f %%.\n", perc_b_valido);
                printf("Percentual de votos válidos do candidato 'Willian': %.2f %%.\n", perc_c_valido);
                printf("\nVALORES ABSOLUTOS POR CANDIDATO:\n");
                printf("Total de votos do candidato 'José': %.0f.\n", cont_a);
                printf("Total de votos do candidato 'Mateus': %.0f.\n", cont_b);
                printf("Total de votos do candidato 'Willian': %.0f.\n", cont_c);
                
            }else{
                if((cont_a>=cont_c) && (cont_c>=cont_b)){
                    printf("\n\nRESULTADO DAS ELEIÇÕES\n\n");
                    printf("\nPORCENTAGEM DO TOTAL DE VOTOS DO UNIVERSO:\n");
                    printf("O candidato 'José' foi o primeiro mais votado com %.2f %% do total de votos.\n", perc_a_univ);
                    printf("O candidato 'Willian' foi o segundo mais votado com %.2f %% do total de votos.\n", perc_c_univ);
                    printf("O candidato 'Mateus' foi o terceiro mais votado com %.2f %% do total de votos.\n", perc_b_univ);
                    printf("O percentual de votos Brancos foi de %.2f %%.\n", branco);
                    printf("O percentual de votos Nulos foi de %.2f %%.\n", nulo);
                    printf("\nPORCENTAGEM DO TOTAL DE VOTOS VÁLIDOS:\n");
                    printf("Percentual de votos válidos do candidato 'José': %.2f %%.\n", perc_a_valido);
                    printf("Percentual de votos válidos do candidato 'Willian': %.2f %%.\n", perc_b_valido);
                    printf("Percentual de votos válidos do candidato 'Mateus': %.2f %%.\n", perc_c_valido);
                    printf("\nVALORES ABSOLUTOS POR CANDIDATO:\n");
                    printf("Total de votos do candidato 'José': %.0f.\n", cont_a);
                    printf("Total de votos do candidato 'Willian': %.0f.\n", cont_c);
                    printf("Total de votos do candidato 'Mateus': %.0f.\n", cont_b);
                }else{
                    if((cont_b>=cont_a) && (cont_a>=cont_c)){
                        printf("\n\nRESULTADO DAS ELEIÇÕES\n\n");
                        printf("\nPORCENTAGEM DO TOTAL DE VOTOS DO UNIVERSO:\n");
                        printf("O candidato 'Mateus' foi o primeiro mais votado com %.2f %% do total de votos.\n", perc_b_univ);
                        printf("O candidato 'José' foi o segundo mais votado com %.2f %% do total de votos.\n", perc_a_univ);
                        printf("O candidato 'Willian' foi o terceiro mais votado com %.2f %% do total de votos.\n", perc_c_univ);
                        printf("O percentual de votos Brancos foi de %.2f %%.\n", branco);
                        printf("O percentual de votos Nulos foi de %.2f %%.\n", nulo);
                        printf("\nPORCENTAGEM DO TOTAL DE VOTOS VÁLIDOS:\n");
                        printf("Percentual de votos válidos do candidato 'Mateus': %.2f %%.\n", perc_b_valido);
                        printf("Percentual de votos válidos do candidato 'José': %.2f %%.\n", perc_a_valido);
                        printf("Percentual de votos válidos do candidato 'Willian': %.2f %%.\n", perc_c_valido);
                        printf("\nVALORES ABSOLUTOS POR CANDIDATO:\n");
                        printf("Total de votos do candidato 'Mateus': %.0f.\n", cont_b);
                        printf("Total de votos do candidato 'José': %.0f.\n", cont_a);
                        printf("Total de votos do candidato 'Willian': %.0f.\n", cont_c);
                    }else{
                        if((cont_b>=cont_c) && (cont_c>=cont_a)){
                            printf("\n\nRESULTADO DAS ELEIÇÕES\n\n");
                            printf("\nPORCENTAGEM DO TOTAL DE VOTOS DO UNIVERSO:\n");
                            printf("O candidato 'Mateus' foi o primeiro mais votado com %.2f %% do total de votos.\n", perc_b_univ);
                            printf("O candidato 'Willian' foi o segundo mais votado com %.2f %% do total de votos.\n", perc_c_univ);
                            printf("O candidato 'José' foi o terceiro mais votado com %.2f %% do total de votos.\n", perc_a_univ);
                            printf("O percentual de votos Brancos foi de %.2f %%.\n", branco);
                            printf("O percentual de votos Nulos foi de %.2f %%.\n", nulo);
                            printf("\nPORCENTAGEM DO TOTAL DE VOTOS VÁLIDOS:\n");
                            printf("Percentual de votos válidos do candidato 'Mateus': %.2f %%.\n", perc_b_valido);
                            printf("Percentual de votos válidos do candidato 'Willian': %.2f %%.\n", perc_c_valido);
                            printf("Percentual de votos válidos do candidato 'José': %.2f %%.\n", perc_a_valido);
                            printf("\nVALORES ABSOLUTOS POR CANDIDATO:\n");
                            printf("Total de votos do candidato 'Mateus': %.0f.\n", cont_b);
                            printf("Total de votos do candidato 'Willian': %.0f.\n", cont_c);
                            printf("Total de votos do candidato 'José': %.0f.\n", cont_a);
                        }else{
                            if((cont_c>=cont_a) && (cont_a>=cont_b)){
                                printf("\n\nRESULTADO DAS ELEIÇÕES\n\n");
                                printf("\nPORCENTAGEM DO TOTAL DE VOTOS DO UNIVERSO:\n");
                                printf("O candidato 'Willian' foi o primeiro mais votado com %.2f %% do total de votos.\n", perc_c_univ);
                                printf("O candidato 'José' foi o segundo mais votado com %.2f %% do total de votos.\n", perc_a_univ);
                                printf("O candidato 'Mateus' foi o terceiro mais votado com %.2f %% do total de votos.\n", perc_b_univ);
                                printf("O percentual de votos Brancos foi de %.2f %%.\n", branco);
                                printf("O percentual de votos Nulos foi de %.2f %%.\n", nulo);
                                printf("\nPORCENTAGEM DO TOTAL DE VOTOS VÁLIDOS:\n");
                                printf("Percentual de votos válidos do candidato 'Willian': %.2f %%.\n", perc_c_valido);
                                printf("Percentual de votos válidos do candidato 'José': %.2f %%.\n", perc_a_valido);
                                printf("Percentual de votos válidos do candidato 'Mateus': %.2f %%.\n", perc_b_valido);
                                printf("\nVALORES ABSOLUTOS POR CANDIDATO:\n");
                                printf("Total de votos do candidato 'Willian': %.0f.\n", cont_c);
                                printf("Total de votos do candidato 'José': %.0f.\n", cont_a);
                                printf("Total de votos do candidato 'Mateus': %.0f.\n", cont_b);
                            }else{
                                printf("\n\nRESULTADO DAS ELEIÇÕES\n\n");
                                printf("\nPORCENTAGEM DO TOTAL DE VOTOS DO UNIVERSO:\n");
                                printf("O candidato 'Willian' foi o primeiro mais votado com %.2f %% do total de votos.\n", perc_c_univ);
                                printf("O candidato 'Mateus' foi o segundo mais votado com %.2f %% do total de votos.\n", perc_b_univ);
                                printf("O candidato 'José' foi o terceiro mais votado com %.2f %% do total de votos.\n", perc_a_univ);
                                printf("O percentual de votos Brancos foi de %.2f %%.\n", branco);
                                printf("O percentual de votos Nulos foi de %.2f %%.\n", nulo);
                                printf("\nPORCENTAGEM DO TOTAL DE VOTOS VÁLIDOS:\n");
                                printf("Percentual de votos válidos do candidato 'Willian': %.2f %%.\n", perc_c_valido);
                                printf("Percentual de votos válidos do candidato 'Mateus': %.2f %%.\n", perc_b_valido);
                                printf("Percentual de votos válidos do candidato 'José': %.2f %%.\n", perc_a_valido);
                                printf("\nVALORES ABSOLUTOS POR CANDIDATO:\n");
                                printf("Total de votos do candidato 'Willian': %.0f.\n", cont_c);
                                printf("Total de votos do candidato 'Mateus': %.0f.\n", cont_b);
                                printf("Total de votos do candidato 'José': %.0f.\n", cont_a);
                            }
                        }
                    }
                }
            }
        }
    }
}