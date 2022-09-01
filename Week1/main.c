

#include <stdio.h> // nodig voor input output
int main(void) { // main functie, deze functie wordt altijd als eerste aangeroepen in je programma (functies volgen later)

	printf("Welkom bij basis programmeren in C");

	// dit is een comment, dus deze wordt genegeerd

	// Wat nu als we op meerdere regels willen printen?
	printf("regel1 \n regel2 \n regel3\n");


	// regel 1 zit nog op de allereerste regel, net als welkom bij ... Dit is omdat de compiler nog geen instructie heeft gekregen om naar de volgende regel te springen
	//zoals je ziet hoef je niet eens afstand te houden tussen tekst en de speciale code \n

	// Hoe zit het met getallen?
	// een getal moet in een variabele staan. We hebben verschillende soorten. Dit zijn integers, floats, doubles, etc.
	int integer1;
	integer1 = 12;

	printf("getal is %d. Dit is een integer (geheel getal) \n",integer1);

	// Laten we eens een getal vragen aan de gebruiker. Hiervoor gebruiken we scanf.


	int integer2 =33;

	//printf("Voer een geheel getal in: ");
	//scanf("%d", &integer2); // we scannen nu naar een input van de gebruiker. We slaan het ingevoerde getal op in integer2

	// Laten we eens het ingevoerde getal printen


	//printf("Het ingevoerde getal was %d", integer2);

	// je krijgt een error, namelijk ... This function or variable may be unsafe. Om deze error even uit te zetten gebruiken we de volgende workaround:
	// Kies project en dan properties in de toolbar boven
	// kies bij configuration op All configurations
	// Onder C/C++ klik je op Preprocessor
	// Klik naast preprocessor definitions op het pijltje naar beneden.
	// Kies edit
	// Voeg de volgende string toe: _CRT_SECURE_NO_WARNINGS
	// Bron: https://stackoverflow.com/questions/16883037/remove-secure-warnings-crt-secure-no-warnings-from-projects-by-default-in-vis

	// Nu kunnen we bijvoorbeeld twee getallen optellen. Laten we dat doen.


	int a, b; // zie hoe we hier twee variabelen aanmaken

	printf("Voer getal A in:");
	scanf("%d", &a);
	printf("Voer getal B in: ");
	scanf("%d", &b);
	printf("De som is %d\n", a + b);

	printf("Wat is het adres van integer1? Dat is: %d", &integer1);

}
