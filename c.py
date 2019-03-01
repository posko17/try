from socket import *
from select import *
import sys
from time import ctime

#HOST=input("please write your friend's IP address: ")
#PORT=int(input("please write your friend's PORT: "))
HOST='141.223.199.43'
PORT=12345
BUFSIZE=1024
ADDR = (HOST,PORT)
clientsocket=socket(AF_INET,SOCK_STREAM)
clientsocket.connect(ADDR)
while 1:
	try:
		r,w,x=select([sys.stdin,clientsocket],[],[])
		for i in r:
			if i == sys.stdin:
				message=input()
				sys.stdout.write('\n')
				if message=='quit':
					clientsocket.close()
					print('disconnected')
					sys.exit()
				clientsocket.sendall(message.encode())
				sys.stdout.flush()
			elif i==clientsocket:
				data=clientsocket.recv(1024)
				if len(data):
					print ("message from server:",data.decode())
				else :
					print('disconnected')
					clientsocket.close()
					sys.exit()
			else:
				print('disconnected')
				clientsocket.close()
				sys.exit()
	except Exception as e:
		print(e)
		clientsocket.close()
		sys.exit()
	
