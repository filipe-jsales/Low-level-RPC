import socket
import pickle

# Função remota que será chamada no servidor
def is_even(n):
    print(f"Requisição recebida com o seguinte argumento: {n}")
    return n % 2 == 0

def is_odd(n):
    print(f"Requisição recebida com o seguinte argumento: {n}")
    return n % 2 != 0

def display_message(message):
    print(f"Requisição recebida com o seguinte argumento: {message}")
    return message

# Configurações do servidor
HOST = 'localhost'  
PORT = 8000         

# Criação do socket do servidor
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((HOST, PORT))
server_socket.listen(5)
print(f"Listening on {HOST}:{PORT}...")

while True:
    # Aceitar conexões de clientes
    client_socket, addr = server_socket.accept()
    print(f"Conexão estabelecida com {addr}")

    try:
        # Receber a solicitação do cliente
        request_data = client_socket.recv(1024)
        request = pickle.loads(request_data)

        # Extrair o nome da função e os argumentos
        function_name, args = request

        # Verificar se a função existe no servidor
        if function_name in globals() and callable(globals()[function_name]):
            # Chamar a função remota no servidor
            result = globals()[function_name](*args)
            client_socket.send(pickle.dumps(result))
        else:
            client_socket.send(pickle.dumps(None))
    except Exception as e:
        print(f"Erro ao lidar com a solicitação do cliente: {e}")
    finally:
        client_socket.close()
