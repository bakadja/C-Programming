# 4-Schleifen
---

## 4.1 Countdown Übung

1. Bitten Sie den Nutzer, eine ganze Zahl einzugeben.
2. Zählen Sie von der vom Benutzer eingegebenen Zahl rückwärts bis 0.
	
		- Geben Sie eine ganze Zahl für den Countdown ein: 3
		- 3
		- 2
		- 1
		- Boom!

## 4.2 Sinus und Kosinus Übung

1. Erstellen Sie ein Programm, das die Kosinuswerte aller Winkel von 0 bis X 	Grad in Schritten von 1 anzeigt. X ist die Zahl, die der Benutzer über die 	Tastatur eingibt.

2. Geben Sie die Sinuswerte aller Winkel von 0 bis X Grad in Schritten von 2 	aus.

		- Geben Sie einen maximalen Winkel in Grad an: 5
		- cos(0) = 1.000000
		- sin(0) = 0.000000 
		- cos(1) = 0.540302 
		- cos(2) = -0.416147 
		- sin(2) = 0.909297 
		- cos(3) = -0.989992 
		- cos(4) = -0.653644 
		- sin(4) = -0.756802 
		- cos(5) = 0.283662 
	
	

## 4.3 Pincode Übung

1. Erstellen Sie ein Programm, das den Benutzer auffordert, den vierstelligen 	PIN-Code einzugeben. Wenn er den richtigen Code findet, wird die Meldung 	"Telefon entsperrt" angezeigt, andernfalls wird eine Fehlermeldung angezeigt 	und der Benutzer wird erneut zur Eingabe des Codes aufgefordert.

2. Verwalten Sie eine maximale Anzahl von Versuchen: Beispiel: 3 Versuche.

		- PIN-Code: 1234
		- Fehler, Sie haben noch 2 Versuche.
		- PIN-Code: 0000
		- Telefon entsperrt	
		
## 4.4 ASCII-Tabelle Übung
	
		- MEINE ASCII-TABELLE
		- ...
		- Hex	Dec	 Char 
		- 0x41  65    A 
		- 0x42  66    B 
		- 0x43  67    C 
		- 0x44  68    D
		- ...
1. Zeige die ASCII-Tabelle zwischen dem Dezimalwert 32 und 126 an. 
	- Zeichen
	- Decimal
	- Hexadezimal
		
	

## 4.5 Primzahl Übung

1. Schreibe ein C-Programm, das eine Ganzzahl liest und dann feststellt, ob sie eine Primzahl ist oder nicht.
2. Eine ganze Zahl ist eine Primzahl, wenn sie genau zwei verschiedene Teiler hat: 1 und sich selbst.
Beispiel: 2, 3 und 7 sind Primzahlen, aber 4, 10 und 27 sind es nicht.

		- Geben Sie eine ganze Zahl an: 2
		- ist eine Primzahl

## 4.6 Multiplikationstabelle Übung

1. Zeige die Multiplikationstabelle der vom Benutzer eingegebenen ganzen Zahl.
2. Zeige die Multiplikationstabellen zwischen 0 und der vom Benutzer eingegebenen ganzen Zahl.

		- Wie viele Multiplikationstabellen sollen angezeigt werden? 3
		- 3x0 = 0
		- 3x1 = 3
		- 3x2 = 6
		- 3x3 = 9
	

## 4.7 Stein Blatt Schere übungen

- Wir werden ein **kleines Spiel** im Stil von **"Stein, Blatt, Schere"** entwickeln. Der Spieler wird gegen den Computer spielen. Das heißt, es wird zufällig generiert, was der Computer spielt.

- Um die Dinge zu vereinfachen, wird das Spiel in **drei Gewinnsätzen** gespielt. Außerdem werden wir für die Benutzereingabe eine ganze Zahl einlesen (1- Stein, 2- Blatt, 3- Schere).

		- Was willst du spielen (1- Stein, 2- Blatt, 3- Schere): 1 
		Spieler spielt 1 und der Computer spielt 1 >>>> Unentschieden  
		Punkte: Computer: 0 und Spieler: 0

		- Was willst du spielen (1- Stein, 2- Blatt, 3- Schere): 1 
		Spieler spielt 1 und der Computer spielt 3 >>>> Spieler gewinnt 1 Punkt 		Punkte: Computer: 0 und Spieler: 1
		
		- Was möchtest du spielen (1- Stein, 2- Blatt, 3- Schere)?

## 4.8 der faire Preis Übung

- Wir werden ein **kleines Spiel** im Stil von **"Der richtige Preis"** erstellen. Für jüngere Kinder ist das eine alte Fernsehshow, bei der die Teilnehmer den Preis für einen Gegenstand ermitteln sollen. Sie machen dann Vorschläge und der Moderator sagt einfach "das ist mehr" oder "das ist weniger", bis einer von ihnen den richtigen Preis gefunden hat. Aber natürlich gibt es ein Zeitlimit!

- Wir bitten den Benutzer, eine ganze Zahl **zwischen 1 und 100** zu finden. Er kann dann Vorschläge machen und für jeden Vorschlag wird **"Das ist mehr!"** oder **"Das ist weniger!"** angezeigt. Wenn der Benutzer die richtige Zahl gefunden hat, wird eine Glückwunschmeldung angezeigt und das Programm beendet. Der Spieler hat **10 Versuche.**

		...
		> 23
		ist mehr!
		> 30
		ist weniger!
		>25
		Gut gemacht! Die geheimnisvolle Zahl ist 25


## 4.9 dreieck sterne übung
1. Bitten Sie den Nutzer, eine Anzahl von Zeilen zwischen 3 und 10 einzugeben.
2. Zeigen Sie ein gleichschenkliges Dreieck an, das aus Sternen mit X Zeilen 	gebildet wird (X ist die vom Nutzer eingegebene Zahl).

		Geben Sie eine Anzahl von Zeilen [3-10] an: 3
		
		  *
		 ***
	  	*****
	  
		 