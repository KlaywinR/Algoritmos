
import re 

def extrair_ips(texto):
    padrao_ip = r'\b(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\b'
    ips_encontrados = re.findall(padrao_ip, texto)
    return ips_encontrados

def validar_senha(senha):  
    senha_padrao = r'^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@#$%&]).{8,}$'
    return bool(re.match(senha_padrao, senha))

def limpar_texto(text):
    texto_sem_tags= re.sub(r'<.*?>', '', text)
    texto_sem_urls = re.sub(r'http[s]?://\S+', '', texto_sem_tags)
    texto_limpo = re.sub(r'\s+', ' ', texto_sem_urls).strip()
    return texto_limpo

def main():
    while True:
        print("\nMenu")
        print("1. Desejo Extrair IPs")
        print("2. Desejo Validar senha")
        print("3. Desejo Limpar texto")
        print("4. Desejo Executar todos os testes")
        print("5. Desejo Sair\n")
        
        choice = input("Por favor, escolha uma opção: ")
        if choice == '1':
            text = input("Digite o texto para extrair IPS: ")
            print("IPs extraídos:", extrair_ips(text))
        elif choice == '2':
            pwd = input("Digite a senha para validação: ")
            print("Senha válida:", validar_senha(pwd))
        elif choice == '3':
            text = input("Digite o texto para limpeza de caracteres indesejados: ")
            print("Texto limpo:", limpar_texto(text))
        elif choice == '4':
          
            texto_teste = "Acesso do IP 192.168.0.1 em 2023-10-10 e IP 10.0.0.255"
            print("Todos IPs extraídos:", extrair_ips(texto_teste))
            
            test_password1 = "SenhaForte@123"
            test_password2 = "senhaDemeriioskkkkk"
            print("Situação da Senha:", validar_senha(test_password1))
            print("Situação da Senha:", validar_senha(test_password2))
            
            text_complete = """<html><body>Visite nosso site em http://example.com para mais informações.</body></html>"""
            print("Texto limpo:", limpar_texto(text_complete))
        elif choice == '5':
            print("Saindo do sistema...")
            break
        else:
            print("Opção inválida! Por favor, tente novamente.")

if __name__ == '__main__':
    main()
    