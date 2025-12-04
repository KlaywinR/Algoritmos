import re 

def view_menu():
    print("\n--- Question viewing menu---")
    print("1 - View Example One - Email Validate")
    print("2 - View Example Two - Extract Phones")
    print("3 - View Example Three - Replace URLS")
    print("4 - View Whole Numbers")
    print("5 - View Phone number")
    print("6 - View Valid phone number")
    print("7 - View Word order")
    print("8 - View CPF of words")
    print("9 - View CEPS of a text")
    print("10 - View text without special character")
    print("11 - View words without accents")
    print("12 - View No HTML code")
    print("13 - View remove all numbers from the text")
    print("14 - View words that begin and end with a vowel")
    print("15 - View words that begin and end with a vowel")
    print("0 - Exit the menu")
    
def validate_email(email): ## 1
    pattern  = r'^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'
    return bool(re.match(pattern, email))

def extract_phones(text): # extrair telefones de um determinado textó
    pattern = r'\b\d{3}[-\s]?\d{3}[-\s]?\d{3,4}\b'
    return re.findall(pattern, text)

def replace_urls(text): 
    pattern = r'https?://\S+'
    return re.sub(pattern,'[LINK]', text)
 
def is_number(s: str) -> bool:
    s = s.strip()
    pattern = r'^[+-]?\d+(\.\d+)?$'
    return bool(re.fullmatch(pattern, s))

def is_valid_phone_number(phone: str ) -> bool: #repara se o numero de celular é válido
    phone = phone.strip()
    pattern = r'^\(?\d{2,3}\)?[-\s]?\d{4,5}[-\s]?\d{4}$'
    return bool(re.fullmatch(pattern, phone))

def format_phone(s): #verifica se o formato do numero de celular é válido
    d = re.sub(r'\D', '', s)
    if re.fullmatch(r'\d{10}', d):
        return  f"({d[:2]}) {d[2:6]}-{d[6:]}"
    if re.fullmatch(r'\d{10}',d):
        return f"({d[:2]}){d[2:7]}-{d[7:]}"

def question1(): 
    s = input("\nDigite um número para validar: ").strip()
    print(f"Validação do Numero: {s!r}: | Situação da Validação: {is_number(s)}")

def question2():
    phone = input("\nDigite um número de telefone para validar: ").strip()
    print(f"Validação do Numero: {phone!r}: | Situação da Validação: {is_valid_phone_number(phone)}")
    
def question3():
    print("\n --- Format Phones Test ---")
    tests = [
        "84987654321",      
        "(84) 98765-4321",  
        "8432321122",       
        "(84) 3232-1122",   
        "99999",            
    ]
    for t in tests:
     print(f"{t:<25} -->  {format_phone(t)}")
    print("----------------------")
    
def aparece_em_ordem(word: str, phrase: str) -> bool:
    padrao = ".*".join(re.escape(ch) for ch in word)
    return re.search(padrao, phrase, re.IGNORECASE | re.DOTALL) is not None

def extrair_cpfs(text):
    pattern = r'\b(?:\d{3}\.\d{3}\.\d{3}-\d{2}|\d{9}-\d{2}|\d{11})\b'
    return re.findall(pattern, text)

def extrair_ceps(text):
    pattern = r'\b(?:\d{2}\.\d{3}-\d{3}|\d{5}-\d{3}|\d{8})\b'
    return re.findall(pattern, text)

def remover_especiais_numeros(texto):
    return re.sub(r'[^A-Za-zÀ-ÿ\s]', '', texto)

def remover_acentos(text):
    text = re.sub(r'[áàãâ]', 'a', text)
    text = re.sub(r'[ÁÀÃÂ]', 'A', text)

    text = re.sub(r'[éèê]', 'e', text)
    text = re.sub(r'[ÉÈÊ]', 'E', text)

    text = re.sub(r'[íìî]', 'i', text)
    text = re.sub(r'[ÍÌÎ]', 'I', text)

    text = re.sub(r'[óòõô]', 'o', text)
    text = re.sub(r'[ÓÒÕÔ]', 'O', text)

    text = re.sub(r'[úùû]', 'u', text)
    text = re.sub(r'[ÚÙÛ]', 'U', text)

    text = re.sub(r'[ç]', 'c', text)
    text = re.sub(r'[Ç]', 'C', text)

    return text

def remove_html(texto):
    return re.sub(r'<[^>]+>', '', texto)

def extract_numbers(texto):
    return re.findall(r'\d+', texto)

def extrair_numeros(texto):
    return re.findall(r'\d+', texto)

def palavras_comecam_terminam_vogal(texto):
    return re.findall(r'\b[aeiouAEIOU][A-Za-zÀ-ÿ]*[aeiouAEIOU]\b', texto)


#!-----------------------------------------------------------------
def example_one():
    print("\n --- Question One ---")
    print("Simple validation email with ReGex\n\t")
    print("Valid Validation:",validate_email("example@dominio.com"))
    print("False Validation:",validate_email("example@dominio"))
    print("----------------------")

