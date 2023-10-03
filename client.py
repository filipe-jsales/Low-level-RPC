import socket
import pickle # Biblioteca para serializar objetos Python

# Configurações do cliente
HOST = 'localhost'  
PORT = 8000         

# Função remota a ser chamada
function_name = "display_message"

# Argumentos da função escolhida
args = ("Mensagem de Filipe Sales",)

# Criação do socket do cliente
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((HOST, PORT))

try:
    # Enviar a solicitação para o servidor
    request = (function_name, args)

    client_socket.send(pickle.dumps(request))

    # Receber o resultado da função remota
    result_data = client_socket.recv(1024)
    result = pickle.loads(result_data)
    

    if result is not None:
        print(f"Resultado da função remota: {result}")
    else:
        print(f"A função remota '{function_name}' não foi encontrada no servidor.")
except Exception as e:
    print(f"Erro ao comunicar com o servidor: {e}")
finally:
    client_socket.close()
