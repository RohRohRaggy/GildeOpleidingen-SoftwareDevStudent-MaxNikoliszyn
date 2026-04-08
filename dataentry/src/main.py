import csv
import os

def registratie():
    print("--- Urenregistratie Systeem ---")
    
    datum = input("Datum (dd-mm-jjjj): ")
    project = input("Project naam: ")
    uren = input("Aantal gewerkte uren: ")
    omschrijving = input("Wat heb je gedaan?: ")

    bestandsnaam = 'uren.csv'
    header = ['Datum', 'Project', 'Uren', 'Omschrijving']
    file_exists = os.path.isfile(bestandsnaam)

    with open(bestandsnaam, mode='a', newline='') as file:
        writer = csv.writer(file)
        if not file_exists:
            writer.writerow(header)
        writer.writerow([datum, project, uren, omschrijving])

    print(f"\nData succesvol opgeslagen in {bestandsnaam}!")

if __name__ == "__main__":
    registratie()