def example_two():
    print("\n --- Question Two ---")
    print("Extract phone numbers using regex\n\t")
    text_example = "Contate-nos no 123-456-789 ou 987 654 321"
    print("Normal Text:", text_example)
    print("Numbers extracted in list format.:",extract_phones(text_example))
    print("----------------------")

def example_theree():
    print("\n --- Question Three ---")
    print("Replace URL's\n\t")
    text = "Visite o nosso site em http://www.example.com ou no endereço: https://www.example.com.br para mais informações."
    print("Normal Text: ", text)
    print("Replace Text:",replace_urls(text))
    print("----------------------")
    
def questao4():
    print("\n --- Question Four ---")
    word = input("Digite a palavra/padrão: ").strip()
    phrase = input("Digite a frase/texto onde buscar: ").strip()
    resultado = aparece_em_ordem(word, phrase)
    print(f"\nResultado: {resultado}")
    print("----------------------")

def questao5():
    print("\n --- Question Five ---")
    texto = """
Clientes: 123.456.789-09, 111222333-44 e 98765432100.
Errados: 123.456.789-098, 1234567890, 111.222.333-4.
"""
    print("\nInformações: ", texto)
    print("\nSomente os cpf's extraidos:",extrair_cpfs(texto))
    print("----------------------")
    
def questao6():
    print("\n --- Question Six ---")
    text_test = """
Endereços da Casa de Aluisio Regi:
CEP 59.084-030 fica no em Pau dos Ferros - RN.
Outro: 59084030 e mais um 59084-030.
Aleatorios: 5908403, 590.840-300, 59084-0300.
"""
    print("\nText whith information: ", text_test)
    print("\nTexto com Ceps extraidos:",extrair_ceps(text_test))
    print("----------------------")

def questao7():
    print("\n --- Question Seven ---")
    texto = "Olá, Estudante4664 de Analise e Desenvolvimento d588e Sistemas! Meu nome8484 é Aluisio Rego8487673773!\n voce ja se sentiu desco3u2332nfortável hoje?, além disso, o seu suc23332esso só chegará até voc1313331e com 10.000 --> removido pelo regex <- horas de estudo!!!!"
    print("\nTexto sem remoção de números\n: ", texto)
    print("\nTexto com todos os numeros removidos\n:",remover_especiais_numeros(texto))
    print("----------------------")
    
    

def questao8():
    print("\n --- Question Eight ---")
    text_test = "Olá, Aluísio! Você PROGRAMOU em PYTHÓN? Como está o NÁDÍC DO ÍFRN??????"
    print("\nTexto sem remoção de acentos gráficos: ", text_test)
    print("\nTexto com a remoção de acentos gráficos:",remover_acentos(text_test))


def questao9():
    print("\n --- Question Nine ---")
    texto = "\nMeu nome é <b>Klaywin</b> e eu moro no <i>Ceará</i> ."
    print("\nFrase normal: ", texto)
    print("\nHTML removido:",remove_html(texto))
    print("----------------------")
    
def questao10():
    print("\n --- Question Ten ---")
    texto = "\nMeu número é 987-123 e meu CEP é 59084-030."
    print("\nFrase sem extração: ", texto)
    print("\n Frase com os numeros extraidos:",extract_numbers(texto))
    print("----------------------")
    

def questao11():
    print("\n --- Question Eleven ---")
    texto = """
Olá! Meu nome é João. Eu moro em <b>Natal</b> e gosto de ouvir música.
Meu número é 987-123 e meu CEP é 59084-000.
As palavras: asa, olho, areia, unir, ele, casa.
"""
    print("\nTexto Normal: ", texto)
    print("\nTexto com os numeros extraidos:",extrair_numeros(texto))
    print("----------------------")

def questao12():
    print("\n --- Question Twelve ---")
    texto = """
Olá! Meu nome é João. Eu moro em Natal e gosto de ouvir música.
Meu número é 987-123 e meu CEP é 59084-000.
As palavras: asa, olho, areia, unir, ele, casa.
"""
    print("\nTexto com Vogais:", texto)
    print("\nPalavras do texto quue terminam com vogal:",palavras_comecam_terminam_vogal(texto))
    print("----------------------")



while True:
    view_menu()
    option = input("Choose a question, please!:  ")
    
    if option == "1":
        example_one()
        
    elif option == "2":
        example_two()
        
    elif option == "3":
        example_theree()
    elif option == "4":
        question1()
        
    elif option == "5":
        question2()
    
    elif option == "6":
        question3()
        
    elif option == "7":
        questao4()
        
    elif option == "8":
        questao5()
    
    elif option == "9":
        questao6()
    
    elif option ==  "10":
        questao7()
        
    elif option == "11":
        questao8()
        
    elif option == "12":
        questao9()
          
    elif option == "13":
        questao10()
        
    elif option == "14":
        questao11()
    
    elif option == "15":
        questao12()
        
    elif option == "0":
        print("Exit of menu")
        break 
        
    else: 
        print("Invalid Option")
