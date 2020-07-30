//Simulate rent a car


#include <stdio.h>

int main(){
    
    int grundPauschale = 73.00;
    int aufschlagJung = 10.00;
    int aufschlagAlt = 10000.00;
    int anfangKm;
    int endKm;
    int gefahreneKm;
    int alter;
    int gesamtBetrag;
    
    
    printf("Berechnung der Mietkosten für 1 Auto \n");
    
    printf("Bitte Anfangs-Km-Stand eingeben: \n");
    scanf("%i",&anfangKm);
    
    printf("Bitte End-Km-Stand einegben: \n");
    scanf("%i",&endKm);
    
    gefahreneKm = anfangKm - endKm;
    printf("Gefahrene Km: %i \n",gefahreneKm);
    
    printf("Bitte geben Sie ihr Alter ein: \n");
    scanf("%i",&alter);
    
    if(alter < 23){
        
        gesamtBetrag = grundPauschale + aufschlagJung;
        
        printf("Preis:Fahrer unter 23 Jahre.Grundpauschale plus Aufschlag ergibt einen Gesamtbetrag von %i Euro \n",gesamtBetrag);
    }
     if(alter > 70){
            
            gesamtBetrag = grundPauschale + aufschlagAlt;
            
            printf("Preis:Fahrer über 70 Jahe.Grunfdpauschale plus Aufschlag ergibt einen Gesamtbetrag von %i Euro \n",gesamtBetrag);
         
        }
    if(alter >= 23 && alter <= 70 ){
        
        printf("Preis:Der Gesamtbetrag beträgt %i Euro \n",grundPauschale);
    }
        
        return 0;
    
}
