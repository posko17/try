import socket
from select import select
import sys

BUFSIZE = 1024

HOST = socket.gethostbyname(socket.gethostname())
print("host ip : ", HOST)

server_socket = socket.socket()
server_socket.bind(('',12345)) #ADDR = (HOST, PORT)
server_socket.listen(3)

print('chat server is open!')		
print('It''s listening for request from a client.')
read_list = [server_socket, sys.stdin]
client_socket = None

while True:
		try:
				read_fds, write_fds, error_fds = select(read_list, [], [], 10)
				for fd in read_fds:
						if fd == server_socket:
								client_socket, addr = server_socket.accept()
								read_list.append(client_socket)
								print('Succesfully connected with a client.')

						elif fd == client_socket:
								msg = client_socket.recv(1024)
								if not msg:
										print('connection lost')
										server_socket.close()
										client_socket.close()
										sys.exit(1)
								print("USER : ", msg.decode('utf-8'), end='')

						elif fd == sys.stdin:
								msg = sys.stdin.readline()
								client_socket.send(msg.encode('utf-8'))
		except:
				print('connection lost')
				server_socket.close()
				client_socket.close()
				sys.exit(1)






