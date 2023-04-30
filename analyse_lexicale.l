/*
 * Analyseur lexical du compilateur L en FLEX
 */
 
%{
#include "arbre_abstrait.h"
#include "symboles.h"
%}
%option yylineno
%option nounput
%option noinput


entier               ([1-9][0-9]*|0)
chiffre              [0-9]
lettre               [a-zA-Z]
alphanum             ({lettre}|{chiffre})
booleen              ((Vrai)|(Faux))
espace               [ \t\r\n]

%%
"#".*                { /* Ignorer commentaires */  }
{espace}+            { /* Ignorer espaces */       }
"+"                  { return PLUS;                }
"*"                  { return FOIS;                }
"("                  { return PARENTHESE_OUVRANTE; }
")"                  { return PARENTHESE_FERMANTE; }
"ecrire"             { return ECRIRE;              }
"="                  { return AFFECTATION;         }
"=="                 { return EGAL;                }
"!="                 { return DIFFERENT;           }
"<"                  { return INFERIEUR;           }
"<="                 { return INFERIEUR_EGAL;      }
">"                  { return SUPERIEUR;           }
">="                 { return SUPERIEUR_EGAL;      }
"{"                  { return ACCOLADE_OUVRANTE;   }
"}"                  { return ACCOLADE_FERMANTE;   }
"lire"               { return LIRE;                }
";"                  { return POINT_VIRGULE;       }
","                  { return VIRGULE;             }
"tantque"            { return TANT_QUE;            }
"si"                 { return SI;                  }
"sinon"              { return SINON;               }
"sinon si"           { return SINON_SI;            }
"retourner"          { return RETOURNER;           }
"et"                 { return ET;                  }
"ou"                 { return OU;                  }
"non"                { return NON;                 }
"-"                  { return MOINS;               }
"/"                  { return DIVISE;              }
"%"                  { return MODULO;              }
"entier"             { return TYPE_ENTIER;         }
"booleen"            { return TYPE_BOOLEEN;        }
{entier}             { yylval.entier = atoi(yytext); return ENTIER;}
{booleen}            {
                        if (strcmp(yytext,"Vrai") == 0){
                            yylval.entier = 1;
                        }else{
                            yylval.entier = 0;
                        }
                        return BOOLEEN;
                      }
{lettre}{alphanum}*  { yylval.ident = strdup(yytext); return IDENTIFIANT;         }
<<EOF>>              { return FIN; }  /* Fin de fichier */
.                    {                                /* Erreur, autre caractètre quelconque */
                       fprintf(stderr, "Ligne %d : Caractère invalide %s\\n", yylineno, yytext);
                       exit(-1);
                     } 
%%
int yywrap(){
  return 1;
}

/*******************************************************************************
 * Fonction auxiliaire qui donne le nom des différents tokens
 ******************************************************************************/

int token_fermes[] = {PLUS,FOIS,PARENTHESE_OUVRANTE,PARENTHESE_FERMANTE,POINT_VIRGULE,ECRIRE,
                        AFFECTATION,EGAL,DIFFERENT,INFERIEUR,INFERIEUR_EGAL,SUPERIEUR,SUPERIEUR_EGAL,
                        ACCOLADE_OUVRANTE,ACCOLADE_FERMANTE, LIRE, VIRGULE,TANT_QUE, SI, SINON, SINON_SI,
                        RETOURNER, ET, OU, NON, MOINS, DIVISE, MODULO};
char *str_token[] = {"+", "*", "(", ")", ";", "ecrire",
                        "=", "==", "!=", "<", "<=", ">", ">=",
                        "{", "}", "lire", ",", "tantQue", "si", "sinon", "sinon si",
                        "retourner", "et", "ou", "non", "-", "/", "%"};

int nbMotsClefs = 28;

void nom_token( int token, char *nom, char *valeur ) {

  for(int i = 0; i < nbMotsClefs;i++){
  	if(token == token_fermes[i]){
  	  strcpy( nom, "symbole" );
  	  strcpy( valeur, str_token[i]);
  	  return;
  	}
  }
  
  if( token == ENTIER ) {
    strcpy( nom, "entier" );
    strcpy( valeur, yytext);
    return;
  }
  if( token == IDENTIFIANT ) {
    strcpy( nom, "identifiant" );  
    strcpy( valeur, yytext );
    return;
  }
  if (token == ECRIRE){
    strcpy( nom, "ecrire" );
    strcpy( valeur, "ecrire" );
    return;
  }
  if (token == BOOLEEN){
    strcpy( nom, "booleen" );
    strcpy( valeur, yytext );
    return;
  }
  if (token == TYPE_ENTIER){
    strcpy( nom, "type_entier" );
    strcpy( valeur, "entier" );
    return;
  }
    if (token == TYPE_BOOLEEN){
        strcpy( nom, "type_booleen" );
        strcpy( valeur, "booleen" );
        return;
    }

}

/*******************************************************************************
 * Fonction auxiliaire appelée par le compilateur en mode -l pour tester l'analyse
 * lexicale. Le fichier source doit être indiqué dans la variable globale yyin.
 * Cette fonction imprime le résultat de l'analyse lexicale sur la sortie standard.
 ******************************************************************************/
void afficher_analyse_lexicale() {
  int uniteCourante;
  char nom[100];
  char valeur[100]; 
    uniteCourante = yylex();  
  while (uniteCourante != FIN) {
    nom_token( uniteCourante, nom, valeur );
    printf("%s\t%s\t%s\n", yytext, nom, valeur);
    uniteCourante = yylex(); 
  } 
}
