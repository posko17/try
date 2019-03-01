import socket
from select import select
import sys

BUFSIZE = 1024

print('Please type chat server ip address')
host_addr = input(': ')
if host_addr == '0': #use host as server's ip address
		host_addr = socket.gethostbyname(socket.gethostname())

print('Please type a port number : ')
host_port = input(': ')
if host_port == '0':
		host_port = 12345 #default port is 12345
client_socket = socket.socket()
client_socket.connect((host_addr, int(host_port)))

print('Success fully connected with IP ADDRESS ', host_addr , ':', host_port)

read_list = [client_socket, sys.stdin]

while True:
		try:
				read_fds, write_fds, error_fds = select(read_list, [], [])
				for fd in read_fds:
						if fd == client_socket:
								msg = client_socket.recv(1024)
								if not msg:
										print('connection lost')
										client_socket.close()
										sys.exit(1)
								print("USER : ", msg.decode('utf-8'), end='')
		
						elif fd == sys.stdin:
								msg = sys.stdin.readline()
								client_socket.send(msg.encode('utf-8'))

		except:
				print('connection lost')
				client_socket.close()
				sys.exit(1)





