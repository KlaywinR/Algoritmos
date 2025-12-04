import re 

def view_menu():
    print("\n --- Question Viewing Menu - Prova Teste ---")
    print("1 - EXAMPLE 01 - Codes Products")
    print("2 - EXAMPLE 02 - Emails Validation")
    print("3 - EXAMPLE 03 - Password Validation")
    print("4 - EXAMPLE 04 - Extract Dates")
    print("5 - EXAMPLE 05 - Log Extract")
    print("00 - Exit to menu.")

#!___________________________________________________________
pattern_products = r'PROD-\d{5}-\d{4}'
pattern_emails   = r'^[a-zA-Z0-9._-]+@[a-zA-Z]+(\.[a-zA-Z]+)+$'
pattern_dates    = r'\d{2}\/\d{2}\/\d{4}'
pattern_log      = r'\[(\d{2}\/\d{2}\/\d{4}) (\d{2}:\d{2}:\d{2})\]\s+(INFO|WARNING|ERROR|DEBUG):\s+(.*)'
pattern_password = r'^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$'

#!________________DATAS OF TESTS______________________________
products = [
    "PROD-12345-6789",
    "PROD-16262-6452",
    "PROD-88441-2245",
    "PROD-13335-6249",
]

emails = [
    "klaywin.dias@gmail.com",
    "aluisio_fontes-22@empresa.com.br",
    "test@dominio.net",
]

date_text = "Olá, nasci no dia 24/09/2022 e comprei algo em 15/01/2024."

log_text = "[22/12/2025 12:45:24] ERROR: Failed to autenticate access password."

#!________________________FUNCTIONS____________________________

def codes_products(lista):
    joined_text = " ".join(lista)
    print("\nList of Products: ", joined_text)
    print("\nFound Products:")
    print(re.findall(pattern_products, joined_text))

def emails_validation(list):
    print("\nList of Emails: ", list)
    print("\nEmails Validation:")
    for e in list:
        print(f"{e} --> {bool(re.match(pattern_emails, e))}")

def password_validation():
    password = input("Write a one password to validate: ")
    if re.match(pattern_password, password):
        print("Valid Password!")
    else:
        print("Invalid Password!")

def extract_dates(text):
    print("\nComplete Text: ", text)
    print("\nFound Dates:")
    print(re.findall(pattern_dates, text))

def log_extract(text):
    match = re.findall(pattern_log, text)
    if match:
        date, hour, severity, message = match[0]
        print("\n===== Extract LOgs =====")
        print("Date: ", date)
        print("Hour: ", hour)
        print("Severidade:", severity)
        print("Menssage: ", message)
        print("========================")
    else:
        print("Not find logs")

#!________________________MAIN MENU_________________________
while True:
    view_menu()
    option = input("Please, choose an option: ")

    if option == "1":
        codes_products(products)

    elif option == "2":
        emails_validation(emails)

    elif option == "3":
        password_validation()

    elif option == "4":
        extract_dates(date_text)

    elif option == "5":
        log_extract(log_text)

    elif option == "00":
        print("Exit to menu...")
        break

    else:
        print("Invalid Option!\n")
