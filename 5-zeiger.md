# 5-Zeiger
---

## 5.1 Adressen und Variablen Übung

1. Erstellen Sie eine Variable vom Typ char.
2. Zeigen Sie den Inhalt der Variable, ihre Größe im Speicher und ihre 	Adresse an.

		-Informationen über meine Variable: 
			Typ: char
			Größe: 1 Byte
			Inhalt: A
			Adresse: 0060FF0F
			

## 5.2 Zeiger Übung

1. Erstellen Sie eine Ganzzahlvariable und einen Zeiger.
2. Stellen Sie sicher, dass Sie den Zeiger verwenden, um eine Benutzereingabe 	zu machen.
3. Zeigen Sie den Inhalt der Benutzereingabe und die Adresse an, unter der 	diese Information gespeichert ist.

		->Geben Sie eine ganze Zahl an: 8
		->Der Wert 8 wird an der Adresse 0023541 gespeichert.

## 5.3 Invertieren von Variablen Übung

1. Sorgen Sie dafür, dass der Inhalt dieser beiden Variablen mithilfe von 	Zeigern umgekehrt wird. Sie sollten Name und Vorname nicht direkt ändern.

		->char vorname = 'A', nachname='Z';
		
		->char* p_vorname = &prenom;
		->char* p_nom = &nom;
		
		->print("Ihre Initialen %c.%c\", prenom, nom); 
		
		//Inversion
   		->printf("Ihre Initialen %c.%c.n", vorname, nachname);
 
## 5.4 sos crash Übung

 1. Korrigieren Sie das Absturzproblem des folgenden Codes

 		->int alt=23;
 		->int* p_alt;
 		
 		->print("Wie alt sind Sie?"); 
 		->scanf("%d", p_alt);
 		
 		->printf("Sie sind %d Jahre alt", age);
 